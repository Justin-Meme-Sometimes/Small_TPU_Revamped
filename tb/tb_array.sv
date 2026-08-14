`timescale 1ns/1ps
//
// Testbench for src/array.sv (horizontal_en_fsm, vertical_en_fsm, PE_array)
//
module tb_array;

    int errors = 0;
    int checks = 0;

    task automatic check(string name, logic cond);
        checks++;
        if (!cond) begin
            errors++;
            $display("[FAIL] %s", name);
        end else begin
            $display("[PASS] %s", name);
        end
    endtask

    logic clk = 0;
    always #5 clk = ~clk;

    // -----------------------------------------------------------------
    // 1) horizontal_en_fsm: en_j is CUMULATIVE - once column j turns on
    //    it stays on (en_0 highest priority, asserted from S0 onward)
    // -----------------------------------------------------------------
    logic h_rst_n, h_start, h_tile_done;
    logic h_en_0, h_en_1, h_en_2, h_en_3;

    horizontal_en_fsm h_dut (
        .clk(clk), .rst_n(h_rst_n),
        .compute_state_start(h_start), .tile_done(h_tile_done),
        .en_0(h_en_0), .en_1(h_en_1), .en_2(h_en_2), .en_3(h_en_3)
    );

    task automatic h_reset();
        h_rst_n = 0; h_start = 0; h_tile_done = 0;
        @(posedge clk); @(posedge clk);
        h_rst_n = 1;
        @(posedge clk);
    endtask

    task automatic run_horizontal_fsm_test();
        h_reset();
        #1;
        $display("==== horizontal_en_fsm ====");
        check("idle: all en low", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0000);

        h_start = 1;
        @(posedge clk); #1; h_start = 0;
        check("S0: en_0 only", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0001);

        @(posedge clk); #1;
        check("S1: en_1,en_0", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0011);

        @(posedge clk); #1;
        check("S2: en_2,en_1,en_0", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0111);

        @(posedge clk); #1;
        check("S3: all four columns enabled", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b1111);

        @(posedge clk); #1;
        check("S3 holds while tile_done low", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b1111);

        // tile_done is sampled while current_state==S3 (this same cycle's en
        // output is still S3's pattern - already covered by the previous
        // check); the transition to IDLE takes effect at the next edge.
        h_tile_done = 1;
        @(posedge clk); #1; h_tile_done = 0;
        check("tile_done took effect: back in IDLE, all en low",
              {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0000);

        $display("horizontal_en_fsm done\n");
    endtask

    task automatic run_horizontal_fsm_edge_test();
        $display("==== horizontal_en_fsm edge cases ====");

        // tile_done is only examined in the S3 case branch; asserting it
        // early (e.g. mid-cascade in S1) must not cut the sequence short.
        h_reset();
        #1;
        h_start = 1;
        @(posedge clk); #1; h_start = 0;               // now in S0
        @(posedge clk); #1;                             // now in S1
        check("pre-check: S1 pattern", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0011);
        h_tile_done = 1;
        @(posedge clk); #1;                             // S1 -> S2 (tile_done ignored outside S3)
        h_tile_done = 0;
        check("tile_done asserted during S1 has no effect: still advances to S2",
              {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0111);

        // Async reset: dropping rst_n mid-sequence (in S3) must return the
        // FSM to IDLE without waiting for a clock edge.
        @(posedge clk); #1;                             // now in S3
        check("pre-check: S3 pattern", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b1111);
        h_rst_n = 0;
        #1;
        check("async reset mid-S3: all en immediately low",
              {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0000);
        h_rst_n = 1;
        @(posedge clk);

        // Back-to-back tiles: after tile_done returns the FSM to IDLE, a
        // fresh compute_state_start pulse must be able to drive a second
        // full S0..S3 cascade with no special handling required.
        h_reset();
        #1;
        h_start = 1;
        @(posedge clk); #1; h_start = 0;
        @(posedge clk); #1; @(posedge clk); #1; @(posedge clk); #1; // S0->S1->S2->S3
        h_tile_done = 1;
        @(posedge clk); #1; h_tile_done = 0;
        check("tile 1: back in IDLE after tile_done", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0000);

        h_start = 1;
        @(posedge clk); #1; h_start = 0;
        check("tile 2: restarts cleanly into S0", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0001);
        @(posedge clk); #1; @(posedge clk); #1; @(posedge clk); #1; // S1->S2->S3
        check("tile 2: reaches S3 pattern same as tile 1", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b1111);
        h_tile_done = 1;
        @(posedge clk); #1; h_tile_done = 0;
        check("tile 2: back in IDLE after tile_done", {h_en_3,h_en_2,h_en_1,h_en_0} == 4'b0000);

        $display("horizontal_en_fsm edge cases done\n");
    endtask

    // -----------------------------------------------------------------
    // 2) vertical_en_fsm: en_j is a ONE-CYCLE PULSE on state Sj (j=1,2,3);
    //    en_0 never asserts. Entirely pulse-triggered now: a single-cycle
    //    drain_state_start kicks off one full IDLE->S0->S1->S2->S3->IDLE
    //    pass, with no dependency on drain_state staying high or on
    //    tile_done - S3 unconditionally returns to IDLE the next cycle and
    //    just waits for the next drain_state_start pulse.
    //
    //    Bug F fix history (see KNOWN_ISSUES.md): this FSM used to run
    //    during COMPUTE (compute_state_start) and exit on tile_done - which
    //    always fires right as COMPUTE ends, i.e. before DRAIN (where its
    //    enables are actually consumed by pe.sv's accum_in_valid) even
    //    begins. An interim fix drove it from a held drain_state level
    //    (entry on rise, exit on fall), which worked for phase alignment
    //    but left en_3 (and thus accum_in_valid for row 3) stuck high for
    //    the rest of DRAIN once triggered - since pe.sv's drain branch only
    //    updates down_out_drain when accum_in_valid is LOW, that froze
    //    product_array at a stale value for the rest of the window. Now
    //    fixed by making drain_state_start a genuine one-cycle pulse (fired
    //    once, at the COMPUTE->DRAIN edge in tpu_top.sv) so en_3 pulses
    //    exactly once too, letting down_out_drain catch up immediately
    //    afterward. tile_done is still a port (for interface symmetry with
    //    horizontal_en_fsm) but is no longer read anywhere in this module -
    //    tied off below.
    // -----------------------------------------------------------------
    logic v_rst_n, v_drain_start, v_tile_done_unused;
    logic v_en_0, v_en_1, v_en_2, v_en_3;

    vertical_en_fsm v_dut (
        .clk(clk), .rst_n(v_rst_n),
        .drain_state_start(v_drain_start), .tile_done(v_tile_done_unused),
        .en_0(v_en_0), .en_1(v_en_1), .en_2(v_en_2), .en_3(v_en_3)
    );

    task automatic v_reset();
        v_rst_n = 0; v_drain_start = 0; v_tile_done_unused = 0;
        @(posedge clk); @(posedge clk);
        v_rst_n = 1;
        @(posedge clk);
    endtask

    task automatic run_vertical_fsm_test();
        v_reset();
        #1;
        $display("==== vertical_en_fsm ====");
        check("idle: all en low", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0000);

        v_drain_start = 1;
        @(posedge clk); #1; v_drain_start = 0;
        check("S0: all en low (en_0 never asserts)", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0000);

        @(posedge clk); #1;
        check("S1: en_1 only (single-cycle pulse)", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0010);

        @(posedge clk); #1;
        check("S2: en_2 only (en_1 already deasserted)", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0100);

        @(posedge clk); #1;
        check("S3: en_3 only (single-cycle pulse, no drain_state dependency)",
              {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b1000);

        @(posedge clk); #1;
        check("S3 unconditionally returns to IDLE the next cycle: all en low",
              {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0000);

        $display("vertical_en_fsm done\n");
    endtask

    task automatic run_vertical_fsm_edge_test();
        $display("==== vertical_en_fsm edge cases ====");

        // A drain_state_start pulse that's already dropped by the time S1
        // is reached must not cut the sequence short - only the initial
        // IDLE->S0 transition looks at it.
        v_reset();
        #1;
        v_drain_start = 1;
        @(posedge clk); #1; v_drain_start = 0;          // now in S0
        @(posedge clk); #1;                             // now in S1
        check("pre-check: S1 pattern", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0010);
        @(posedge clk); #1;                             // S1 -> S2, unaffected by drain_state_start being low
        check("drain_state_start already low has no effect: still advances to S2",
              {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0100);

        // Async reset: dropping rst_n mid-sequence (in S3) must return the
        // FSM to IDLE without waiting for a clock edge.
        @(posedge clk); #1;                             // now in S3
        check("pre-check: S3 pattern", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b1000);
        v_rst_n = 0;
        #1;
        check("async reset mid-S3: all en immediately low",
              {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0000);
        v_rst_n = 1;
        @(posedge clk);

        // Back-to-back tiles: after S3 unconditionally returns to IDLE, a
        // fresh drain_state_start pulse must be able to drive a second full
        // S0..S3 cascade with no special handling required.
        v_reset();
        #1;
        v_drain_start = 1;
        @(posedge clk); #1; v_drain_start = 0;
        @(posedge clk); #1; @(posedge clk); #1; @(posedge clk); #1; // S0->S1->S2->S3
        @(posedge clk); #1;
        check("tile 1: back in IDLE after S3", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0000);

        v_drain_start = 1;
        @(posedge clk); #1; v_drain_start = 0;
        @(posedge clk); #1;
        check("tile 2: reaches S1 pattern same as tile 1", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0010);
        @(posedge clk); #1; @(posedge clk); #1; // S2->S3
        check("tile 2: reaches S3 pattern same as tile 1", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b1000);
        @(posedge clk); #1;
        check("tile 2: back in IDLE after S3", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0000);

        $display("vertical_en_fsm edge cases done\n");
    endtask

    // -----------------------------------------------------------------
    // 3) PE_array integration test
    //
    // Uniform stimulus (same weight W broadcast to every row, same
    // activation A broadcast to every lane) is used deliberately: it makes
    // the 16-PE dataflow hand-traceable using the same per-PE recurrence
    // verified in tb_pe.sv, without needing to solve the row-to-cycle
    // mapping of the weight down-chain for a non-uniform tile.
    //
    // HISTORICAL NOTE: this test previously documented a "GAP" here where
    // drain_state could never win against a still-high compute_en (PE.sv's
    // if/else-if chain checked compute_en before drain). That priority was
    // fixed in pe.sv (drain is now checked before compute_en, right after
    // preload), so drain now correctly takes over from compute the first
    // cycle h_en and drain are both asserted. tile_done is still wired
    // DIRECTLY (unregistered) into every PE's tile_done input, so asserting
    // it still clears accum_reg the same cycle - sequence the drain window
    // before tile_done if you need to read out a real result.
    // -----------------------------------------------------------------
    logic arr_rst_n, arr_preload, arr_compute_start, arr_clr, arr_tile_done, arr_drain, arr_drain_start;
    logic [3:0][7:0] arr_weight, arr_activation;
    logic arr_activation_valid;
    logic [3:0][31:0] arr_product;
    logic [3:0][31:0] arr_drain_snapshot;
    logic arr_output_valid;

    // drain_state_start is a genuine one-cycle pulse in the real chip (see
    // tpu_top.sv: it fires on the COMPUTE->DRAIN transition edge, one cycle
    // *before* drain_state itself first goes high, giving vertical_en_fsm a
    // head start so its 4-state S0..S3 cascade fits within DRAIN's 5-cycle
    // window). Mirrored here: pulse arr_drain_start for one cycle, then
    // bring arr_drain up the following cycle.
    PE_array arr_dut (
        .clk(clk), .rst_n(arr_rst_n),
        .preload_state_start(arr_preload), .compute_state_start(arr_compute_start),
        .clr_state(arr_clr), .tile_done(arr_tile_done), .drain_state(arr_drain),
        .drain_state_start(arr_drain_start),
        .weight_array(arr_weight), .activation_valid(arr_activation_valid),
        .activation_array(arr_activation), .product_array(arr_product),
        .output_valid(arr_output_valid)
    );

    task automatic arr_reset();
        arr_rst_n = 0;
        arr_preload = 0; arr_compute_start = 0; arr_clr = 0; arr_tile_done = 0; arr_drain = 0; arr_drain_start = 0;
        arr_weight = 0; arr_activation = 0; arr_activation_valid = 0;
        @(posedge clk); @(posedge clk);
        arr_rst_n = 1;
        @(posedge clk); #1;
    endtask

    task automatic arr_step(string tag);
        @(posedge clk); #1;
    endtask

    task automatic run_pe_array_test();
        arr_reset();
        $display("==== PE_array ====");
        check("reset: product_array all zero", arr_product == '0);
        check("reset: output_valid low", arr_output_valid == 1'b0);

        arr_drain = 1;
        arr_step("");
        check("output_valid mirrors drain_state (comb assign)", arr_output_valid == 1'b1);
        arr_drain = 0;
        arr_step("");
        check("output_valid drops when drain_state drops", arr_output_valid == 1'b0);

        // Preload uniform weight W=2 into all 16 PEs. Empirically confirmed
        // (hierarchical trace) that row 3 needs 7 preload cycles to receive
        // the weight fed at row 0; 8 gives margin.
        arr_preload = 1;
        arr_weight = {8'd2, 8'd2, 8'd2, 8'd2};
        for (int i = 0; i < 8; i++) arr_step("");
        arr_preload = 0;
        check("preload propagated weight to product_array's row (row 3) via down_out",
              arr_product == {32'd2, 32'd2, 32'd2, 32'd2});

        // Run compute: single-cycle compute_state_start pulse, then hold a
        // uniform activation while h_en_0..3 cascade on over the next few
        // cycles (see horizontal_en_fsm test above for the exact cadence).
        arr_compute_start = 1;
        arr_activation_valid = 1;
        arr_activation = {8'd3, 8'd3, 8'd3, 8'd3};
        arr_step("");
        arr_compute_start = 0;
        for (int i = 0; i < 6; i++) arr_step("");
        // Now that pe.sv resets down_out to 0 on every compute_en cycle,
        // product_array reads 0 through the whole compute phase (it used to
        // stay frozen at the preload value instead).
        check("product_array reads 0 during compute (down_out is now cleared every compute_en cycle)",
              arr_product == '0);

        // Correct usage sequence (per design intent): compute runs through
        // S3 until tile_done stops the MACs, and only THEN do you drain -
        // draining mid-S3 (while h_en/v_en are still active) is not a real
        // use case and isn't exercised here.
        //
        // tile_done fires while h_en_3 is still high this same cycle, so
        // pe.sv's "if(!compute_en && !drain) accum_reg<=0" guard spares
        // accum_reg - the real accumulated value survives the tile_done
        // edge.
        arr_tile_done = 1;
        arr_step("");
        arr_tile_done = 0;
        // One more cycle for the FSMs to actually land back in IDLE
        // (h_en/v_en drop the cycle after tile_done, not the same cycle).
        arr_step("");

        // Pulse drain_state_start one cycle before bringing drain_state up
        // (see the PE_array arr_dut comment above for why) so
        // vertical_en_fsm actually runs its S0..S3 cascade during this
        // drain window instead of sitting in IDLE the whole time.
        arr_drain_start = 1;
        arr_step("");
        arr_drain_start = 0;
        arr_drain = 1;
        for (int i = 0; i < 4; i++) arr_step("");
        check("drain-after-tile_done surfaces a real (non-frozen, non-zero) MAC result",
              arr_product != {32'd2, 32'd2, 32'd2, 32'd2} && arr_product != '0);
        arr_drain_snapshot = arr_product;

        // Holding drain for further cycles should keep reproducing the same
        // value (accum_reg is untouched by a plain drain cycle).
        arr_step("");
        check("holding drain_state: product_array stays stable at the drained value",
              arr_product == arr_drain_snapshot);
        arr_drain = 0;

        $display("PE_array done\n");
    endtask

    // -----------------------------------------------------------------
    // 4) PE_array: activation_valid gates whether val_act_in latches new
    //    activation_array data (val_act_in only updates when
    //    activation_valid is high). Run the same preload+compute+drain
    //    sequence twice, identical except for activation_valid, using the
    //    real "drain after tile_done" usage pattern so the drained result
    //    actually reflects what got accumulated - and confirm the outputs
    //    now differ (av=0 means a stays 0 the whole time -> a zero result;
    //    av=1 lets the real activation value flow through).
    // -----------------------------------------------------------------
    task automatic run_pe_array_sequence(input logic av, output logic [3:0][31:0] result);
        arr_reset();
        arr_activation_valid = av;

        arr_preload = 1;
        arr_weight = {8'd2, 8'd2, 8'd2, 8'd2};
        for (int i = 0; i < 8; i++) arr_step("");
        arr_preload = 0;

        arr_compute_start = 1;
        arr_activation = {8'd3, 8'd3, 8'd3, 8'd3};
        arr_step("");
        arr_compute_start = 0;
        for (int i = 0; i < 6; i++) arr_step("");

        arr_tile_done = 1;
        arr_step("");
        arr_tile_done = 0;
        arr_step("");

        arr_drain_start = 1;
        arr_step("");
        arr_drain_start = 0;
        arr_drain = 1;
        for (int i = 0; i < 4; i++) arr_step("");
        arr_drain = 0;

        result = arr_product;
    endtask

    task automatic run_pe_array_activation_valid_test();
        logic [3:0][31:0] result_valid_low, result_valid_high;
        $display("==== PE_array: activation_valid gating check ====");

        run_pe_array_sequence(1'b0, result_valid_low);
        run_pe_array_sequence(1'b1, result_valid_high);

        check("activation_valid=0 the whole time: val_act_in never latches, drained result is all zero",
              result_valid_low == '0);
        check("activation_valid=1 lets the real activation value flow through: drained result is non-zero and differs from the av=0 case",
              result_valid_high != '0 && result_valid_high != result_valid_low);

        $display("PE_array activation_valid gating check done\n");
    endtask

    // -----------------------------------------------------------------
    // 5) PE_array: distinct per-column preload values. The original
    //    uniform-weight test can't distinguish "columns preload correctly"
    //    from "columns got swapped" since every column used the same value.
    //    Feed a different weight per column and confirm product_array[j]
    //    lines up with weight_array[j] after the same 8-cycle cadence
    //    already established above.
    // -----------------------------------------------------------------
    task automatic run_pe_array_column_preload_test();
        $display("==== PE_array: per-column preload check ====");
        arr_reset();

        arr_preload = 1;
        arr_weight[0] = 8'd10;
        arr_weight[1] = 8'd20;
        arr_weight[2] = 8'd30;
        arr_weight[3] = 8'd40;
        for (int i = 0; i < 8; i++) arr_step("");
        arr_preload = 0;

        check("column 0 preloaded correctly", arr_product[0] == 32'd10);
        check("column 1 preloaded correctly", arr_product[1] == 32'd20);
        check("column 2 preloaded correctly", arr_product[2] == 32'd30);
        check("column 3 preloaded correctly", arr_product[3] == 32'd40);

        $display("PE_array per-column preload check done\n");
    endtask

    // -----------------------------------------------------------------
    // 6) PE_array: reuse across back-to-back tiles. After one tile
    //    finishes (tile_done pulsed), a fresh preload with different
    //    weights must load cleanly without needing a full module reset -
    //    this is how the array is meant to be used between tiles.
    // -----------------------------------------------------------------
    task automatic run_pe_array_reuse_test();
        $display("==== PE_array: back-to-back tile reuse check ====");
        arr_reset();

        // Tile 1: preload W=2, then end the tile with tile_done.
        arr_preload = 1;
        arr_weight = {8'd2, 8'd2, 8'd2, 8'd2};
        for (int i = 0; i < 8; i++) arr_step("");
        arr_preload = 0;
        check("tile 1: preload landed", arr_product == {32'd2, 32'd2, 32'd2, 32'd2});

        arr_tile_done = 1;
        arr_step("");
        arr_tile_done = 0;

        // Tile 2: preload a different weight - should load with the same
        // cadence, proving tile_done left the array ready for reuse.
        arr_preload = 1;
        arr_weight = {8'd7, 8'd7, 8'd7, 8'd7};
        for (int i = 0; i < 8; i++) arr_step("");
        arr_preload = 0;
        check("tile 2: new weight preloaded cleanly after tile 1's tile_done",
              arr_product == {32'd7, 32'd7, 32'd7, 32'd7});

        $display("PE_array back-to-back tile reuse check done\n");
    endtask

    // -----------------------------------------------------------------
    // 7) PE_array: down_out is now `preload ? b_reg : down_out_drain` (a
    //    continuous assign - see pe.sv), so it's only b_reg's value while
    //    preload is actually asserted; the moment preload drops, down_out
    //    switches to down_out_drain (registered, untouched by b_reg's
    //    reset). This checks the case that's actually well-defined and
    //    interesting: an async reset landing WHILE preload is still held
    //    clears b_reg, which is immediately visible on down_out/
    //    product_array with no clock edge needed, since the mux is
    //    combinational.
    // -----------------------------------------------------------------
    task automatic run_pe_array_reset_mid_preload_test();
        logic [3:0][31:0] pre_reset_value;
        $display("==== PE_array: reset while preload is still held ====");
        arr_reset();

        arr_preload = 1;
        arr_weight = {8'd9, 8'd9, 8'd9, 8'd9};
        for (int i = 0; i < 8; i++) arr_step("");
        pre_reset_value = arr_product;
        check("pre-check: product_array holds the preloaded value (preload still asserted)",
              pre_reset_value == {32'd9, 32'd9, 32'd9, 32'd9});

        arr_rst_n = 0;
        #1;
        $display("[INFO] product_array immediately after async reset (preload still held): %h (pre-reset value was %h)",
                  arr_product, pre_reset_value);
        check("async reset with preload still held: product_array goes to zero immediately (combinational down_out=b_reg, b_reg reset)",
              arr_product == '0);
        arr_rst_n = 1;
        arr_preload = 0;
        @(posedge clk);

        $display("PE_array reset-while-preload-held check done\n");
    endtask

    initial begin
        run_horizontal_fsm_test();
        run_horizontal_fsm_edge_test();
        run_vertical_fsm_test();
        run_vertical_fsm_edge_test();
        run_pe_array_test();
        run_pe_array_activation_valid_test();
        run_pe_array_column_preload_test();
        run_pe_array_reuse_test();
        run_pe_array_reset_mid_preload_test();

        $display("==== SUMMARY ====");
        $display("total: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
