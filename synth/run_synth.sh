#!/usr/bin/env bash
# Synthesizes tpu_top (src/*.sv) against the SkyWater sky130_fd_sc_hd
# standard cell library using Yosys, producing a gate-level netlist ready
# to hand to OpenROAD for floorplan/place/route.
#
# Uses the hpretl/iic-osic-tools Docker image, which bundles Yosys, OpenROAD,
# Magic, KLayout and the sky130 PDK together - no local tool/PDK install
# needed. Pull it once with:
#   docker pull hpretl/iic-osic-tools:2025.07
#
# Usage:
#   bash synth/run_synth.sh                       # tt (typical) corner, default clock period
#   CORNER=ss_100C_1v60 bash synth/run_synth.sh    # a specific PVT corner
#   CLOCK_PERIOD_NS=15 bash synth/run_synth.sh     # override the SDC clock period
#
# Outputs land in synth/out/:
#   tpu_top.synth.v     - synthesized gate-level netlist (sky130_fd_sc_hd cells)
#   tpu_top.synth.json  - same, as JSON (handy for custom scripting)
#   tpu_top.sdc          - starter clock constraint for the OpenROAD step
#   stat.txt             - cell histogram + area report
#   synth.log            - full Yosys transcript
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

IMAGE="${IMAGE:-hpretl/iic-osic-tools:2025.07}"
CORNER="${CORNER:-tt_025C_1v80}"   # typical corner by default; see sky130_fd_sc_hd/lib for others
TOP="${TOP:-tpu_top}"
OUT_DIR="${OUT_DIR:-synth/out}"
CLOCK_PERIOD_NS="${CLOCK_PERIOD_NS:-20}"   # 50 MHz starting point - tune once real timing is known
SRC_FILES="${SRC_FILES:-src/pe.sv src/array.sv src/weight_fifo.sv src/activation_buffer.sv src/relu_buffer.sv src/requant.sv src/bias_add.sv src/DMA.sv src/tpu_top.sv}"

mkdir -p "$OUT_DIR"

docker run --rm \
    -v "$ROOT:/work" \
    -e TOP="$TOP" \
    -e CORNER="$CORNER" \
    -e SRC_FILES="$SRC_FILES" \
    -e OUT_DIR="$OUT_DIR" \
    -e CLOCK_PERIOD_NS="$CLOCK_PERIOD_NS" \
    "$IMAGE" --skip bash /work/synth/container_synth.sh

echo
echo "== synthesis done =="
echo "Netlist:  $OUT_DIR/${TOP}.synth.v"
echo "Stats:    $OUT_DIR/stat.txt"
echo "SDC:      $OUT_DIR/${TOP}.sdc"
echo "Full log: $OUT_DIR/synth.log"
