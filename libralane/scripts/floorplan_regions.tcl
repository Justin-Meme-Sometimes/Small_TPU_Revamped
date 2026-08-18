# Deliberate physical floorplan for the small pre/post-processing blocks:
#   {activation_buffer, weight_loader} on the left, {bias_add, relu_buffer,
#   requant} on the right - matching the dataflow feeding into / out of
#   PE_array - instead of letting global placement scatter them organically.
# Also pulls all logic in from the die edge with a keepout margin.
#
# DMA and PE_array are deliberately left UNCONSTRAINED: together they're 88%
# of the design's logic, and region-constraining them to a materially smaller
# footprint than the whole chip would require packing them at ~80%+ density,
# well past what standard-cell legalization can reliably achieve (confirmed:
# an earlier attempt at hard-fencing DMA+PE_array into ~70% of the chip
# already failed detailed-placement legalization with tap/endcap cells having
# nowhere legal left to go - see conversation history). The small blocks
# below are only ~11% of total logic combined, so constraining them stays
# comfortably inside safe density margins.
#
# Relies on `(* keep_hierarchy *)` on the RTL modules being regioned (see
# src/*.sv) so their instances keep a "prefix/" name after synthesis instead
# of losing hierarchy in flatten+optimize.
source $::env(SCRIPTS_DIR)/openroad/common/io.tcl
read_current_odb

set block [ord::get_db_block]
set dbu [$block getDbUnitsPerMicron]

set core [$block getCoreArea]
set cx1 [$core xMin]
set cy1 [$core yMin]
set cx2 [$core xMax]
set cy2 [$core yMax]

# NOTE: a hard dbBlockage_create() edge-keepout ring was tried here and
# removed. It forbids ALL cells in the blocked rows, but tap/endcap cells are
# electrically mandatory in every row (latch-up prevention) and
# TapEndcapInsertion places them there regardless of blockages - so any
# blockage spanning full rows puts those rows' mandatory tap cells in an
# unsatisfiable conflict. Confirmed via isolation testing (see conversation
# history): this reproducibly broke OpenROAD.RepairDesignPostGPL's legality
# check ("[DPL-0004] Placed in rows check failed") regardless of margin size,
# row alignment, or region content/size - the blockage itself was the sole
# cause. Keeping logic off the edge is instead handled purely by the regions
# below simply not extending to the die boundary.
set margin [expr {40 * $dbu}]
set ix1 [expr {$cx1 + $margin}]
set iy1 [expr {$cy1 + $margin}]
set ix2 [expr {$cx2 - $margin}]
set iy2 [expr {$cy2 - $margin}]

set iw [expr {$ix2 - $ix1}]
set ih [expr {$iy2 - $iy1}]

proc assign_region {block name x1 y1 x2 y2 prefix} {
    set region [odb::dbRegion_create $block $name]
    $region setRegionType SUGGESTED
    odb::dbBox_create $region $x1 $y1 $x2 $y2
    set pattern "$prefix/*"
    set count 0
    foreach inst [$block getInsts] {
        if {[string match $pattern [$inst getName]]} {
            $region addInst $inst
            incr count
        }
    }
    puts "floorplan_regions: $name ($prefix/*) -> $count insts, box ($x1,$y1)-($x2,$y2)"
}

set sub_gap [expr {5 * $dbu}]
# Loose ~45% target density within each region - these blocks are only ~11%
# of total logic combined, so there's plenty of headroom either way; this
# was never the constraint that mattered (total footprint share was).
set col_w [expr {int($iw * 0.12)}]

# Left column: activation_buffer (top) + weight_loader (below) - the two
# loaders feeding PE_array
set left_x1 $ix1
set left_x2 [expr {$left_x1 + $col_w}]

set abuff_h [expr {int(17237.0 * $dbu * $dbu / 0.45 / $col_w)}]
set abuff_y1 [expr {$iy2 - $abuff_h}]
assign_region $block "abuff_region" $left_x1 $abuff_y1 $left_x2 $iy2 "a_buff"

set wl_h [expr {int(6376.0 * $dbu * $dbu / 0.45 / $col_w)}]
set wl_y2 [expr {$abuff_y1 - $sub_gap}]
set wl_y1 [expr {$wl_y2 - $wl_h}]
assign_region $block "wl_region" $left_x1 $wl_y1 $left_x2 $wl_y2 "w_l"

# Right column: bias_add -> relu_buffer -> requant, stacked top to bottom in
# dataflow order - the post-processing chain fed by PE_array's output
set right_x2 $ix2
set right_x1 [expr {$right_x2 - $col_w}]

set badd_h [expr {int(16791.0 * $dbu * $dbu / 0.45 / $col_w)}]
set badd_y1 [expr {$iy2 - $badd_h}]
assign_region $block "badd_region" $right_x1 $badd_y1 $right_x2 $iy2 "b_add"

set relu_h [expr {int(4350.0 * $dbu * $dbu / 0.45 / $col_w)}]
set relu_y2 [expr {$badd_y1 - $sub_gap}]
set relu_y1 [expr {$relu_y2 - $relu_h}]
assign_region $block "relu_region" $right_x1 $relu_y1 $right_x2 $relu_y2 "r_buffer"

set req_h [expr {int(10391.0 * $dbu * $dbu / 0.45 / $col_w)}]
set req_y2 [expr {$relu_y1 - $sub_gap}]
set req_y1 [expr {$req_y2 - $req_h}]
assign_region $block "req_region" $right_x1 $req_y1 $right_x2 $req_y2 "req"

write_views
