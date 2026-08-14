#!/usr/bin/env python3
"""Golden-model comparison test: drives real weight/activation/bias/shift
test vectors through tpu_top.sv's actual pin interface and checks the
observed output against two things:

  1. `expected_today(...)` - what the RTL *should* produce for tile 1 given
     the currently-known, still-open bugs (KNOWN_ISSUES.md: activation
     starvation/drop, and only PE row 3 of each column ever reaching
     product_array, and only column 0 ever reaching u_out). This is a
     regression check on today's (buggy) behavior, and also validates that
     the bug characterization in KNOWN_ISSUES.md is actually complete: if
     the RTL doesn't match this formula, there's still something
     uncharacterized.
  2. `golden_model.compute_tile(...)` - the textbook-correct result. Only
     used for reporting the size of the current gap, not as a pass/fail
     check yet, since most of it isn't observable through the chip's pins
     under today's RTL (see KNOWN_ISSUES.md).

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
from driver import Stimulus, run  # noqa: E402
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


def expected_today(weight4x4: np.ndarray, activation4x4: np.ndarray, bias4: np.ndarray, shift: int) -> int:
    """Tile-1 prediction given today's known bugs:
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
    s.load_activations(pack_activation16(activation4x4))
    s.load_requant(shift)
    s.compute()
    read_start, read_end = s.read_outputs()
    out = run(s)
    u_out_stream = [u for (u, _) in out[read_start:read_end]]
    # u_out is registered 1 cycle behind each result_re pulse; skip index 0.
    samples = u_out_stream[1:]

    exp_today = expected_today(weight4x4, activation4x4, bias4, shift)
    golden = compute_tile(weight4x4, activation4x4, bias4, shift)

    # Tile 1's block is a short run of repeated identical values at the
    # front of the stream (see KNOWN_ISSUES.md - result_we pulses multiple
    # times per tile with an unchanged value under today's RTL). Use the
    # 3rd sample to stay clear of any edge effects at the very start.
    actual = samples[2] if len(samples) > 2 else None
    # Interpret as signed int8 for comparison (RTL byte 0-255 -> signed).
    actual_signed = actual - 256 if actual is not None and actual >= 128 else actual

    match = (actual_signed == exp_today)
    print(f"[{label}] actual(tile1,row3,col0)={actual_signed}  expected_today={exp_today}  "
          f"golden_full[3][0]={int(golden[3][0])}  {'OK' if match else 'MISMATCH'}")
    print(f"    raw samples (first 10): {samples[:10]}")
    return match


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

    print()
    print(f"{sum(results)}/{len(results)} vectors matched expected_today()")
    return 0 if all(results) else 1


if __name__ == "__main__":
    sys.exit(main())
