#!/usr/bin/env python3
"""One-off calibration run: identity weight tile + a recognizable activation
tile + zero bias + shift=0, so the correct math is simply
product[row][col] == activation[row][col], making it trivial to read off
byte order/orientation and see exactly where known bugs (dropped last
activation row, lane-0-only readback) show up in the raw output stream."""
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from driver import Stimulus, run, measure_compute_cycles, OP_READ_OUTPUTS  # noqa: E402

weight_tile = bytes([
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1,
])
weight256 = weight_tile + bytes([0xFF]) * (256 - 16)

activation_tile = bytes([
    1, 2, 3, 4,
    5, 6, 7, 8,
    9, 10, 11, 12,
    13, 14, 15, 16,
])

bias16 = bytes(16)

s = Stimulus()
s.reset()
s.load_weights(weight256)
s.load_bias(bias16)
s.load_activations(activation_tile)
s.load_requant(0)
s.compute(settle_cycles=measure_compute_cycles(s))
read_start, read_end = s.read_outputs()

out = run(s)

print(f"total cycles driven: {len(s.rows)}")
print(f"read window: rows [{read_start}:{read_end}]")
u_out_stream = [u for (u, _) in out[read_start:read_end]]
print("raw u_out during read window:", u_out_stream)

# u_out = result_re_out[0] is registered, 1 cycle behind each result_re
# pulse; byte i (0-indexed) of real data should appear at read_start+i+1.
nonzero_or_all = u_out_stream
print("first 16 bytes (shifted by 1 for the register delay):", u_out_stream[1:17])
