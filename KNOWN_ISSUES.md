# Known issues

Tracked here because they were found via data-level simulation (a Verilator
trace probe / the golden-model harness under `tb/golden/`), not by any
existing testbench — the existing suite mostly checks control-flow timing
and X/Z propagation, not actual computed values.

## Fixed: the relayed value now reaches `result_buf` before the tile ends

Previously: even after the relay itself was fixed (see below), the
downstream pipeline (`bias_add` -> `relu_buffer` -> `requant`) didn't have
enough cycles left in `DRAIN` to catch up to the newly-settled
`product_out` before the tile ended - so externally, `result_buf`/`u_out`
still only ever showed the *pre-relay* value (row 3's own accumulation),
same as before the relay fix, just for a timing-budget reason instead of a
garbling one.

Fixed by widening `DRAIN`: `drain_max` went from `9'd4` (5 active cycles) to
`9'd6` (7 active cycles). Confirmed via direct trace (weight `[0][0]=3`,
rest `0`, so the correct fully-relayed value is `0`): within tile 1's own
`DRAIN` window, `requant_out` now reaches `0` with `req_valid=1` at cycle 8
(well before the tile ends), where previously it only ever reflected the
pre-relay `50`. Confirmed against the real `tpu_top` flow via
`tb/golden/compare.py` too - the full read-window dump for that test vector
now shows a `0, 0, 0` chunk (the post-relay value) appearing between the
pre-relay `50` samples and tile 2's data, which wasn't there before.

Note this doesn't change what `tb/golden/compare.py`'s `expected_today()`
check validates (it still samples early in the window, catching the
pre-relay value, which is still correct and still matches) - it just means
the *later* samples in the same tile's window are now meaningful too, where
before they weren't captured at all. Also note this still doesn't add
cross-row summation (see the next entry) - it only makes the single relayed
row's value reliably observable.

## Note: `DRAIN`'s relay still only ever exposes one PE row's value, not a sum

Even with the relay and its timing budget both fixed, `array.sv`'s `DRAIN`
mechanism is a **relay**, not a reduction: `pe.sv`'s `accum_reg <= accum_in`
replaces a row's value rather than adding to it, so whichever row's value
survives to the bottom (`pe_3_0`, feeding `product_array`) is that row's
*own* independently-computed accumulation - not `sum_k A[m][k]*W[k][n]`
across all 4 rows, which is what a real matrix-multiply tile needs. The
other 3 rows' correctly-computed contributions are overwritten en route and
never surface. Not a regression from anything above - this is the array's
current architecture, called out here so it isn't mistaken for "fixed"
just because the timing/staleness problems around it are gone. A real fix
would need either an additive relay (`accum_reg <= accum_reg + accum_in`)
or a different combination mechanism entirely.

## Fixed: `tile_done` no longer zeroes `accum_reg` before `DRAIN` can read it

`pe.sv` used to have an unconditional `if(tile_done) accum_reg <= 0;`
inside the `if(clr||tile_done)` branch, which fired every time regardless
of `compute_en`/`drain`. Since `tile_done` pulses on the exact edge `DRAIN`
begins, this wiped every row's real accumulated value before `DRAIN`'s
relay could ever read it out - `product_array` reflected bias alone, zero
contribution from the multiply, for every row, every tile. Removed; the
existing `if(!compute_en && !drain) accum_reg <= 0;` guard is sufficient
(and correct: `compute_en` is still `1` on the exact cycle `tile_done`
fires, so that guard alone already spares `accum_reg`). Verified via
`tb/tb_array.sv`'s `run_pe_array_test`/`run_pe_array_activation_valid_test`
(both pass again) and against the real `tpu_top` flow via
`tb/golden/compare.py`.

## Fixed: `vertical_en_fsm` now runs during `DRAIN` instead of `COMPUTE` (Bug F)

Previously: each of the array's 4 PE rows (per column) independently
accumulates its own partial result during `COMPUTE` (confirmed via trace:
with weight column `[1,2,4,8]` and all-ones activation, `pe_0_0/pe_1_0/
pe_2_0/pe_3_0` accumulated to `24/12/6/3` - each exactly
`(# valid activation feeds) x weight[row]`). Those 4 values are meant to
shift down through the array during `DRAIN` via `accum_in`/`v_en_1..3` so
the bottom PE row (`pe_3_0`, feeding `product_array`) eventually outputs all
4 in turn. But `vertical_en_fsm` was driven by `compute_state_start` (same
trigger as `horizontal_en_fsm`) and exited on `tile_done` - both of which
happen during/at the end of `COMPUTE`, not `DRAIN` - so by the time `DRAIN`
actually started, the FSM had already cycled back to `IDLE` and `v_en_1/2/3`
stayed `0` for the entire drain window, every tile, deterministically.

Fix went through two iterations:
1. First: entry/exit both keyed off a held `drain_state` level (entry on
   rise, exit on fall). This correctly phase-aligned the FSM to `DRAIN`, but
   left `en_3` (and thus `accum_in_valid` for row 3) stuck high for the rest
   of `DRAIN` once triggered, since `pe.sv`'s drain branch only updates
   `down_out_drain` when `accum_in_valid` is low - freezing `product_array`
   at a stale value for the rest of the window.
2. Final: `vertical_en_fsm` now takes a genuine one-cycle pulse,
   `drain_state_start` (fired once, on the `COMPUTE->DRAIN` transition edge
   in `tpu_top.sv`, one cycle *before* `drain_state` itself first goes
   high), as its sole entry trigger; `S3` unconditionally returns to `IDLE`
   the next cycle regardless of `drain_state`, and just waits for the next
   pulse. This makes `en_3` a clean one-cycle pulse too, so `down_out_drain`
   catches up immediately afterward instead of staying stuck.

Verified via `tb_array.sv`'s `vertical_en_fsm`/`vertical_en_fsm edge cases`
unit tests (pass) and via direct trace (`v_en_1/2/3` now pulse once each
during `DRAIN`, and `product_array` updates afterward instead of freezing).

## Fixed: `DRAIN`'s row-to-row relay was propagating stale, one-cycle-behind values

With the FSM timing above fixed, each PE row's own value correctly reached
the relay stage, but the *values* coming out the other end still didn't
make sense - a weight column of 4 distinct nonzero values (`[1,2,4,8]`)
settled at a `product_array[0]` value matching none of the 4 rows' own
accumulations and not their sum either.

Root cause, in `pe.sv`'s `drain` branch: a row's `down_out` only reflected
its own `accum_reg` through the *registered* `down_out_drain`, which itself
only updated on a cycle where `accum_in_valid` was low. Since
`vertical_en_fsm` fires `v_en_1`/`v_en_2`/`v_en_3` on consecutive single
cycles, each row sampled the row above's `down_out` *before* that row's own
just-overwritten value had a free cycle to propagate into it - so the relay
chain propagated one-hop-stale data instead of a clean pass-through.

Fixed by making `down_out` reflect `accum_reg` **combinationally** while
`drain` is asserted, removing the register hop entirely (mirroring the same
trick already used for `preload`/`b_reg`):
```systemverilog
assign down_out = preload ? b_reg : (drain ? accum_reg : down_out_drain);
```
Verified via direct trace: with weight column `[1,2,4,8]`, `product_out` now
correctly settles at `24` - `pe_0_0`'s own original value, propagated
cleanly through rows 1/2/3 with no staleness (visibly arriving at each row
in turn, one cycle apart, then holding steady) - confirming this is a
`DRAIN`-phase design that *relays* one row's value through per pass (not a
K-dimension sum across all 4 rows). Note `tb/tb_pe.sv`'s "drain+accum_in_valid:
down_out does not update this cycle" check specifically asserted the old
(buggy) behavior and needs updating to match.

This fix is necessary but not sufficient for the relayed value to actually
become externally observable - see the still-open entry above (the pipeline
downstream of this fix doesn't have enough cycles left in `DRAIN` to catch
up before the tile ends).

Also note: `Bug #8` (`DMA.sv`'s `u_out = result_re_out[0]`, only column 0
ever readable) is still open and independently limits observability
regardless of the above.

## Ruled out: NOT a bug - over-accumulation hypothesis

While characterizing Bug F, initially suspected a 5th bug: `h_en_0..3` stay
high for more cycles (~7) than there are distinct activation feeds (~3, see
Bug D), so `pe.sv`'s `accum_reg <= accum_reg + product_reg` looked like it
might re-add the same stale value multiple times. Traced in detail and this
turned out to be correct behavior, not a bug: `tile_done` fires on the exact
final `COMPUTE` cycle and takes priority over the `compute_en` branch in
`pe.sv`'s `if(clr||tile_done)...else if(compute_en)` chain, which cleanly
pre-empts the would-be extra accumulation. Confirmed via trace: with 3 valid
activation feeds (values 4/8/12) and weight=1, `accum_reg` reached exactly
24 (4+8+12) and then held - no double-counting.

## Fixed: activation double-buffer starves after tile 1

`DMA.sv`'s activation buffer (`act_buf`, a `j_buffer`) is sized for exactly
one 4x4 tile: `act_full_count = 16'd16`. A single `OP_LOAD_ACTIVATIONS` call
supplies exactly those 16 bytes, which is enough to fill `activation_buffer`'s
bank A once and correctly feed tile 1 of an 8-tile group.

After that, DMA has nothing left to drain (`act_empty` stays 1), so bank B
never receives real data and gets stuck in `FILL_INACTIVE` forever; bank A
goes idle too once it empties. Since neither bank's `active` flag is ever
asserted again, `array.sv`'s `val_act_in` register (the PE array's activation
input) simply stops updating and freezes mid-sweep at whatever it last held
during tile 1's 4 activation reads. Tiles 2-8 of the group then compute
against that same frozen, partial activation data instead of fresh input.

This is architecturally different from the weight-loading bugs below: weight-
stationary (one weight tile reused against many different activations) is the
intended design for this array. Activations are supposed to differ per tile.
There is currently no path for that: `act_full_count=16` leaves no room for
more than one tile's worth of activation data per group, and even if it did,
the double-buffer's refill is only ever triggered by DMA activity during the
16-cycle `PREFILL` window, once, at the start of the group.

A real fix likely needs: widening `act_full_count` (e.g. to 128 = 8x16,
mirroring how weights load 256 bytes even though only 16 are consumed) and
reworking when/how the double buffer pulls each tile's 16 bytes out of DMA
so a fresh chunk becomes available before each of tiles 2-8 needs it.

Regression coverage: `tb/tb_activation_buffer.sv`'s "realistic DMA supply"
test drives `DMA_in_valid` for exactly one tile's worth of data (matching
`act_full_count=16`) and then stops, mirroring what the real chip actually
supplies — this is expected to fail until the capacity/refill fix lands.

The golden-model comparison (`tb/golden/`) is scoped to tile 1 of each group
for now, since that's the only tile with well-defined activation input under
the current RTL.

**Fix landed:** `act_buf` widened to `act_full_count=16'd128` (one full group,
`#(.DEPTH(128))` on the `j_buffer` instance - it was previously defaulting to
`DEPTH=16` even after `act_full_count` was first bumped, silently dropping
any byte past index 15). `LOAD_ACTIVATIONS_FSM` now completes each
`OP_LOAD_ACTIVATIONS` call after 16 bytes (a new `act_we_counter`/
`act_we_max`), instead of blocking until the whole 128-byte buffer fills, so
the host can issue up to 8 calls back-to-back before `OP_COMPUTE`. `act_buf`
now only clears once per group (`group_done`, tied to `tile_clr`) instead of
on every load call, so multiple tiles' worth actually accumulate.

Two more bugs turned up in `activation_buffer.sv` while getting this
observable: `output_buf_valid` was gated on the *current-cycle* `buff_a_active`
in addition to `re_valid_a`/`re_valid_b`, dropping every bank's last 4-byte
chunk (the two go out of phase by exactly one cycle, since `active` is
combinational and `re_valid` is registered) - fixed by gating on `re_valid_a`/
`re_valid_b` alone, which are already correctly self-scoped. Separately, the
write-routing that decides which bank receives new DMA data was inferring
readiness from the *other* bank's `active` flag, which goes stale once a bank
finishes draining before the next tile's data physically arrives (exactly
what happens with the new per-tile-pull `DMA_ACT_READ_FSM`) - fixed by
routing off each bank's own `we_a`/`we_b` signal directly.

`tb/tb_activation_buffer.sv`'s "realistic DMA supply" test now feeds a real
second-tile burst and asserts a real pass (30/30) instead of the old
`EXPECTED TO FAIL` placeholder. `tb/tb_dma.sv` was updated for the new
`prefill_start`/`group_done` ports. Full suite: 8/8 testbenches passing.

## Open: PE array has no row-to-row activation skew - not a real matmul

Even with the above fix and the additive DRAIN relay (`accum_reg <= accum_in
+ accum_reg`, see above), tile 1's output still doesn't match
`golden_model.compute_tile()`: checked every sample in the output window
against `golden_full[3][0]` for all 3 `compare.py` vectors, only vec1
happened to match (127==127); vec2 (127 vs golden 17) and vec3 (127 vs golden
0) don't - vec1's match looks coincidental, not a sign the math is right.

Root cause (found via reading `array.sv`, not yet confirmed with a live
trace): `val_act_in` (the array's activation input register,
`array.sv`'s `val_act_in[0..3] <= activation_array[0..3]`) updates all 4 rows
on the same cycle, gated only by `activation_valid` - it never references
`h_en_0..3` or `v_en_0..3`. `horizontal_en_fsm` does stagger something, but
only *columns*: its 4 outputs are shared identically across all 4 rows
(`pe_0_0`/`pe_1_0`/`pe_2_0`/`pe_3_0` all use the same `h_en_0`), so it
provides no row-to-row timing difference. `vertical_en_fsm` only runs during
`DRAIN`, once, at the end - not during `COMPUTE`. Net effect: every row
samples the identical byte-position from the identical chunk on the
identical cycle, so each PE row's `accum_reg` ends up as (its own stationary
weight) x (a plain sum of whatever activation values passed through, with no
way to distinguish which output row they belonged to) - not a per-row dot
product.

A real weight-stationary systolic array needs two things together, not
separately: (1) a per-row delay on the activation input (row *k*'s stream
delayed *k* cycles relative to row 0 - the same idea `right_out`/`a_reg`
already implements *across columns*, just missing *down rows*), and (2)
`PE.sv` passing a combined (accum_in + this cycle's own product) downward
*every* cycle instead of accumulating locally and only relaying once via a
separate `DRAIN` phase. Neither alone is sufficient: the row delay only
produces a correct result if partial sums are also flowing down at the
matching one-row-per-cycle pace, and vice versa. Doing this would also change
`product_array` from a single settled value per tile to a 4-wide stream (one
result per row, as each row's accumulation finishes flowing out). Not yet
implemented - still designing the exact per-row delay chain / `PE.sv` change
before touching the RTL.

## Fixed (2026-08-10): weight-stationary preload bugs

Found via the same trace-probe technique, in `src/tpu_top.sv`, both now fixed:

- **PRELOAD fencepost**: `preload_max` was `preload_count == 9'd4`, holding
  `preload_state` for 5 cycles against a 4-row-deep weight tile FIFO. The 5th
  cycle shifted in a spurious zero and evicted row 0 of the weight tile
  before compute ever started. Fixed to `9'd3` (4 active cycles).
- **Tiles 2-8 computing with an all-zero weight**: `PE_array`'s
  `preload_state_start` port was wired to the raw, ungated `preload_state`
  signal. `weight_loader`'s internal FIFO only refills once per 8-tile group
  (weight-stationary), so by tile 2 it reads back 0, and with nothing gating
  `PE`'s unconditional `preload` -> `b_reg <= b` path, that 0 overwrote the
  held weight every subsequent tile. Fixed by wiring `preload_state_start` to
  the already-computed-but-previously-unused `pe_preload_en` (=
  `preload_state && weight_data_valid`) instead.
