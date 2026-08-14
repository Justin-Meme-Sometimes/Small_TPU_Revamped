# Known issues

Tracked here because they were found via data-level simulation (a Verilator
trace probe / the golden-model harness under `tb/golden/`, or a standalone
Verilator testbench built specifically to check a module against a
hand-computed golden result), not by any existing testbench - the existing
suite mostly checks control-flow timing and X/Z propagation, not actual
computed values.

## Open: `tpu_top.sv` not yet updated for the new array interface

Three separate issues, found by inspection while integrating the array
changes above - `tpu_top.sv` itself hasn't been edited yet:

- **`activation_valid` width mismatch**: `PE_array`'s `activation_valid` port
  is now `[3:0]` (one bit per row, feeding `skew_buffer`), but `tpu_top.sv`
  still connects it to `systolic_act_in_valid`, a single bit sourced from
  `activation_buffer`'s `output_buf_valid`. Needs the one real bit replicated
  across all 4 lanes.
- **`clr_state` hardcoded to `1'd0`**: harmless before, since `pe.sv`'s own
  reset already ORs in `tile_done`. Not harmless now - `skew_buffer` and
  `deskew_buffer`'s `clr` inputs are wired only to `clr_state` inside
  `PE_array`, not `tile_done`, so with `clr_state` permanently 0 neither
  module ever resets between tiles; their internal counters/pointers would
  carry stale state from tile 1 into tile 2. Best fixed inside `PE_array`
  itself (drive their `clr` off `clr_state || tile_done`, matching the
  convention `pe.sv` already uses) rather than worked around in `tpu_top.sv`.
- **COMPUTE/DRAIN phase split no longer matches the array's behavior (the
  big one)**: `bias_add`/`relu_buffer`/`requant` are all still gated on
  `drain_state`, which only goes high after the FSM's fixed 8-cycle
  `COMPUTE` state ends. But `deskew_buffer` now streams results out
  continuously, starting partway through `COMPUTE` as soon as the pipeline
  fills - not during a later separate phase. By the time the FSM reaches
  `DRAIN`, the real `product_out_valid` pulses have likely already come and
  gone while `drain_state` was still 0, so downstream never sees them. Needs
  the FSM states themselves reworked - collapsing `COMPUTE`+`DRAIN` into one
  streaming window, with completion driven off `deskew_buffer`'s actual
  row-release count instead of the fixed `compute_max`/`drain_max` cycle
  counters. Not yet designed in detail.

## Open: `DMA.sv` only exposes column 0 of each result (Bug #8)

`DMA.sv`'s `u_out = result_re_out[0]` only ever surfaces column 0 of each
computed row; columns 1-3 are written into `result_buf` correctly but never
read back out through `u_out`. Independent of everything above - limits
observability of the chip's output regardless of whether the array itself is
correct.

