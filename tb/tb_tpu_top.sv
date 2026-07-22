`timescale 1ns/1ps
//
// Testbench for src/tpu_top.sv - the whole chip wired together (weight
// loader, activation double-buffer, 4x4 PE array, relu, requant) driven by
// the dummy DMA in src/DMA.sv (canned weight/activation streams, no real
// backing memory - see that file's header comment).
//
// Goal: exercise the top-level control path (the FSM in tpu_top.sv: IDLE ->
// PREFILL -> PRELOAD -> COMPUTE -> DRAIN -> FUNCS -> {PRELOAD loop | IDLE})
// end-to-end with real data flowing through every stage, ahead of wiring up
// a real DMA. tpu_top.sv had not been touched since before weight_fifo,
// array/pe, activation_buffer and requant were individually fixed and
// tested (see git log) - this file also documents a couple of integration-
// level findings that only show up once everything is wired together (they
// are NOT bugs introduced by this testbench).
//
// State durations, from tpu_top.sv's counters (unchanged by this testbench):
//   PREFILL: 16 cycles (prefill_max)      PRELOAD: 4 cycles (preload_max)
//   COMPUTE: 7 cycles (compute_max)       DRAIN:   4 cycles (drain_max)
//   FUNCS:   3 cycles (funcs_max)         tiles per group: 8 (tiles_max)
//
module tb_tpu_top;

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

    logic rst_n, start;
    logic [7:0][3:0] tpu_in;
    logic [7:0][3:0] tpu_out;
    logic [31:0] op_code;

    tpu_top dut (
        .clk(clk), .rst_n(rst_n), .start(start),
        .tpu_in(tpu_in), .tpu_out(tpu_out), .op_code(op_code)
    );

    task automatic reset_dut();
        rst_n = 0; start = 0; tpu_in = '0; op_code = '0;
        @(posedge clk); @(posedge clk);
        rst_n = 1;
        @(posedge clk); #1;
    endtask

    task automatic step();
        @(posedge clk); #1;
    endtask

    // Polls dut.current_state until it equals `target` or `max_cycles`
    // elapse. Used throughout instead of hand-derived cycle counts because
    // the FSM's real per-state duration depends on several sub-FSMs
    // (weight_loader, activation_buffer's bank_fsm) racing each other, not
    // just the top-level counters in isolation.
    task automatic wait_for_state(input logic [4:0] target, input int max_cycles, output int cycles_taken);
        cycles_taken = 0;
        while (dut.current_state !== target && cycles_taken < max_cycles) begin
            step();
            cycles_taken++;
        end
    endtask

    initial begin
        int n;

        reset_dut();
        $display("==== tpu_top: reset ====");
        check("reset: current_state is IDLE", dut.current_state == dut.IDLE);
        check("reset: weight fifo empty", dut.weight_fifo_empty == 1'b1);
        check("reset: DMA has captured nothing yet", dut.dma.capture_count == 32'd0);

        // -----------------------------------------------------------
        // 1) Kick off tile group 1 and follow the FSM through every state
        //    once: IDLE -> PREFILL -> PRELOAD -> COMPUTE -> DRAIN -> FUNCS.
        // -----------------------------------------------------------
        $display("==== tpu_top: tile 1 - PREFILL ====");
        start = 1; step(); start = 0;
        check("start pulse moves IDLE -> PREFILL", dut.current_state == dut.PREFILL);

        wait_for_state(dut.PRELOAD, 40, n);
        check($sformatf("reached PRELOAD within budget (took %0d cycles)", n), dut.current_state == dut.PRELOAD);
        check("PREFILL ran the full 16 cycles (prefill_count saturated)", dut.prefill_count == 8'd16);
        check("dummy DMA's weight stream was accepted into the weight FIFO", dut.weight_fifo_empty == 1'b0);

        $display("==== tpu_top: tile 1 - PRELOAD -> COMPUTE ====");
        wait_for_state(dut.COMPUTE, 20, n);
        check($sformatf("reached COMPUTE within budget (took %0d cycles)", n), dut.current_state == dut.COMPUTE);
        check("weight FIFO fully drained by the end of PRELOAD", dut.weight_fifo_empty == 1'b1);

        // PE_array's own testbench (tb_array.sv) established (empirically)
        // that a uniform weight needs ~7-8 preload cycles to reach row 3 via
        // the down_out chain. preload_max is now 8 cycles (bumped from an
        // earlier 4, which left row 3 at zero going into COMPUTE - confirmed
        // by direct simulation before the fix); with 8 cycles the DMA's
        // weight row (10,20,30,40 for tile 1) fully lands before COMPUTE.
        $display("[INFO] product_array after PRELOAD (row 3 = product_array[3]): %0d %0d %0d %0d",
                  dut.product_out[0], dut.product_out[1], dut.product_out[2], dut.product_out[3]);
        check("preload_max=8 gives PE_array's down_out chain enough cycles to carry the DMA's weight row (10,20,30,40) all the way to row 3 before COMPUTE starts",
              dut.product_out == {33'd40, 33'd30, 33'd20, 33'd10});

        $display("==== tpu_top: tile 1 - COMPUTE -> DRAIN ====");
        wait_for_state(dut.DRAIN, 20, n);
        check($sformatf("reached DRAIN within budget (took %0d cycles)", n), dut.current_state == dut.DRAIN);
        check("COMPUTE ran the full 7 cycles (compute_count saturated)", dut.compute_count == 8'd7);
        check("tile_done pulsed on the COMPUTE->DRAIN edge (tile_count advanced to 1)", dut.tile_count == 8'd1);

        $display("==== tpu_top: tile 1 - DRAIN -> FUNCS ====");
        wait_for_state(dut.FUNCS, 20, n);
        check($sformatf("reached FUNCS within budget (took %0d cycles)", n), dut.current_state == dut.FUNCS);
        check("DRAIN ran the full 4 cycles (drain_count saturated)", dut.drain_count == 8'd4);

        // requant/relu have their own documented, unfixed bit-shape bugs
        // (see tb_relu_buffer.sv, tb_requant.sv) - drain_state is exactly
        // the window where relu/requant are supposed to be active, so the
        // control-path handshake (out_valid pulsing, DMA capturing it) is
        // what's being checked here, not the numeric correctness of the
        // captured value.
        check("requant_out_valid pulsed at some point in tile 1's drain/funcs window", dut.dma.capture_count > 32'd0);

        $display("==== tpu_top: tile 1 - FUNCS -> back to PRELOAD (tile 1 of 8, not yet tile_complete) ====");
        wait_for_state(dut.PRELOAD, 20, n);
        check($sformatf("FUNCS looped back to PRELOAD for tile 2/8 (took %0d cycles)", n), dut.current_state == dut.PRELOAD);
        check("FUNCS ran the full 3 cycles (funcs_count saturated)", dut.funcs_count == 8'd3);
        check("DMA captured at least one requant result from tile 1's drain/funcs window",
              dut.dma.capture_count > 32'd0);

        $display("==== tpu_top: DMA weight pattern changed for tile 2 (tile_idx bumped on preload_state's rising edge) ====");
        check("dummy DMA presents a different weight row for tile 2 (tile_idx advanced)", dut.dma.tile_idx == 8'd1);

        // -----------------------------------------------------------
        // 2) Run the remaining 7 tiles of this group (tiles_max=8 total)
        //    and confirm the FSM actually reaches tiles_complete and
        //    returns to IDLE, rather than looping forever.
        // -----------------------------------------------------------
        $display("==== tpu_top: running tiles 2-8 to reach tiles_complete ====");
        for (int t = 2; t <= 8; t++) begin
            wait_for_state(dut.COMPUTE, 20, n);
            wait_for_state(dut.DRAIN, 20, n);
            wait_for_state(dut.FUNCS, 20, n);
            if (t < 8) begin
                wait_for_state(dut.PRELOAD, 20, n);
                check($sformatf("tile %0d/8: FUNCS looped back to PRELOAD", t), dut.current_state == dut.PRELOAD);
            end
        end
        wait_for_state(dut.IDLE, 20, n);
        check($sformatf("after 8 tiles: FUNCS saw tile_complete and returned to IDLE (took %0d cycles)", n),
              dut.current_state == dut.IDLE);
        // FUNCS now routes tile_complete through DONE (instead of straight to
        // IDLE), and DONE's tile_clr correctly resets TILES_COMPLETE_COUNTER
        // - so by the time we observe IDLE, tile_count has already been
        // cleared back to 0 rather than staying pinned at 8.
        check("DONE's tile_clr reset tile_count back to 0 on the way to IDLE", dut.tile_count == 8'd0);
        $display("[INFO] total requant results captured by dummy DMA across tile group 1: %0d", dut.dma.capture_count);

        // -----------------------------------------------------------
        // 3) Start a second tile group and confirm it actually completes a
        //    fresh 8 tiles instead of the group-1 leftover state getting in
        //    the way. This previously failed two different ways, both now
        //    fixed:
        //      - tile_complete going straight to IDLE (never DONE) meant
        //        tile_count was never cleared, so group 2's tile_complete
        //        compare (tile_count==8, exact equality) would never fire
        //        again until an 8-bit wraparound - confirmed by direct
        //        simulation, group 2 looped PRELOAD->COMPUTE->DRAIN->FUNCS
        //        indefinitely.
        //      - once DONE was wired in, tile_clr turned out to be the one
        //        _clr signal never given a default 0 at the top of the
        //        always_comb block (every other _clr signal has one) - so
        //        the tool inferred a latch for it, which held tile_clr high
        //        forever after the first DONE and silently kept
        //        TILES_COMPLETE_COUNTER stuck at 0 for all of group 2.
        //        Confirmed by direct simulation before adding the missing
        //        `tile_clr = 0;` default.
        // -----------------------------------------------------------
        $display("==== tpu_top: tile group 2 (does a fresh 8-tile group actually complete?) ====");
        start = 1; step(); start = 0;
        check("group 2: start pulse moves IDLE -> PREFILL", dut.current_state == dut.PREFILL);
        wait_for_state(dut.PRELOAD, 40, n);

        for (int t = 1; t <= 8; t++) begin
            wait_for_state(dut.COMPUTE, 20, n);
            wait_for_state(dut.DRAIN, 20, n);
            check($sformatf("group 2 tile %0d: tile_count advanced correctly", t), dut.tile_count == t);
            wait_for_state(dut.FUNCS, 20, n);
            if (t < 8) wait_for_state(dut.PRELOAD, 20, n);
        end
        wait_for_state(dut.IDLE, 20, n);
        check($sformatf("group 2 also reached tiles_complete and returned to IDLE (took %0d cycles)", n),
              dut.current_state == dut.IDLE);
        check("group 2: tile_count cleared back to 0 again", dut.tile_count == 8'd0);

        $display("==== SUMMARY ====");
        $display("tpu_top: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
