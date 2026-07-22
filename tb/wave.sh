#!/usr/bin/env bash
# Build and run a single testbench with waveform tracing enabled. Run from
# the repo root: tb/wave.sh tpu_top
# Prints the resulting .vcd path - open it yourself with
# `gtkwave <path>` (not launched automatically: GUI apps started from an
# automated shell don't reliably reach your display).
#
# Only tb_tpu_top.sv currently has a $dumpfile/$dumpvars pair in it, so
# that's the only target that will actually produce a .vcd right now - add
# the same two lines (see tb_tpu_top.sv, right after the DUT instance) to
# another tb_<name>.sv to get waveforms for it too.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

VERILATOR_FLAGS="--binary --timing --trace -j 0 -Wno-ENUMVALUE -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-IMPLICIT -Wno-UNDRIVEN -Wno-EOFNEWLINE -Wno-UNOPTFLAT -Wno-WIDTHCONCAT -Wno-fatal"

# name -> extra src files needed besides tb/tb_<name>.sv (space-separated, relative to repo root)
declare -A TESTS=(
  [pe]="src/pe.sv"
  [array]="src/array.sv src/pe.sv"
  [activation_buffer]="src/activation_buffer.sv"
  [weight_fifo]="src/weight_fifo.sv"
  [relu_buffer]="src/relu_buffer.sv"
  [requant]="src/requant.sv"
  [tpu_top]="src/tpu_top.sv src/DMA.sv src/weight_fifo.sv src/activation_buffer.sv src/array.sv src/pe.sv src/relu_buffer.sv src/requant.sv"
)

name="${1:-}"
if [ -z "$name" ] || [ -z "${TESTS[$name]+x}" ]; then
  echo "Usage: tb/wave.sh <name>"
  echo "  where <name> is one of: ${!TESTS[*]}"
  exit 1
fi

mdir="tb/build/${name}_wave"
mkdir -p "$mdir"
# shellcheck disable=SC2086
verilator $VERILATOR_FLAGS ${TESTS[$name]} "tb/tb_${name}.sv" --top-module "tb_${name}" -o "tb_${name}" --Mdir "$mdir"
( cd "$mdir" && "./tb_${name}" )

vcd="$mdir/tb_${name}.vcd"
if [ ! -f "$vcd" ]; then
  echo "No $vcd produced - tb_${name}.sv doesn't have \$dumpfile/\$dumpvars yet."
  exit 1
fi

echo "Wrote $vcd"
echo "Open it with: gtkwave $vcd"
