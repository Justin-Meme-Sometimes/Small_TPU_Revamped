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

    // -----------------------------------------------------------------
    // 2) vertical_en_fsm: en_j is a ONE-CYCLE PULSE on state Sj (j>=1);
    //    en_0 never asserts.
    // -----------------------------------------------------------------
    logic v_rst_n, v_start, v_tile_done;
    logic v_en_0, v_en_1, v_en_2, v_en_3;

    vertical_en_fsm v_dut (
        .clk(clk), .rst_n(v_rst_n),
        .compute_state_start(v_start), .tile_done(v_tile_done),
        .en_0(v_en_0), .en_1(v_en_1), .en_2(v_en_2), .en_3(v_en_3)
    );

    task automatic v_reset();
        v_rst_n = 0; v_start = 0; v_tile_done = 0;
        @(posedge clk); @(posedge clk);
        v_rst_n = 1;
        @(posedge clk);
    endtask

    task automatic run_vertical_fsm_test();
        v_reset();
        #1;
        $display("==== vertical_en_fsm ====");
        check("idle: all en low", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0000);

        v_start = 1;
        @(posedge clk); #1; v_start = 0;
        check("S0: all en low (en_0 never asserts)", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0000);

        @(posedge clk); #1;
        check("S1: en_1 only (single-cycle pulse)", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0010);

        @(posedge clk); #1;
        check("S2: en_2 only (en_1 already deasserted)", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0100);

        @(posedge clk); #1;
        check("S3: en_3 only, tile_done low so holds", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b1000);

        @(posedge clk); #1;
        check("S3 still holds en_3 (tile_done low)", {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b1000);

        // tile_done is sampled while current_state==S3 (this same cycle's en
        // output is still S3's pattern - already covered by the previous
        // check); the transition to IDLE takes effect at the next edge.
        v_tile_done = 1;
        @(posedge clk); #1; v_tile_done = 0;
        check("tile_done took effect: back in IDLE, all en low",
              {v_en_3,v_en_2,v_en_1,v_en_0} == 4'b0000);

        $display("vertical_en_fsm done\n");
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
    // FINDING (verified with hierarchical-signal tracing, reproduced
    // reliably): product_array can never observe a real compute result
    // with this RTL as wired.
    //   - drain_state only takes effect on a PE if compute_en(h_en_j) is
    //     low that same cycle - PE.sv's if/else-if chain checks compute_en
    //     BEFORE drain, so drain is silently ignored while h_en is high.
    //   - h_en only returns to 0 after tile_done is asserted (the FSMs
    //     transition S3->IDLE one cycle later).
    //   - tile_done is wired DIRECTLY (unregistered) into every PE's
    //     tile_done input, so the SAME cycle it is asserted, every PE's
    //     accum_reg is forced to 0 (top-priority clr||tile_done branch) -
    //     before h_en has even dropped.
    //   Net effect: by the time h_en finally drops and drain_state can win
    //   the priority chain, accum_reg has already been cleared. down_out
    //   (and therefore product_array) is only ever touched by the preload
    //   or drain branches, so it just sits frozen at its last preload-time
    //   value through this entire sequence. This looks like a genuine gap
    //   worth the team's attention, not something this testbench works
    //   around.
    // -----------------------------------------------------------------
    logic arr_rst_n, arr_preload, arr_compute_start, arr_clr, arr_tile_done, arr_drain;
    logic [3:0][7:0] arr_weight, arr_activation;
    logic arr_activation_valid;
    logic [3:0][32:0] arr_product;
    logic arr_output_valid;

    PE_array arr_dut (
        .clk(clk), .rst_n(arr_rst_n),
        .preload_state_start(arr_preload), .compute_state_start(arr_compute_start),
        .clr_state(arr_clr), .tile_done(arr_tile_done), .drain_state(arr_drain),
        .weight_array(arr_weight), .activation_valid(arr_activation_valid),
        .activation_array(arr_activation), .product_array(arr_product),
        .output_valid(arr_output_valid)
    );

    task automatic arr_reset();
        arr_rst_n = 0;
        arr_preload = 0; arr_compute_start = 0; arr_clr = 0; arr_tile_done = 0; arr_drain = 0;
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
              arr_product == {33'd2, 33'd2, 33'd2, 33'd2});

        // Run compute: single-cycle compute_state_start pulse, then hold a
        // uniform activation while h_en_0..3 cascade on over the next few
        // cycles (see horizontal_en_fsm test above for the exact cadence).
        arr_compute_start = 1;
        arr_activation = {8'd3, 8'd3, 8'd3, 8'd3};
        arr_step("");
        arr_compute_start = 0;
        for (int i = 0; i < 6; i++) arr_step("");
        // At this point internal accum_reg has real, non-zero, per-column
        // sums (verified by hierarchical trace during development) - but
        // product_array is still frozen at the preload value, since down_out
        // is untouched by the compute_en branch.
        check("product_array unchanged by compute (down_out untouched by compute_en)",
              arr_product == {33'd2, 33'd2, 33'd2, 33'd2});

        // Attempt the natural "stop and drain" sequence.
        arr_drain = 1;
        arr_step("");
        arr_step("");
        check({"GAP: drain_state should win while h_en is still high ",
               "(compute_en currently has priority in PE.sv) - product_array should not stay frozen"},
              arr_product != {33'd2, 33'd2, 33'd2, 33'd2});

        arr_tile_done = 1;
        arr_step("");
        arr_tile_done = 0;
        check({"GAP: tile_done should not clear accum_reg while h_en is ",
               "still high leaving nothing to drain - product_array should ",
               "not still be the stale preload value"},
              arr_product != {33'd2, 33'd2, 33'd2, 33'd2});
        arr_drain = 0;

        $display("PE_array done\n");
    endtask

    initial begin
        run_horizontal_fsm_test();
        run_vertical_fsm_test();
        run_pe_array_test();

        $display("==== SUMMARY ====");
        $display("total: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
