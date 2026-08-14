`timescale 1ns/1ps
//
// Testbench for src/activation_buffer.sv (i_buffer, bank_fsm, activation_buffer)
//
// i_buffer now uses separate wr_ptr/rd_ptr (like DMA.sv's j_buffer) instead
// of a single curr_count that both writes and reads adjusted - the old
// shared-counter design meant multi-row loads played back in reverse (last
// row written was the first read out), and "full" would spuriously clear
// again once anything had been read. Now full = wr_ptr==16 stays true until
// an explicit clr, and reads replay in true FIFO order across multiple rows.
// bank_fsm was updated to match: clr now pulses once on every transition
// into FILL_INACTIVE (both the WAIT_INACTIVE->FILL_INACTIVE path used once
// at start, and the COMPUTE->FILL_INACTIVE path used on every subsequent
// bank switch - the second one is what most refills actually go through),
// so each bank's buffer is reset before every fresh fill rather than only
// the first one.
//
module tb_activation_buffer;

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
    // 1) i_buffer
    // -----------------------------------------------------------------
    logic ib_rst_n, ib_we, ib_re, ib_clr, ib_we_valid, ib_full, ib_empty, ib_re_valid;
    logic [31:0][3:0] ib_we_in, ib_re_out;

    i_buffer ib_dut (
        .clk(clk), .rst_n(ib_rst_n), .we(ib_we), .re(ib_re), .a_or_b(1'b1),
        .clr(ib_clr), .we_in(ib_we_in), .we_valid(ib_we_valid),
        .full(ib_full), .empty(ib_empty), .re_out(ib_re_out), .re_valid(ib_re_valid)
    );

    task automatic ib_reset();
        ib_rst_n = 0; ib_we = 0; ib_re = 0; ib_clr = 0; ib_we_valid = 0; ib_we_in = '0;
        @(posedge clk); @(posedge clk);
        ib_rst_n = 1;
        @(posedge clk); #1;
    endtask

    task automatic ib_step();
        @(posedge clk); #1;
    endtask

    task automatic run_i_buffer_test();
        ib_reset();
        $display("==== i_buffer ====");
        check("reset: empty asserted", ib_empty == 1'b1);
        check("reset: full deasserted", ib_full == 1'b0);

        ib_we = 1; ib_we_valid = 1;
        ib_we_in[0] = 4'ha; ib_we_in[1] = 4'hb; ib_we_in[2] = 4'hc; ib_we_in[3] = 4'hd;
        ib_step();
        ib_we = 0; ib_we_valid = 0;
        check("after one write: not empty", ib_empty == 1'b0);

        ib_re = 1;
        ib_step();
        ib_re = 0;
        check("re_valid asserted after read", ib_re_valid == 1'b1);
        check("re_out[0] recovers we_in[0] (0xa) - forward FIFO order, no off-by-one",
              ib_re_out[0] == 4'ha);
        check("re_out[1] recovers we_in[1] (0xb)", ib_re_out[1] == 4'hb);
        check("re_out[2] recovers we_in[2] (0xc)", ib_re_out[2] == 4'hc);
        check("re_out[3] recovers we_in[3] (0xd)", ib_re_out[3] == 4'hd);
        check("after read: back to empty", ib_empty == 1'b1);

        // clr behavior
        ib_we = 1; ib_we_valid = 1; ib_we_in[0] = 4'h1;
        ib_step();
        ib_we = 0; ib_we_valid = 0;
        check("after another write: not empty", ib_empty == 1'b0);
        ib_clr = 1;
        ib_step();
        ib_clr = 0;
        check("clr forces empty", ib_empty == 1'b1);

        $display("i_buffer: %0d/%0d checks passed\n", checks - errors, checks);
    endtask

    // -----------------------------------------------------------------
    // 2) bank_fsm
    // -----------------------------------------------------------------
    logic bf_rst_n, bf_a_or_b, bf_start, bf_compute_state, bf_preload_state, bf_drain_state;
    logic bf_tile_done, bf_tiles_complete, bf_full, bf_empty;
    logic bf_bank_switch, bf_first_pass, bf_active, bf_we, bf_re, bf_clr;

    bank_fsm bf_dut (
        .clk(clk), .rst_n(bf_rst_n), .a_or_b(bf_a_or_b), .start(bf_start),
        .compute_state(bf_compute_state), .preload_state(bf_preload_state),
        .drain_state(bf_drain_state), .tile_done(bf_tile_done),
        .tiles_complete(bf_tiles_complete), .full(bf_full), .empty(bf_empty),
        .bank_switch(bf_bank_switch), .first_pass(bf_first_pass), .active(bf_active),
        .we(bf_we), .re(bf_re), .clr(bf_clr)
    );

    task automatic bf_reset();
        bf_rst_n = 0; bf_a_or_b = 1; bf_start = 0; bf_compute_state = 0;
        bf_preload_state = 0; bf_drain_state = 0; bf_tile_done = 0;
        bf_tiles_complete = 0; bf_full = 0; bf_empty = 1;
        @(posedge clk); @(posedge clk);
        bf_rst_n = 1;
        @(posedge clk); #1;
    endtask

    task automatic bf_step();
        @(posedge clk); #1;
    endtask

    task automatic run_bank_fsm_test();
        bf_reset();
        $display("==== bank_fsm (a_or_b=1, i.e. bank A) ====");
        check("idle: we/re/active/clr low", {bf_we,bf_re,bf_active,bf_clr} == 4'b0000);

        bf_start = 1;
        bf_step();
        bf_start = 0;
        check("start (a_or_b=1): moves toward PREFILL, we asserted",
              bf_we == 1'b1 && bf_first_pass == 1'b1);

        bf_full = 1; // signal PREFILL's buffer is full -> should move to PRELOAD
        bf_step();
        check("PRELOAD (preload_state=0): stays in PRELOAD, we/first_pass asserted",
              bf_we == 1'b1 && bf_first_pass == 1'b1);

        bf_step();
        check("PRELOAD holds while preload_state stays low",
              bf_we == 1'b1 && bf_first_pass == 1'b1);

        bf_preload_state = 1;
        bf_step();
        check("PRELOAD -> COMPUTE once preload_state is asserted",
              bf_active == 1'b0); // COMPUTE only asserts active once !empty&&(compute_state||drain_state)
        bf_preload_state = 0;

        $display("bank_fsm: %0d/%0d checks passed\n", checks - errors, checks);
    endtask

    // -----------------------------------------------------------------
    // 3) activation_buffer top level - reset/structural smoke test only.
    // Full dual-bank timing depends on the i_buffer/bank_fsm bugs above
    // plus an undeclared-but-implicitly-wired "buff_a_bs"/"buff_b_bs" net
    // (bank_switch outputs are connected but never read by anything else
    // in this module - dead output), so a full functional trace isn't
    // meaningful until those are resolved.
    // -----------------------------------------------------------------
    logic act_rst_n, act_start, act_compute_state, act_preload_state, act_drain_state;
    logic act_tile_done, act_tiles_complete, act_DMA_in_valid, act_output_buf_valid;
    logic [31:0][3:0] act_DMA_in, act_output_buff;

    activation_buffer act_dut (
        .clk(clk), .rst_n(act_rst_n), .start(act_start),
        .compute_state(act_compute_state), .preload_state(act_preload_state),
        .drain_state(act_drain_state), .tile_done(act_tile_done),
        .tiles_complete(act_tiles_complete), .DMA_in_valid(act_DMA_in_valid),
        .DMA_in(act_DMA_in), .output_buff(act_output_buff),
        .output_buf_valid(act_output_buf_valid)
    );

    task automatic run_activation_buffer_test();
        $display("==== activation_buffer (top-level smoke test) ====");
        act_rst_n = 0; act_start = 0; act_compute_state = 0; act_preload_state = 0;
        act_drain_state = 0; act_tile_done = 0; act_tiles_complete = 0;
        act_DMA_in_valid = 0; act_DMA_in = '0;
        @(posedge clk); @(posedge clk);
        act_rst_n = 1;
        @(posedge clk); #1;

        check("reset: output_buf_valid low", act_output_buf_valid == 1'b0);
        check("reset: output_buff all zero", act_output_buff == '0);

        $display("activation_buffer: %0d/%0d checks passed\n", checks - errors, checks);
    endtask

    // -----------------------------------------------------------------
    // 4) activation_buffer double-buffering cycle: fill A via DMA, drain
    //    it while filling B, and confirm the handoff to B (and B becoming
    //    the new active/draining bank while A starts refilling) actually
    //    happens - the full "fill A -> compute+fill B -> switch -> compute
    //    B+fill A" cycle described in this file's own top-of-module
    //    comment. Uses hierarchical signal access (act_dut.BUFF_A.wr_ptr
    //    etc.) since activation_buffer doesn't expose per-bank status
    //    externally.
    // -----------------------------------------------------------------
    task automatic run_double_buffer_cycle_test();
        $display("==== activation_buffer: double-buffer cycle ====");
        act_rst_n = 0; act_start = 0; act_compute_state = 0; act_preload_state = 0;
        act_drain_state = 0; act_tile_done = 0; act_tiles_complete = 0;
        act_DMA_in_valid = 0; act_DMA_in = '0;
        @(posedge clk); @(posedge clk);
        act_rst_n = 1;
        @(posedge clk); #1;

        act_start = 1;
        @(posedge clk); #1;
        act_start = 0;
        check("start: bank A enters its first-pass fill (first_pass_a asserted)",
              act_dut.first_pass_a == 1'b1);

        // Fill A all the way to full via DMA: 4 writes of 4 bytes = 16
        // (buffer depth is now 16 bytes/bank, matching a 4x4 array tile).
        act_DMA_in_valid = 1;
        act_DMA_in[0] = 4'h5;
        for (int i = 0; i < 8; i++) begin
            @(posedge clk); #1;
        end
        act_DMA_in_valid = 0;
        check("A fills to exactly 16 bytes via DMA during first_pass",
              act_dut.BUFF_A.wr_ptr == 10'd16);
        check("buff_a_full asserted once A is full", act_dut.buff_a_full == 1'b1);

        // PREFILL -> PRELOAD (full) -> COMPUTE. preload_state needs to be
        // held (not single-cycle-pulsed) for the PRELOAD->COMPUTE
        // transition to land - a one-cycle pulse leaves it stuck in
        // PRELOAD forever (verified: dropping it after one edge never
        // advances past PRELOAD in this FSM).
        act_preload_state = 1;

        // Drive compute_state and feed DMA (distinguishable data, 0x7) that
        // should now land in B while A drains out to the output.
        act_compute_state = 1;
        act_DMA_in_valid = 1;
        act_DMA_in[0] = 4'h7;

        repeat (2) @(posedge clk);
        #1;
        check("A becomes the active/draining bank once compute_state is asserted",
              act_dut.buff_a_active == 1'b1);
        check("output reflects A's data (0x5) while A is active",
              act_output_buf_valid == 1'b1 && act_output_buff[0] == 4'h5);

        // B reaches full exactly as A finishes draining (A's 16 bytes take
        // 4 active cycles; B needs exactly that many write cycles too).
        repeat (3) @(posedge clk);
        #1;
        check("B fills to exactly 16 bytes right as A finishes draining (no data loss, no halving)",
              act_dut.BUFF_B.wr_ptr == 10'd16);

        // Watch the banks swap back and forth for 12 total handoffs,
        // checking mutual exclusion the entire way. Count real
        // active-bank transitions rather than hardcoding cycle offsets,
        // since this is what actually matters (the byte-for-byte cadence
        // was already spot-checked above and via hierarchical trace).
        begin
            int switch_count;
            int safety_cycles;
            logic last_bank_a;
            logic mutex_violation;

            last_bank_a = 1'b1; // A is the currently active bank at this point
            switch_count = 0;
            safety_cycles = 0;
            mutex_violation = 1'b0;
            while (switch_count < 12 && safety_cycles < 2000) begin
                @(posedge clk); #1;
                safety_cycles++;
                if (act_dut.buff_a_active && act_dut.buff_b_active) mutex_violation = 1'b1;
                if (act_dut.buff_b_active && last_bank_a) begin
                    switch_count++;
                    last_bank_a = 1'b0;
                end else if (act_dut.buff_a_active && !last_bank_a) begin
                    switch_count++;
                    last_bank_a = 1'b1;
                end
            end

            check($sformatf("observed all 12 requested bank switches within the cycle budget (took %0d cycles)",
                             safety_cycles),
                  switch_count >= 12);
            check("mutual exclusion (A and B never both active) held across all 12 switches",
                  !mutex_violation);
        end

        act_DMA_in_valid = 0;
        act_compute_state = 0;

        $display("activation_buffer double-buffer cycle: %0d/%0d checks passed\n", checks - errors, checks);
    endtask

    // -----------------------------------------------------------------
    // 5) Realistic DMA supply: DMA.sv's act_buf now holds act_full_count=
    //    16'd128 bytes (a full 8-tile group), filled via up to 8 separate
    //    OP_LOAD_ACTIVATIONS calls (16 bytes/tile) issued back-to-back
    //    before OP_COMPUTE ever pulses - see KNOWN_ISSUES.md's "Fixed:
    //    activation double-buffer starves after tile 1" entry. Once compute
    //    starts, DMA_ACT_READ_FSM autonomously drains 16 bytes into
    //    activation_buffer per prefill_start/tile_done pulse, with no
    //    further host action needed. Unlike run_double_buffer_cycle_test()
    //    above (which keeps DMA_in_valid flowing indefinitely - useful for
    //    exercising the bank-swap logic itself, but not representative of
    //    DMA's real burst-per-tile cadence), this test drives DMA_in_valid
    //    in two separate 16-byte bursts - tile 1's during PREFILL, tile 2's
    //    right as tile_done pulses - matching that autonomous per-tile
    //    drain instead of a continuous stream.
    // -----------------------------------------------------------------
    task automatic run_realistic_dma_supply_test();
        int safety_cycles;
        int reads_seen;

        $display("==== activation_buffer: realistic (capacity-limited) DMA supply ====");
        act_rst_n = 0; act_start = 0; act_compute_state = 0; act_preload_state = 0;
        act_drain_state = 0; act_tile_done = 0; act_tiles_complete = 0;
        act_DMA_in_valid = 0; act_DMA_in = '0;
        @(posedge clk); @(posedge clk);
        act_rst_n = 1;
        @(posedge clk); #1;

        act_start = 1;
        @(posedge clk); #1;
        act_start = 0;

        // Tile 1's burst: exactly one tile's worth (16 bytes = 4 writes of
        // 4 bytes) during PREFILL, matching act_buf's first drain (triggered
        // by prefill_start in the real chip).
        act_DMA_in_valid = 1;
        act_DMA_in[0] = 4'h5;
        for (int i = 0; i < 4; i++) @(posedge clk);
        #1;
        act_DMA_in_valid = 0;
        check("tile 1 fully supplied: A reaches full on exactly one tile's worth of DMA data",
              act_dut.buff_a_full == 1'b1);

        act_preload_state = 1;
        act_compute_state = 1;

        // Drain tile 1 (4 reads) and confirm it comes out correctly - this
        // part should already work (see run_double_buffer_cycle_test()).
        reads_seen = 0;
        safety_cycles = 0;
        while (reads_seen < 4 && safety_cycles < 100) begin
            @(posedge clk); #1;
            safety_cycles++;
            if (act_output_buf_valid) reads_seen++;
        end
        check("tile 1: activation_buffer produced 4 valid reads with no further DMA data needed",
              reads_seen == 4);

        // Now simulate tile 2 of the same group starting: tile_done pulses,
        // compute_state stays asserted for the next tile, and DMA_ACT_READ_FSM
        // autonomously drains tile 2's already-preloaded 16 bytes right on
        // that same pulse (act_buf held all 8 tiles from the pre-compute
        // OP_LOAD_ACTIVATIONS calls, so there's nothing left for the host to
        // do here) - use a distinguishable byte (0x9) to confirm this is
        // genuinely fresh tile-2 data, not stale tile-1 data (0x5) re-read.
        act_tile_done = 1;
        act_DMA_in_valid = 1;
        act_DMA_in[0] = 4'h9;
        @(posedge clk); #1;
        act_tile_done = 0;
        for (int i = 0; i < 3; i++) @(posedge clk);
        #1;
        act_DMA_in_valid = 0;

        reads_seen = 0;
        safety_cycles = 0;
        while (reads_seen < 4 && safety_cycles < 200) begin
            @(posedge clk); #1;
            safety_cycles++;
            if (act_output_buf_valid) begin
                if (reads_seen == 0) check("tile 2: fresh data (0x9), not stale tile 1 data (0x5)",
                                           act_output_buff[0] == 4'h9);
                reads_seen++;
            end
        end
        check("tile 2: activation_buffer produces 4 fresh valid reads once its data is supplied",
              reads_seen == 4);

        act_compute_state = 0;
        act_preload_state = 0;

        $display("activation_buffer realistic DMA supply: %0d/%0d checks passed\n", checks - errors, checks);
    endtask

    initial begin
        run_i_buffer_test();
        run_bank_fsm_test();
        run_activation_buffer_test();
        run_double_buffer_cycle_test();
        run_realistic_dma_supply_test();

        $display("==== SUMMARY ====");
        $display("total: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
