"""
Classic LibreLane flow with an extra step right after floorplanning that
partitions the design into deliberate per-block placement regions (DMA,
activation_buffer, weight_loader, PE_array, bias_add, relu_buffer, requant)
instead of letting global placement scatter cells organically, and pulls
logic in from the die edge with a keepout margin. See
libralane/scripts/floorplan_regions.tcl for the actual placement logic.

Requires `(* keep_hierarchy *)` on those modules in src/*.sv so their
instances keep a "prefix/" name through synthesis instead of losing
hierarchy in flatten+optimize - see that script's header comment.

Usage (run from the repo root, inside the iic-osic-tools container):
    python3 libralane/floorplan_flow.py libralane/config.yaml
"""

import os
import sys

from librelane.flows.classic import Classic
from librelane.steps import Step, OpenROAD
from librelane.steps.openroad import OpenROADStep

_SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))


@Step.factory.register()
class DefineFloorplanRegions(OpenROADStep):
    id = "Custom.DefineFloorplanRegions"
    name = "Define Floorplan Regions"

    def get_script_path(self):
        return os.path.join(_SCRIPT_DIR, "scripts", "floorplan_regions.tcl")


class ClassicFloorplanRegions(Classic):
    Steps = list(Classic.Steps)


_insert_at = ClassicFloorplanRegions.Steps.index(OpenROAD.Floorplan) + 1
ClassicFloorplanRegions.Steps.insert(_insert_at, DefineFloorplanRegions)


if __name__ == "__main__":
    config_files = sys.argv[1:] or ["config.yaml"]

    flow = ClassicFloorplanRegions(
        config_files,
        pdk="sky130A",
        pdk_root="/foss/pdks",
        scl="sky130_fd_sc_hd",
    )
    flow.start(tag=os.environ.get("RUN_TAG"))
