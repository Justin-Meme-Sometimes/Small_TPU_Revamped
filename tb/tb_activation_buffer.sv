`timescale 1ns/1ps
//
// Testbench for src/activation_buffer.sv (i_buffer, bank_fsm, activation_buffer)
//
// Two significant bugs found while writing this testbench (documented as
// expected-failure-style checks below, not fixed):
//
//   i_buffer: on read, re_out[0]=buff[curr_count] but curr_count already
//   points ONE PAST the last written slot (it's the "next free slot"
//   pointer after a write). So every read is off by one: re_out[0] reads
//   an unwritten slot, and the true first-written byte (buff[0] after one
//   write) is never returned. Should almost certainly be
//   buff[curr_count-1], buff[curr_count-2], ... Also curr_count is only 8
//   bits and increments by 4 from 0, so it is 0,4,8,...,252,0,... - it
//   never equals 255, so the "full" flag (curr_count==255) is unreachable
//   and can never actually stop an overflowing write.
//
//   bank_fsm: the PRELOAD state's guard is "if(!PRELOAD)" - PRELOAD here
//   resolves to the enum value (2), so "!PRELOAD" is always false. PRELOAD
//   therefore always falls through to COMPUTE on the very next cycle
//   without ever asserting we/first_pass - almost certainly meant to check
//   a real readiness signal (copied from PREFILL's "!full" pattern and
//   never updated).
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
        check({"KNOWN BUG: re_out[0] reads an unwritten slot (buff[4]), ",
               "not the first written byte 0xa - documents the off-by-one"},
              ib_re_out[0] == 4'h0);
        check("re_out[1] recovers we_in[3] (0xd)", ib_re_out[1] == 4'hd);
        check("re_out[2] recovers we_in[2] (0xc)", ib_re_out[2] == 4'hc);
        check("re_out[3] recovers we_in[1] (0xb)", ib_re_out[3] == 4'hb);
        check("KNOWN BUG: we_in[0] (0xa) is never returned by any read this cycle",
              ib_re_out[0] != 4'ha);
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
        check({"KNOWN BUG: PRELOAD's guard is the always-false '!PRELOAD' ",
               "(enum value, not a real signal), so it falls straight through: ",
               "we/first_pass are NOT asserted in PRELOAD"},
              bf_we == 1'b0 && bf_first_pass == 1'b0);

        bf_step();
        check("PRELOAD unconditionally advances to COMPUTE the very next cycle",
              bf_active == 1'b0); // COMPUTE only asserts active once !empty&&(compute_state||drain_state)

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

    initial begin
        run_i_buffer_test();
        run_bank_fsm_test();
        run_activation_buffer_test();

        $display("==== SUMMARY ====");
        $display("total: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
