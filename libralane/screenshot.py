"""
Renders a GDS layout to a PNG using KLayout's batch/headless mode.

Usage (run inside the iic-osic-tools container):
    klayout -z -r libralane/screenshot.py \
        -rd gds=libralane/runs/<RUN_TAG>/final/gds/tpu_top.gds \
        -rd out=libralane/runs/<RUN_TAG>/tpu_top.png
"""

import pya

# `gds` and `out` are injected by klayout's `-rd name=value` CLI flag.

app = pya.Application.instance()
mw = app.main_window()
mw.load_layout(gds, 0)
view = mw.current_view()
view.load_layer_props("/foss/pdks/sky130A/libs.tech/klayout/tech/sky130A.lyp")
view.max_hier()
view.zoom_fit()
view.save_image(out, 2500, 2500)
