#!/usr/bin/env python3
"""
Drives tb/golden/build/harness_sim (a Verilator build of src/tpu_top.sv)
cycle-by-cycle over its real pin interface (rst_n/u_in/uio_in -> u_out/
uio_out), replaying the same opcode/timing protocol validated in
tb/tb_tpu_top.sv (pulse_opcode / load_*_via_opcode / state durations), but
with real, caller-supplied weight/activation/bias/requant bytes instead of a
free-running dummy counter.

Timing constants below are derived directly from src/tpu_top.sv's state
counters (all opcode-driven, none data-dependent, so these are exact, not
guesses):
    PREFILL: 16 cycles   PRELOAD: 4 cycles   COMPUTE: 8 cycles
    DRAIN:   7 cycles    FUNCS:   4 cycles   DONE:    1 cycle
    tiles per group: 8
    compute() total = PREFILL + 8*(PRELOAD+COMPUTE+DRAIN+FUNCS) + DONE
                     = 16 + 8*23 + 1 = 201 cycles from the OP_COMPUTE pulse
                       to the FSM settling back in IDLE.
Load-window pad_cycles mirror tb_tpu_top.sv's proven load_*_via_opcode()
paddings (load FSMs are simple "write until full" counters, also
data-independent).

This module owns stimulus construction and output capture only. It does not
interpret the results - see golden_model.py / compare.py for that.
"""
import subprocess
from pathlib import Path

HARNESS = Path(__file__).parent / "build" / "harness_sim"

OP_NONE = 0x0
OP_COMPUTE = 0x1
OP_LOAD_REQUANT = 0x2
OP_READ_OUTPUTS = 0x3
OP_STATUS = 0x4
OP_LOAD_WEIGHTS = 0x5
OP_LOAD_ACTIVATIONS = 0x6
OP_LOAD_BIAS = 0x7

COMPUTE_TOTAL_CYCLES = 16 + 8 * (4 + 8 + 7 + 4) + 1  # 201, see header comment


class Stimulus:
    """Builds the per-cycle (rst_n, u_in, uio_in) stimulus list."""

    def __init__(self):
        self.rows = []  # list of (rst_n, u_in, uio_in)

    def _step(self, u_in=0, uio_in=OP_NONE):
        self.rows.append((1, u_in & 0xFF, uio_in & 0xFF))

    def reset(self):
        self.rows.append((0, 0, OP_NONE))
        self.rows.append((0, 0, OP_NONE))
        self.rows.append((1, 0, OP_NONE))  # rst_n deasserted this cycle
        self._step()  # one settle cycle, matching reset_dut()'s trailing step()

    def pulse_opcode(self, opcode, u_in=0):
        self._step(u_in=u_in, uio_in=opcode)
        self._step(u_in=u_in, uio_in=OP_NONE)

    def load_bytes_via_opcode(self, opcode, data: bytes, pad_cycles: int):
        """Mirrors load_weights_via_opcode/load_bias_via_opcode/
        load_activations_via_opcode in tb_tpu_top.sv: 1-cycle opcode pulse,
        1-cycle deassert, then exactly len(data) cycles presenting each byte
        on u_in (which is when the DMA load FSM actually consumes them), then
        pad_cycles more cycles for the load FSM to settle back to IDLE."""
        self._step(uio_in=opcode)
        self._step(uio_in=OP_NONE)
        for b in data:
            self._step(u_in=b)
        for _ in range(pad_cycles):
            self._step()

    def load_weights(self, data256: bytes):
        assert len(data256) == 256
        self.load_bytes_via_opcode(OP_LOAD_WEIGHTS, data256, pad_cycles=25)

    def load_bias(self, data16: bytes):
        assert len(data16) == 16
        self.load_bytes_via_opcode(OP_LOAD_BIAS, data16, pad_cycles=10)

    def load_activations(self, data16: bytes):
        assert len(data16) == 16
        self.load_bytes_via_opcode(OP_LOAD_ACTIVATIONS, data16, pad_cycles=10)

    def load_requant(self, shift: int):
        self.pulse_opcode(OP_LOAD_REQUANT, u_in=shift)

    def compute(self, settle_cycles: int = COMPUTE_TOTAL_CYCLES + 15):
        """Kicks OP_COMPUTE and waits long enough for a full 8-tile group to
        run to completion (see COMPUTE_TOTAL_CYCLES) plus slack."""
        self.pulse_opcode(OP_COMPUTE)
        for _ in range(settle_cycles):
            self._step()

    def read_outputs(self):
        """Pulses OP_READ_OUTPUTS then runs the fixed 64-cycle read window
        (computed_in_max = read_count == 64, independent of fill level).
        Returns the index range (start, end) into the captured u_out stream
        (relative to rows appended by this call) covering those 64 cycles."""
        self._step(uio_in=OP_READ_OUTPUTS)
        start = len(self.rows)
        for _ in range(70):
            self._step()
        return start, start + 70

    def status(self):
        idx = len(self.rows)
        self.pulse_opcode(OP_STATUS)
        return idx


def run(stimulus: Stimulus):
    """Runs the harness over the given stimulus, returns list of (u_out, uio_out)
    per cycle, aligned 1:1 with stimulus.rows."""
    text = "\n".join(f"{r} {u} {b}" for r, u, b in stimulus.rows) + "\n"
    proc = subprocess.run([str(HARNESS)], input=text, capture_output=True, text=True, check=True)
    out = []
    for line in proc.stdout.splitlines():
        u_out, uio_out = line.split()
        out.append((int(u_out), int(uio_out)))
    assert len(out) == len(stimulus.rows), f"got {len(out)} output rows, expected {len(stimulus.rows)}"
    return out
