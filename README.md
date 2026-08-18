# Tiny TPU Project

SystemVerilog implementation of a Tiny TPU
a 4x4 Systolic Array with scratchpad memory with Certain (Undecided post processing units)


## Block Design

A weight-stationary 4x4 systolic array (`PE_array`) computes `A @ W` for INT8 tiles.
A DMA block streams weights, activations, and bias in from a scratchpad, and the
result flows through a post-processing pipeline (bias-add -> ReLU -> requantize)
before being read back out. The top-level FSM (`tpu_top`) drives loading, a single
event-driven `STREAM` state gated on the array's output-valid signal (so timing
tracks the array's actual pipeline instead of hardcoded cycle counts), and drain.

```
DMA (weights/bias/activations) -> activation_buffer / weight_loader
                                          |
                                          v
                                     PE_array (4x4)
                                          |
                                          v
                          bias_add -> relu_buffer -> requant
                                          |
                                          v
                                    read back out
```

## Files

| File | Module | Description |
|---|---|---|
| `src/tpu_top.sv` | `tpu_top`, `counter_top` | Top-level FSM: load/preload/stream/drain orchestration |
| `src/array.sv` | `PE_array`, `skew_buffer`, `deskew_buffer` | 4x4 systolic array plus input skew / output deskew buffering |
| `src/pe.sv` | `PE` | Single systolic-array processing element (MAC) |
| `src/DMA.sv` | `DMA`, `LOAD_WEIGHTS_FSM`, `LOAD_BIAS_FSM`, `LOAD_ACTIVATIONS_FSM` | Scratchpad DMA/loader FSMs for weights, bias, activations |
| `src/weight_fifo.sv` | `weight_loader`, `FIFO` | Weight-preload FIFO feeding the array |
| `src/activation_buffer.sv` | `activation_buffer`, `bank_fsm`, `i_buffer` | Double-buffered activation input scratchpad |
| `src/bias_add.sv` | `bias_add` | Bias-addition post-processing stage |
| `src/relu_buffer.sv` | `relu_buffer` | ReLU post-processing stage |
| `src/requant.sv` | `requant` | Requantization (shift + saturate back to INT8) |

## Data Format

- Weights and activations: signed INT8
- Accumulator / bias: signed INT32
- Post-processing per output tile: `saturate_int8(shift_right(relu(sum_k A[m][k]*W[k][n] + bias[n]), shift))`
- Reference semantics live in `tb/golden/golden_model.py` (numpy) - this is the
  ground truth the RTL is checked against, not the other RTL testbenches.

## Simulation
    Run these two commands to access the waveform
    ```
        tb/wave.sh tpu_top
        gtkwave tb/build/tpu_top_wave/tb_tpu_top.vcd
    ```

Data-correctness is checked separately, against a golden numpy model rather than
hand-derived cycle counts, via `tb/golden/`:
- `golden_model.py` - textbook-correct numpy reference for the quantized matmul
- `driver.py` / `harness.cpp` - drives `tpu_top`'s real pin interface through a
  persistent Verilator harness
- `compare.py` - compares RTL output against the golden model

## Physical Implementation

Two flows live alongside the RTL:

- `synth/` - a quick Yosys-only synthesis check (sky130_fd_sc_hd), useful for a
  fast netlist/area sanity check without a full place-and-route run. See
  `synth/run_synth.sh`.
- `libralane/` - the full RTL-to-GDSII flow (Yosys -> OpenROAD -> Magic/KLayout)
  via [LibreLane](https://github.com/librelane/librelane), targeting the
  open-source SkyWater sky130A PDK. See `libralane/config.yaml` for the flow
  configuration and `libralane/pin_order.cfg` for the I/O pin-edge assignment.

## Status

Fully placed-and-routed on the open-source SkyWater 130nm (sky130A) PDK via LibreLane
(Yosys -> OpenROAD -> Magic/KLayout).

| | |
|---|---|
| Process | SkyWater sky130A, 130nm, `sky130_fd_sc_hd` std cell lib |
| Die area | 1.293 mm x 1.304 mm (1.686 mm²) |
| Core area | 1.282 mm x 1.281 mm (1.642 mm², 38.8% utilization) |
| Standard cells | 78,638 (7,947 flip-flops, ~29.4k combinational) |
| Total placed instances | 365,658 (incl. fill/tap/decap) |
| I/O | 34 signal pins - `clk`, `rst_n`, `u_in[7:0]`, `u_out[7:0]`, `uio_in[7:0]`, `uio_out[7:0]` |
| Clock | 21 ns period (47.6 MHz) |
| Timing | 0 ns WNS/TNS, setup + hold, clean across all 9 PVT corners |
| Power (typical corner) | 38.6 mW (28.7 mW internal + 9.9 mW switching + 1.7 uW leakage) |
| Routed wirelength | ~2.14 m total |
| IR drop | 428 uV worst-case on VPWR (negligible) |
| DRC | Clean |
| LVS | Clean |
| Antenna | 233 net / 319 pin marginal violations remain (<=1.02x ratio) - known open item |
