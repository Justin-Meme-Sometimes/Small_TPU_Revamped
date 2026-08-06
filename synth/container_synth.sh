#!/usr/bin/env bash
# Runs *inside* the hpretl/iic-osic-tools container (invoked by run_synth.sh,
# which mounts the repo at /work and sets these env vars). Not meant to be
# run directly on the host - it assumes $PDK_ROOT/yosys/etc. from that image.
set -euo pipefail
cd /work

: "${TOP:?}" "${CORNER:?}" "${SRC_FILES:?}" "${OUT_DIR:?}" "${CLOCK_PERIOD_NS:?}"

LIB="$(find "$PDK_ROOT" -iname "sky130_fd_sc_hd__${CORNER}.lib" | head -1)"
if [ -z "$LIB" ]; then
    echo "Couldn't find a sky130_fd_sc_hd liberty file for corner '${CORNER}' under \$PDK_ROOT ($PDK_ROOT)" >&2
    exit 1
fi
echo "Using liberty: $LIB"

mkdir -p "$OUT_DIR"

cat > "$OUT_DIR/${TOP}.sdc" << SDC
create_clock -name clk -period ${CLOCK_PERIOD_NS} [get_ports clk]
SDC

yosys -p "
read_verilog -sv ${SRC_FILES}
hierarchy -check -top ${TOP}
synth -top ${TOP}
dfflibmap -liberty ${LIB}
abc -liberty ${LIB}
clean
tee -o ${OUT_DIR}/stat.txt stat -liberty ${LIB}
check
write_verilog -noattr ${OUT_DIR}/${TOP}.synth.v
write_json ${OUT_DIR}/${TOP}.synth.json
" 2>&1 | tee "$OUT_DIR/synth.log"
