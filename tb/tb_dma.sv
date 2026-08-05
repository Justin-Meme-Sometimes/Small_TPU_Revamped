`timescale 1ns/1ps
//
// Testbench for src/DMA.sv (DMA, j_buffer, DMA_FSM).
//
// Drives DMA directly with dummy weight/bias/activation byte streams via
// u_in + prefill_state - no dependency on tpu_top's control signals.
// Verifies DMA_FSM sequences IDLE -> LOAD_WEIGHTS -> LOAD_BIAS ->
// LOAD_ACTIVATIONS -> DONE -> IDLE, weights stream out 4 bytes/cycle in
// FIFO order via weight_bank_out/weight_bank_out_valid, and bias/activation
// each present their full 16-byte tile in one shot via bias_bank_out/
// activation_bank_out once loaded.
//
// Also covers the other direction: computed results written in via
// computed_bank_in/computed_bank_in_valid (gated by the external result_we
// enable window) landing in result_buf, and DMA_READ_FSM draining them back
// out 4 bytes/cycle via result_re/result_re_out once start_read_fsm pulses -
// u_out itself isn't wired up yet (no u_out_valid port exists), so this
// checks result_buf's internal re_out/re_valid directly instead.
//
module tb_dma;

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

    logic rst_n;
    logic [7:0] u_in;
    logic prefill_state;
    logic [3:0][7:0] computed_bank_in;
    logic computed_bank_in_valid;
    logic result_we;
    logic start_read_fsm;
    logic [7:0] u_out;
    logic [3:0][7:0] weight_bank_out;
    logic weight_bank_out_valid;
    logic [31:0][3:0] activation_bank_out;
    logic activation_bank_out_valid;
    logic [3:0][31:0] bias_bank_out;
    logic bias_bank_out_valid;

    DMA dut (
        .clk(clk),
        .rst_n(rst_n),
        .u_in(u_in),
        .prefill_state(prefill_state),
        .computed_bank_in(computed_bank_in),
        .computed_bank_in_valid(computed_bank_in_valid),
        .result_we(result_we),
        .start_read_fsm(start_read_fsm),
        .u_out(u_out),
        .weight_bank_out(weight_bank_out),
        .weight_bank_out_valid(weight_bank_out_valid),
        .activation_bank_out(activation_bank_out),
        .activation_bank_out_valid(activation_bank_out_valid),
        .bias_bank_out(bias_bank_out),
        .bias_bank_out_valid(bias_bank_out_valid));

    task automatic reset_dut();
        rst_n = 0;
        u_in = '0;
        prefill_state = 0;
        computed_bank_in = '0;
        computed_bank_in_valid = 0;
        result_we = 0;
        start_read_fsm = 0;
        @(posedge clk); @(posedge clk);
        rst_n = 1;
        @(posedge clk); #1;
    endtask

    task automatic run_reset_test();
        reset_dut();
        $display("==== DMA: reset ====");
        check("reset: weight_bank_out_valid low", weight_bank_out_valid == 1'b0);
        check("reset: activation_bank_out_valid low", activation_bank_out_valid == 1'b0);
        check("reset: bias_bank_out_valid low", bias_bank_out_valid == 1'b0);
        check("reset: FSM in IDLE", dut.dma_fsm.current_state == dut.dma_fsm.IDLE);
        check("reset: weight buffer empty", dut.weight_empty == 1'b1);
        $display("DMA reset: %0d/%0d checks passed\n", checks - errors, checks);
    endtask

    byte weight_data [256];
    byte bias_data [16];
    byte act_data [16];
    byte weight_captured [256];

    task automatic run_full_load_test();
        int w_idx, b_idx, a_idx, wc_idx;
        int safety;
        bit bias_seen, act_seen, weight_order_ok;
        logic [3:0][31:0] bias_captured;
        logic [31:0][3:0] act_captured;
        logic [15:0][7:0] bytes_expected;
        logic [3:0][31:0] bias_words_expected;
        logic [31:0][3:0] act_nibbles_expected;

        reset_dut();
        $display("==== DMA: full load/drain with dummy data ====");

        for (int i = 0; i < 256; i++) weight_data[i] = i[7:0];
        for (int i = 0; i < 16; i++) bias_data[i] = 8'hA0 + i[7:0];
        for (int i = 0; i < 16; i++) act_data[i] = 8'hB0 + i[7:0];

        w_idx = 0; b_idx = 0; a_idx = 0; wc_idx = 0;
        bias_seen = 0; act_seen = 0;
        safety = 0;

        // Kick off the load - the cycle start is sampled is consumed by the
        // IDLE -> LOAD_WEIGHTS transition, no byte is captured on it.
        prefill_state = 1;
        @(posedge clk); #1;
        prefill_state = 0;

        while ((wc_idx < 256 || !bias_seen || !act_seen) && safety < 600) begin
            if (dut.bank == 4'd1 && w_idx < 256) begin
                u_in = weight_data[w_idx];
                w_idx++;
            end else if (dut.bank == 4'd2 && b_idx < 16) begin
                u_in = bias_data[b_idx];
                b_idx++;
            end else if (dut.bank == 4'd3 && a_idx < 16) begin
                u_in = act_data[a_idx];
                a_idx++;
            end

            if (weight_bank_out_valid && wc_idx < 256) begin
                weight_captured[wc_idx+0] = weight_bank_out[0];
                weight_captured[wc_idx+1] = weight_bank_out[1];
                weight_captured[wc_idx+2] = weight_bank_out[2];
                weight_captured[wc_idx+3] = weight_bank_out[3];
                wc_idx += 4;
            end
            if (bias_bank_out_valid && !bias_seen) begin
                bias_captured = bias_bank_out;
                bias_seen = 1;
            end
            if (activation_bank_out_valid && !act_seen) begin
                act_captured = activation_bank_out;
                act_seen = 1;
            end

            @(posedge clk); #1;
            safety++;
        end

        check("all 256 weight bytes were written into weight_buf", w_idx == 256);
        check("all 16 bias bytes were written into bias_buf", b_idx == 16);
        check("all 16 activation bytes were written into act_buf", a_idx == 16);
        check("all 256 weight bytes streamed out via weight_bank_out before timing out", wc_idx == 256);
        check("bias_bank_out_valid pulsed once with a full tile", bias_seen);
        check("activation_bank_out_valid pulsed once with a full tile", act_seen);

        weight_order_ok = 1;
        for (int i = 0; i < 256; i++) begin
            if (weight_captured[i] !== weight_data[i]) weight_order_ok = 0;
        end
        check("weight_bank_out replayed all 256 bytes in FIFO order", weight_order_ok);

        for (int i = 0; i < 16; i++) bytes_expected[i] = bias_data[i];
        bias_words_expected = bytes_expected;
        check("bias_bank_out reflects the 16 loaded bytes", bias_captured === bias_words_expected);

        for (int i = 0; i < 16; i++) bytes_expected[i] = act_data[i];
        act_nibbles_expected = bytes_expected;
        check("activation_bank_out reflects the 16 loaded bytes", act_captured === act_nibbles_expected);

        check("FSM returned to IDLE", dut.dma_fsm.current_state == dut.dma_fsm.IDLE);
        check("weight buffer fully drained (empty)", dut.weight_empty == 1'b1);

        $display("DMA full load/drain: %0d/%0d checks passed\n", checks - errors, checks);
    endtask

    byte result_data [256];
    byte result_captured [256];

    // Writes 256 bytes of dummy "computed" results in via computed_bank_in
    // (64 groups of 4, matching the requant pipeline's 4-lane output),
    // gated by the same two-signal scheme as the real DRAIN window: result_we
    // held high for the whole window, computed_bank_in_valid pulsing only on
    // the cycles with a real result. Then pulses start_read_fsm and checks
    // DMA_READ_FSM drains all 256 bytes back out via result_re/result_re_out
    // in FIFO order, and returns to IDLE once computed_in_max is reached.
    task automatic run_result_readback_test();
        int w_idx, rc_idx;
        int safety;
        bit result_order_ok;

        reset_dut();
        $display("==== DMA: result write-in / read-out ====");

        for (int i = 0; i < 256; i++) result_data[i] = 8'hC0 + i[7:0];

        w_idx = 0;
        result_we = 1;
        for (int g = 0; g < 64; g++) begin
            computed_bank_in[0] = result_data[w_idx+0];
            computed_bank_in[1] = result_data[w_idx+1];
            computed_bank_in[2] = result_data[w_idx+2];
            computed_bank_in[3] = result_data[w_idx+3];
            computed_bank_in_valid = 1;
            @(posedge clk); #1;
            w_idx += 4;
        end
        computed_bank_in_valid = 0;
        result_we = 0;

        check("all 256 result bytes written into result_buf (64 groups of 4)", dut.result_buf.wr_ptr == 10'd256);
        check("result_full asserted once the full 256 bytes are written", dut.result_full == 1'b1);

        rc_idx = 0;
        safety = 0;
        start_read_fsm = 1;
        @(posedge clk); #1;
        start_read_fsm = 0;

        while (rc_idx < 256 && safety < 300) begin
            if (dut.result_re_valid) begin
                result_captured[rc_idx+0] = dut.result_re_out[0];
                result_captured[rc_idx+1] = dut.result_re_out[1];
                result_captured[rc_idx+2] = dut.result_re_out[2];
                result_captured[rc_idx+3] = dut.result_re_out[3];
                rc_idx += 4;
            end
            @(posedge clk); #1;
            safety++;
        end

        check("all 256 result bytes streamed back out via result_re_out before timing out", rc_idx == 256);

        result_order_ok = 1;
        for (int i = 0; i < 256; i++) begin
            if (result_captured[i] !== result_data[i]) result_order_ok = 0;
        end
        check("read-back replayed all 256 result bytes in FIFO order", result_order_ok);

        check("read FSM returned to IDLE once computed_in_max was reached", dut.r_fsm.current_state == dut.r_fsm.IDLE);
        check("result buffer fully drained (empty) after readback", dut.result_empty == 1'b1);

        $display("DMA result write-in/read-out: %0d/%0d checks passed\n", checks - errors, checks);
    endtask

    initial begin
        run_reset_test();
        run_full_load_test();
        run_result_readback_test();

        $display("==== SUMMARY ====");
        $display("total: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
