#!/usr/bin/env python3
"""
Drives tb/golden/build/harness_sim (a Verilator build of src/tpu_top.sv)
cycle-by-cycle over its real pin interface (rst_n/u_in/uio_in -> u_out/
uio_out), replaying the same opcode/timing protocol validated in
tb/tb_tpu_top.sv (pulse_opcode / load_*_via_opcode / state durations), but
with real, caller-supplied weight/activation/bias/requant bytes instead of a
free-running dummy counter.

Load-window pad_cycles mirror tb_tpu_top.sv's proven load_*_via_opcode()
paddings (load FSMs are simple "write until full" counters, data-independent,
so these are exact, not guesses).

OP_COMPUTE's settle time is *not* a fixed constant here anymore. The FSM used
to have fixed-width COMPUTE/DRAIN/FUNCS states (8+7+4 cycles/tile), which
made the total cycle count computable in advance - but that split was buggy
(see KNOWN_ISSUES.md's "COMPUTE/DRAIN phase split" entry) and got collapsed
into a single event-driven STREAM state whose length depends on when
deskew_buffer actually finishes releasing a tile's rows, not a cycle count.
Any hardcoded constant here would just go stale again the next time the
array's internal pipeline depth changes. Instead, use measure_compute_cycles()
to ask the RTL itself (via OP_STATUS) how long it took, then feed that into
compute(settle_cycles=...).

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

    def compute(self, settle_cycles: int):
        """Kicks OP_COMPUTE and waits settle_cycles more cycles before
        returning control. Get settle_cycles from measure_compute_cycles() -
        there's no static formula for it anymore (see module docstring)."""
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


def measure_compute_cycles(stimulus: Stimulus, max_cycles: int = 4000, margin: int = 5) -> int:
    """Discovers how many cycles OP_COMPUTE actually takes on the current
    RTL, instead of assuming a fixed count (see module docstring for why that
    used to work and doesn't anymore).

    Replays `stimulus`'s rows unmodified (does not mutate it), pulses
    OP_COMPUTE, then holds OP_STATUS on uio_in for up to max_cycles while
    watching uio_out for the FSM reporting IDLE again - this is a real,
    separate harness run, so call it once per distinct load sequence rather
    than per-cycle.

    Returns the number of cycles after the OP_COMPUTE pulse it took to see
    IDLE, plus `margin` cycles of slack.
    """
    probe = Stimulus()
    probe.rows = list(stimulus.rows)
    probe.pulse_opcode(OP_COMPUTE)
    poll_start = len(probe.rows)
    for _ in range(max_cycles):
        probe._step(uio_in=OP_STATUS)
    out = run(probe)

    # opcode_reg is a 1-cycle register that must first latch OP_STATUS off
    # uio_in, and uio_out is a second 1-cycle register that then reacts to
    # opcode_reg - so the first two polled cycles' uio_out values are stale,
    # still reflecting whatever opcode preceded this poll. Skip those.
    for i in range(poll_start + 2, len(out)):
        _, uio_out = out[i]
        if uio_out == 1:
            return (i - poll_start) + margin
    raise RuntimeError(
        f"tpu_top never reported IDLE within {max_cycles} cycles of OP_COMPUTE - "
        "FSM may be hung (check STREAM's row_max/tile_complete exit conditions)"
    )
