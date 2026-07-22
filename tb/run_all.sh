#!/usr/bin/env bash
# Build and run every testbench under tb/. Run from the repo root.
set -uo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

VERILATOR_FLAGS="--binary --timing -j 0 -Wno-ENUMVALUE -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-IMPLICIT -Wno-UNDRIVEN -Wno-EOFNEWLINE -Wno-UNOPTFLAT -Wno-WIDTHCONCAT -Wno-fatal"

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

pass=0
fail=0
failed_names=()

for name in "${!TESTS[@]}"; do
  echo "=== $name ==="
  mdir="tb/build/$name"
  mkdir -p "$mdir"
  # shellcheck disable=SC2086
  if ! verilator $VERILATOR_FLAGS ${TESTS[$name]} "tb/tb_${name}.sv" --top-module "tb_${name}" -o "tb_${name}" --Mdir "$mdir"; then
    echo "BUILD FAILED: $name"
    fail=$((fail+1))
    failed_names+=("$name (build)")
    continue
  fi
  output="$("./$mdir/tb_${name}" 2>&1)"
  run_status=$?
  echo "$output"
  if [ "$run_status" -ne 0 ] || grep -q '\[FAIL\]' <<< "$output"; then
    fail=$((fail+1))
    failed_names+=("$name")
  else
    pass=$((pass+1))
  fi
  echo
done

echo "=================================="
echo "Passed: $pass  Failed: $fail"
if [ "$fail" -gt 0 ]; then
  printf 'Failed: %s\n' "${failed_names[@]}"
  exit 1
fi
