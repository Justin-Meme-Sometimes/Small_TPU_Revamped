# Known issues

Tracked here because they were found via data-level simulation (a Verilator
trace probe / the golden-model harness under `tb/golden/`, or a standalone
Verilator testbench built specifically to check a module against a
hand-computed golden result), not by any existing testbench - the existing
suite mostly checks control-flow timing and X/Z propagation, not actual
computed values.

## Open: `DMA.sv` only exposes column 0 of each result (Bug #8)

`DMA.sv`'s `u_out = result_re_out[0]` only ever surfaces column 0 of each
computed row; columns 1-3 are written into `result_buf` correctly but never
read back out through `u_out`. The array/bias/relu/requant pipeline itself is
now verified correct (13/13 golden-model vectors match on column 0), so this
is the last thing limiting observability of the chip's output.

`j_buffer`'s `re_out` only holds a row's 4 bytes for one cycle (it clears to
zero the next cycle unless `re` stays asserted, which would just advance to a
new row) - so the fix needs a real holding register, not just a wider mux:

- A `result_row_reg[3:0][7:0]` in `DMA.sv`, latched from `result_re_out` when
  `result_re_valid` pulses.
- A 2-bit byte-select counter cycling 0→3 every cycle of the read window.
- `u_out` becomes `result_row_reg[byte_sel]` instead of `result_re_out[0]`.
- `DMA_READ_FSM` retimed so `result_re` only pulses once every 4 cycles
  (fetching the next row right as `byte_sel` wraps back to 0) instead of
  every cycle as it does today - accounting for the existing 1-cycle
  register lag between a `result_re` pulse and the data actually landing.
- `computed_in_max`'s threshold (64 row-advances) doesn't need to change -
  the read window just naturally takes 4x longer in real time (256 cycles)
  to cover the same 64 rows, since each row now takes 4 cycles to drain
  instead of 1.

Once this lands, `tb/golden/driver.py`'s `read_outputs()` also needs updating
to de-interleave the new 4-cycles-per-row stream into `(row, col)` pairs
before `compare.py` can check columns 1-3.
