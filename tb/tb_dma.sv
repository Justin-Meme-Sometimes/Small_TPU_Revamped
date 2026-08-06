`timescale 1ns/1ps
//
// Testbench for src/DMA.sv (DMA, j_buffer, LOAD_WEIGHTS_FSM, LOAD_BIAS_FSM,
// LOAD_ACTIVATIONS_FSM, DMA_READ_FSM).
//
// DMA used to be driven by a single prefill_state pulse + an internal
// dma_fsm that walked LOAD_WEIGHTS -> LOAD_BIAS -> LOAD_ACTIVATIONS itself.
// It's since been split into three independent per-bank FSMs, each with its
// own start pulse (weight_fsm_start/bias_fsm_start/activation_fsm_start) and
// `bank` is now an external input the caller must hold at the right value
// for the whole load window, rather than something DMA derives internally.
//
// Verifies each FSM sequences IDLE -> LOAD_* -> DONE -> IDLE independently,
// weights stream out 4 bytes/cycle in FIFO order via weight_bank_out/
// weight_bank_out_valid once loading finishes, and bias/activation each
// present their full 16-byte tile in one shot via bias_bank_out/
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
    logic bias_fsm_start;
    logic activation_fsm_start;
    logic weight_fsm_start;
    logic tile_done;
    logic [3:0][7:0] computed_bank_in;
    logic computed_bank_in_valid;
    logic start_read_fsm;
    logic [3:0] bank;
    logic result_we;
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
        .bias_fsm_start(bias_fsm_start),
        .activation_fsm_start(activation_fsm_start),
        .weight_fsm_start(weight_fsm_start),
        .tile_done(tile_done),
        .computed_bank_in(computed_bank_in),
        .computed_bank_in_valid(computed_bank_in_valid),
        .start_read_fsm(start_read_fsm),
        .bank(bank),
        .result_we(result_we),
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
        bias_fsm_start = 0;
        activation_fsm_start = 0;
        weight_fsm_start = 0;
        tile_done = 0;
        bank = 4'd0;
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
        check("reset: weight FSM in IDLE", dut.w_fsm.current_state == dut.w_fsm.IDLE);
        check("reset: bias FSM in IDLE", dut.b_fsm.current_state == dut.b_fsm.IDLE);
        check("reset: activation FSM in IDLE", dut.a_fsm.current_state == dut.a_fsm.IDLE);
        check("reset: read FSM in IDLE", dut.r_fsm.current_state == dut.r_fsm.IDLE);
        check("reset: weight buffer empty", dut.weight_empty == 1'b1);
        $display("DMA reset: %0d/%0d checks passed\n", checks - errors, checks);
    endtask

    // Drives bank=1 + a one-cycle weight_fsm_start pulse, then holds bank at
    // 1 while feeding all 256 bytes on u_in. The IDLE -> LOAD_WEIGHTS
    // transition cycle consumes/drops whatever's on u_in that cycle (the FSM
    // isn't in LOAD_WEIGHTS, so we_weights is still 0), so data[0] is
    // presented twice: once on the dropped start cycle, once as the first
    // real write. Captures weight_bank_out/_valid as the buffer streams back
    // out afterward (starts as soon as loading finishes, since weight_re
    // fires the moment we_weights drops and the buffer isn't empty).
    task automatic load_and_drain_weights(ref byte data [256], ref byte captured [256], output int drained);
        int idx, safety;

        bank = 4'd1;
        weight_fsm_start = 1'd1;
        u_in = data[0];
        @(posedge clk); #1;
        weight_fsm_start = 1'd0;

        drained = 0;
        for (idx = 0; idx < 256; idx++) begin
            u_in = data[idx];
            if (weight_bank_out_valid && drained < 256) begin
                captured[drained+0] = weight_bank_out[0];
                captured[drained+1] = weight_bank_out[1];
                captured[drained+2] = weight_bank_out[2];
                captured[drained+3] = weight_bank_out[3];
                drained += 4;
            end
            @(posedge clk); #1;
        end
        bank = 4'd0;

        safety = 0;
        while (drained < 256 && safety < 200) begin
            if (weight_bank_out_valid) begin
                captured[drained+0] = weight_bank_out[0];
                captured[drained+1] = weight_bank_out[1];
                captured[drained+2] = weight_bank_out[2];
                captured[drained+3] = weight_bank_out[3];
                drained += 4;
            end
            @(posedge clk); #1;
            safety++;
        end
    endtask

    // Same shape as load_and_drain_weights, but for bias/activation: these
    // are snapshot buffers (present the whole tile at once via buff_out),
    // so there's nothing to drain - just poll for the one-shot _valid pulse
    // that fires once the tile finishes loading.
    task automatic load_bias(ref byte data [16], output logic [3:0][31:0] captured, output bit seen);
        int idx, safety;

        bank = 4'd2;
        bias_fsm_start = 1'd1;
        u_in = data[0];
        @(posedge clk); #1;
        bias_fsm_start = 1'd0;

        for (idx = 0; idx < 16; idx++) begin
            u_in = data[idx];
            @(posedge clk); #1;
        end
        bank = 4'd0;

        seen = 0;
        safety = 0;
        while (!seen && safety < 20) begin
            if (bias_bank_out_valid) begin
                captured = bias_bank_out;
                seen = 1;
            end
            @(posedge clk); #1;
            safety++;
        end
        // The FSM still needs LOAD_BIAS -> DONE -> IDLE (2 more edges) after
        // the valid pulse fires - give it a few cycles to settle before the
        // caller checks current_state.
        repeat (3) begin
            @(posedge clk); #1;
        end
    endtask

    task automatic load_activations(ref byte data [16], output logic [31:0][3:0] captured, output bit seen);
        int idx, safety;

        bank = 4'd3;
        activation_fsm_start = 1'd1;
        u_in = data[0];
        @(posedge clk); #1;
        activation_fsm_start = 1'd0;

        for (idx = 0; idx < 16; idx++) begin
            u_in = data[idx];
            @(posedge clk); #1;
        end
        bank = 4'd0;

        seen = 0;
        safety = 0;
        while (!seen && safety < 20) begin
            if (activation_bank_out_valid) begin
                captured = activation_bank_out;
                seen = 1;
            end
            @(posedge clk); #1;
            safety++;
        end
        // Same reasoning as load_bias(): give LOAD_ACTIVATIONS -> DONE ->
        // IDLE a few cycles to settle before the caller checks current_state.
        repeat (3) begin
            @(posedge clk); #1;
        end
    endtask

    byte weight_data [256];
    byte bias_data [16];
    byte act_data [16];
    byte weight_captured [256];

    task automatic run_full_load_test();
        int drained;
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

        load_and_drain_weights(weight_data, weight_captured, drained);
        check("all 256 weight bytes streamed out via weight_bank_out before timing out", drained == 256);

        weight_order_ok = 1;
        for (int i = 0; i < 256; i++) begin
            if (weight_captured[i] !== weight_data[i]) weight_order_ok = 0;
        end
        check("weight_bank_out replayed all 256 bytes in FIFO order", weight_order_ok);
        check("weight FSM returned to IDLE", dut.w_fsm.current_state == dut.w_fsm.IDLE);
        check("weight buffer fully drained (empty)", dut.weight_empty == 1'b1);

        load_bias(bias_data, bias_captured, bias_seen);
        check("bias_bank_out_valid pulsed once with a full tile", bias_seen);
        for (int i = 0; i < 16; i++) bytes_expected[i] = bias_data[i];
        bias_words_expected = bytes_expected;
        check("bias_bank_out reflects the 16 loaded bytes", bias_captured === bias_words_expected);
        check("bias FSM returned to IDLE", dut.b_fsm.current_state == dut.b_fsm.IDLE);

        load_activations(act_data, act_captured, act_seen);
        check("activation_bank_out_valid pulsed once with a full tile", act_seen);
        for (int i = 0; i < 16; i++) bytes_expected[i] = act_data[i];
        act_nibbles_expected = bytes_expected;
        check("activation_bank_out reflects the 16 loaded bytes", act_captured === act_nibbles_expected);
        check("activation FSM returned to IDLE", dut.a_fsm.current_state == dut.a_fsm.IDLE);

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
