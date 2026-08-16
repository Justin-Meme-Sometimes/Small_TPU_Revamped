# Known issues

Tracked here because they were found via data-level simulation (a Verilator
trace probe / the golden-model harness under `tb/golden/`, or a standalone
Verilator testbench built specifically to check a module against a
hand-computed golden result), not by any existing testbench - the existing
suite mostly checks control-flow timing and X/Z propagation, not actual
computed values.

None open right now - `tb/golden/compare.py` passes 13/13 vectors against
the full 4x4 tile (all columns).
