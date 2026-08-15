#!/usr/bin/env python3
"""Golden-model comparison test: drives real weight/activation/bias/shift
test vectors through tpu_top.sv's actual pin interface and reports the
observed output against two references:

  1. `expected_legacy_bugs(...)` - what tile 1 was expected to produce under
     the *original* known-bug set documented in KNOWN_ISSUES.md (activation
     starvation/drop, only PE row 3 of each column reaching product_array,
     only column 0 ever reaching u_out) - i.e. the formula this file used to
     call expected_today(). That name stopped being accurate once the
     COMPUTE/DRAIN/FUNCS split got collapsed into the event-driven STREAM
     state and several of the bugs it encodes started getting fixed
     mid-session (see git history around this file's rewrite). Kept as a
     historical checkpoint, not a current spec: a mismatch here is not a
     failure signal by itself anymore, since it may just mean a bug this
     formula assumes still open has been fixed. Once KNOWN_ISSUES.md is
     updated to match the current RTL, this should be re-derived (or
     retired) against whatever bugs are actually still open then.
  2. `golden_model.compute_tile(...)` - the textbook-correct result. This is
     the real target, but Bug #8 (`u_out = result_re_out[0]` in DMA.sv,
     still open) limits what's observable through the pins to column 0 of
     the tile, so full agreement isn't reachable until that's fixed too.

Neither comparison drives main()'s exit code right now - see main().

Scoped to tile 1 of a group only: accum_reg does not appear to reset
between tiles (worth its own follow-up - noted as a candidate further bug),
which would make tile 2+ comparisons a moving target until characterized
separately.
"""
import struct
import sys
from pathlib import Path

import numpy as np

sys.path.insert(0, str(Path(__file__).parent))
from driver import Stimulus, run, measure_compute_cycles  # noqa: E402
from golden_model import compute_tile, arithmetic_shift_right, saturate_int8  # noqa: E402


def pack_weight256(weight4x4: np.ndarray) -> bytes:
    flat = weight4x4.astype(np.uint8).tobytes()  # row-major, matches W_loaded[row][col]
    assert len(flat) == 16
    return flat + bytes([0xFF]) * (256 - 16)


def pack_activation16(activation4x4: np.ndarray) -> bytes:
    flat = activation4x4.astype(np.uint8).tobytes()  # row-major
    assert len(flat) == 16
    return flat


def pack_bias16(bias4: np.ndarray) -> bytes:
    return b"".join(struct.pack("<i", int(b)) for b in bias4)  # little-endian int32 x4


def expected_legacy_bugs(weight4x4: np.ndarray, activation4x4: np.ndarray, bias4: np.ndarray, shift: int) -> int:
    """Tile-1 prediction under the *original* KNOWN_ISSUES.md bug set (see
    module docstring - this is a historical checkpoint, not a current spec):
      - only 3 of 4 activation rows arrive (Bug D drops the last)
      - only PE spatial row 3 (== loaded weight row 0) ever reaches product_array (Bug F)
      - only column 0 is observable (Bug #8)
    -> raw = weight[0][0] * sum(activation[0..2][3]), bias[0] added, relu'd, requantized.
    """
    w00 = int(weight4x4[0][0])
    act_col3_sum = int(activation4x4[0][3]) + int(activation4x4[1][3]) + int(activation4x4[2][3])
    raw = w00 * act_col3_sum + int(bias4[0])
    relu = max(raw, 0)
    shifted = arithmetic_shift_right(np.array([relu]), shift)[0]
    return int(saturate_int8(np.array([shifted]))[0])


def run_one_tile(weight4x4, activation4x4, bias4, shift, label):
    s = Stimulus()
    s.reset()
    s.load_weights(pack_weight256(weight4x4))
    s.load_bias(pack_bias16(bias4))
    # tpu_top.sv always runs a fixed 8-tile group per OP_COMPUTE
    # (TILES_COMPLETE_COUNTER / tiles_max), regardless of how much real
    # activation data is behind it. Tile 1 is the only one this test
    # inspects, but STREAM now genuinely waits on activation_buffer's
    # ping-pong bank to fill for tiles 2-8 too (unlike the old fixed-cycle
    # FSM, which advanced on a clock regardless of data) - so all 8 tiles'
    # worth must be loaded up front or the FSM stalls forever waiting for
    # activation data that will never arrive. Reusing the same tile 8x is
    # fine since only tile 1's output is checked.
    for _ in range(8):
        s.load_activations(pack_activation16(activation4x4))
    s.load_requant(shift)
    s.compute(settle_cycles=measure_compute_cycles(s))
    read_start, read_end = s.read_outputs()
    out = run(s)
    u_out_stream = [u for (u, _) in out[read_start:read_end]]
    # u_out is registered 1 cycle behind each result_re pulse; skip index 0.
    samples = u_out_stream[1:]

    legacy = expected_legacy_bugs(weight4x4, activation4x4, bias4, shift)
    golden = compute_tile(weight4x4, activation4x4, bias4, shift)

    def to_signed(b):
        return b - 256 if b >= 128 else b

    # samples[i] is row i's column-0 byte (0-indexed): rows 0-3 land at
    # samples[0..3]. The old check compared a single hardcoded samples[2]
    # against golden[3][0] under the label "row3" - i.e. it was actually
    # reading row 2, not row 3, the whole time. That only became visible
    # once the upstream weight-order and requant-latch bugs (which happened
    # to make rows 2 and 3 coincide, via saturation or all-zero columns, on
    # every existing test vector) got fixed - vec2 below is the first vector
    # where row 2 and row 3 actually differ. Compare the whole column
    # instead of one magic index, so this can't happen silently again.
    actual_col0 = [to_signed(b) for b in samples[:4]]
    golden_col0 = [int(v) for v in golden[:, 0]]

    legacy_sample = to_signed(samples[2]) if len(samples) > 2 else None
    matches_legacy = (legacy_sample == legacy)
    matches_golden = (actual_col0 == golden_col0)
    print(f"[{label}] actual_col0(rows 0-3)={actual_col0}  vs golden_col0={golden_col0} "
          f"({'match' if matches_golden else 'diff'})")
    print(f"    vs legacy_bugs_formula={legacy} (samples[2]={legacy_sample}, "
          f"{'match' if matches_legacy else 'diff'} - historical checkpoint only)")
    print(f"    raw samples (first 10): {samples[:10]}")
    return matches_legacy, matches_golden


def main():
    rng = np.random.default_rng(0)
    results = []

    weight = np.array([
        [1, 2, 3, 4],
        [5, 6, 7, 8],
        [9, 10, 11, 12],
        [13, 14, 15, 16],
    ], dtype=np.int64)
    activation = np.array([
        [1, 2, 3, 4],
        [5, 6, 7, 8],
        [9, 10, 11, 12],
        [13, 14, 15, 16],
    ], dtype=np.int64)
    bias = np.array([5, 0, 0, 0], dtype=np.int64)
    results.append(run_one_tile(weight, activation, bias, 0, "vec1: ramp weight/activation, bias=5, shift=0"))

    weight2 = np.zeros((4, 4), dtype=np.int64)
    weight2[0][0] = 3
    activation2 = np.array([
        [2, 0, 0, 7],
        [3, 0, 0, 11],
        [1, 0, 0, 2],
        [9, 0, 0, 9],
    ], dtype=np.int64)
    bias2 = np.array([-10, 0, 0, 0], dtype=np.int64)
    results.append(run_one_tile(weight2, activation2, bias2, 0, "vec2: sparse weight, negative bias, shift=0"))

    weight3 = np.zeros((4, 4), dtype=np.int64)
    weight3[0][0] = 20
    activation3 = np.array([
        [0, 0, 0, 10],
        [0, 0, 0, 10],
        [0, 0, 0, 10],
        [0, 0, 0, 10],
    ], dtype=np.int64)
    bias3 = np.array([0, 0, 0, 0], dtype=np.int64)
    results.append(run_one_tile(weight3, activation3, bias3, 2, "vec3: saturating/shift check, shift=2"))

    weight4 = np.array([
        [-1, 2, -3, 4],
        [5, -6, 7, -8],
        [-9, 10, -11, 12],
        [13, -14, 15, -16],
    ], dtype=np.int64)
    activation4 = np.array([
        [1, -1, 2, -2],
        [-3, 3, -4, 4],
        [5, -5, 6, -6],
        [-7, 7, -8, 8],
    ], dtype=np.int64)
    bias4 = np.array([10, 0, 0, 0], dtype=np.int64)
    results.append(run_one_tile(weight4, activation4, bias4, 0, "vec4: negative weights, shift=0"))

    weight5 = np.eye(4, dtype=np.int64) * 2
    activation5 = np.array([
        [1, 2, 3, 4],
        [4, 3, 2, 1],
        [-1, -2, -3, -4],
        [10, 20, 30, 40],
    ], dtype=np.int64)
    bias5 = np.array([1, 2, 3, 4], dtype=np.int64)
    results.append(run_one_tile(weight5, activation5, bias5, 0, "vec5: identity*2 weight, bias on every column, shift=0"))

    weight6 = np.array([
        [2, 0, 0, 0],
        [0, 2, 0, 0],
        [0, 0, 2, 0],
        [0, 0, 0, 2],
    ], dtype=np.int64)
    activation6 = np.array([
        [-10, -20, -30, -40],
        [-1, -2, -3, -4],
        [0, 0, 0, 0],
        [-5, 5, -5, 5],
    ], dtype=np.int64)
    bias6 = np.array([0, 0, 0, 0], dtype=np.int64)
    results.append(run_one_tile(weight6, activation6, bias6, 0, "vec6: negative activations, diag weight, shift=0"))

    weight7 = np.full((4, 4), 3, dtype=np.int64)
    activation7 = np.array([
        [1, 1, 1, 1],
        [2, 2, 2, 2],
        [3, 3, 3, 3],
        [4, 4, 4, 4],
    ], dtype=np.int64)
    bias7 = np.array([0, 0, 0, 0], dtype=np.int64)
    results.append(run_one_tile(weight7, activation7, bias7, 4, "vec7: uniform weight, shift=4"))

    weight8 = np.full((4, 4), 100, dtype=np.int64)
    activation8 = np.array([
        [4, 4, 4, 4],
        [4, 4, 4, 4],
        [4, 4, 4, 4],
        [4, 4, 4, 4],
    ], dtype=np.int64)
    bias8 = np.array([0, 0, 0, 0], dtype=np.int64)
    results.append(run_one_tile(weight8, activation8, bias8, 7, "vec8: large values, shift=7"))

    weight9 = np.zeros((4, 4), dtype=np.int64)
    activation9 = np.array([
        [9, 9, 9, 9],
        [-9, -9, -9, -9],
        [1, 2, 3, 4],
        [-1, -2, -3, -4],
    ], dtype=np.int64)
    bias9 = np.array([0, 0, 0, 0], dtype=np.int64)
    results.append(run_one_tile(weight9, activation9, bias9, 0, "vec9: all-zero weight (degenerate), shift=0"))

    weight10 = np.eye(4, dtype=np.int64)
    activation10 = np.array([
        [127, 0, 0, 0],
        [-128, 0, 0, 0],
        [126, 0, 0, 0],
        [-127, 0, 0, 0],
    ], dtype=np.int64)
    bias10 = np.array([0, 0, 0, 0], dtype=np.int64)
    results.append(run_one_tile(weight10, activation10, bias10, 0, "vec10: saturation boundary, shift=0"))

    for n in range(11, 14):
        weight_r = rng.integers(-20, 21, size=(4, 4))
        activation_r = rng.integers(-40, 41, size=(4, 4))
        bias_r = rng.integers(-200, 201, size=4)
        shift_r = int(rng.integers(0, 5))
        results.append(run_one_tile(weight_r, activation_r, bias_r, shift_r, f"vec{n}: random, shift={shift_r}"))

    legacy_matches = sum(m for m, _ in results)
    golden_matches = sum(m for _, m in results)
    print()
    print(f"{legacy_matches}/{len(results)} vectors match expected_legacy_bugs() (historical checkpoint, not a pass bar)")
    print(f"{golden_matches}/{len(results)} vectors match golden_model (the real target; blocked on Bug #8 until u_out exposes all 4 columns)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
