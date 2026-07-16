`timescale 1ns/1ps
//
// Testbench for src/weight_fifo.sv (FIFO + weight_loader)
//
// Two targets are exercised:
//   1) FIFO        - the raw 4-deep queue, tested against its own default
//                     parameters (WIDTH=32, ROW_SIZE=3, DEPTH=4).
//   2) weight_loader - the FSM wrapper as instantiated by tpu_top. Its
//                     ports are sized using VW = ADDR_WIDTH*BITWIDTH = 256
//                     bits/row, but it instantiates FIFO with no parameter
//                     overrides, so the internal FIFO only carries 32
//                     bits/row. This test drives distinguishable data into
//                     the upper bits of read_data and shows it does not
//                     survive the round trip.
//
module tb_weight_fifo;

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

    // ---------------------------------------------------------------
    // 1) FIFO submodule, default params: WIDTH=32, ROW_SIZE=3, DEPTH=4
    // ---------------------------------------------------------------
    localparam W = 32, RS = 3, D = 4;

    logic clk = 0;
    always #5 clk = ~clk;

    logic reset_n;
    logic we, re;
    logic [RS-1:0][W-1:0] data_in;
    logic [RS-1:0][W-1:0] data_out;
    logic full, empty;

    FIFO #(.WIDTH(W), .ROW_SIZE(RS), .DEPTH(D)) dut_fifo (
        .clock(clk), .reset_n(reset_n),
        .data_in(data_in), .we(we), .re(re),
        .data_out(data_out), .full(full), .empty(empty)
    );

    task automatic reset_fifo();
        reset_n = 0;
        we = 0; re = 0; data_in = '0;
        @(posedge clk); @(posedge clk);
        reset_n = 1;
        @(posedge clk);
    endtask

    logic [RS-1:0][W-1:0] wr_word [4];

    logic fifo_test_done = 0;
    logic wl_test_done = 0;

    initial begin
        $display("==== FIFO submodule ====");
        reset_fifo();
        check("after reset: empty asserted", empty === 1'b1);
        check("after reset: full deasserted", full === 1'b0);

        // fill all 4 slots with distinct patterns
        for (int i = 0; i < 4; i++) begin
            wr_word[i][0] = 32'hA000_0000 + i;
            wr_word[i][1] = 32'hB000_0000 + i;
            wr_word[i][2] = 32'hC000_0000 + i;
            @(negedge clk);
            we = 1; data_in = wr_word[i];
        end
        @(negedge clk);
        we = 0;
        check("after 4 writes: full asserted", full === 1'b1);
        check("after 4 writes: not empty", empty === 1'b0);

        // attempt a 5th write while full - should be dropped (we ignored)
        @(negedge clk);
        we = 1; data_in[0] = 32'hDEAD_BEEF;
        @(negedge clk);
        we = 0;
        check("write while full is a no-op (still full)", full === 1'b1);

        // drain and verify FIFO ordering (word[0] should come out first)
        for (int i = 0; i < 4; i++) begin
            @(negedge clk);
            re = 1;
            #1; // allow comb data_out to settle for this getPtr
            check($sformatf("pop %0d returns row written %0dst", i, i),
                  data_out === wr_word[i]);
        end
        @(negedge clk);
        re = 0;
        check("after draining 4 entries: empty asserted", empty === 1'b1);

        // simultaneous we&&re once fifo has at least one entry
        @(negedge clk);
        we = 1; data_in = wr_word[0];
        @(negedge clk);
        we = 0;
        check("single write leaves fifo non-empty, non-full", !empty && !full);

        @(negedge clk);
        we = 1; re = 1; data_in = wr_word[1];
        @(negedge clk);
        we = 0; re = 0;
        check("simultaneous we&&re: fifo neither grows nor shrinks (still non-empty/non-full)",
              !empty && !full);

        $display("==== FIFO submodule done: %0d/%0d checks passed ====\n", checks-errors, checks);
        fifo_test_done = 1;
    end

    // ---------------------------------------------------------------
    // 2) weight_loader wrapper (drives the FIFO with its own params)
    // ---------------------------------------------------------------
    logic clk2 = 0;
    always #5 clk2 = ~clk2;

    localparam int WL_ROW = 3;
    localparam int WL_VW  = 16 * 16; // ADDR_WIDTH(16) * BITWIDTH(16)

    logic rst_n2;
    logic [WL_ROW-1:0][WL_VW-1:0] read_data;
    logic start_load_fifo_state, load_fifo_state, preload_state, tiles_complete;
    logic read_data_valid;
    logic fifo_full, fifo_empty, data_valid;
    logic [WL_ROW-1:0][WL_VW-1:0] wl_data_out;

    weight_loader dut_wl (
        .clk(clk2), .rst_n(rst_n2),
        .read_data(read_data),
        .start_load_fifo_state(start_load_fifo_state),
        .load_fifo_state(load_fifo_state),
        .preload_state(preload_state),
        .tiles_complete(tiles_complete),
        .read_data_valid(read_data_valid),
        .fifo_full(fifo_full),
        .fifo_empty(fifo_empty),
        .data_valid(data_valid),
        .data_out(wl_data_out)
    );

    int wl_errors = 0;
    int wl_checks = 0;
    task automatic wcheck(string name, logic cond);
        wl_checks++;
        if (!cond) begin
            wl_errors++;
            $display("[FAIL] %s", name);
        end else begin
            $display("[PASS] %s", name);
        end
    endtask

    logic [WL_ROW-1:0][WL_VW-1:0] sent_word;

    initial begin
        @(negedge clk); // let FIFO tb settle first, purely cosmetic ordering in log
        $display("\n==== weight_loader wrapper ====");
        rst_n2 = 0; start_load_fifo_state = 0; load_fifo_state = 0;
        preload_state = 0; tiles_complete = 0; read_data_valid = 0; read_data = '0;
        @(posedge clk2); @(posedge clk2);
        rst_n2 = 1;
        @(posedge clk2);

        wcheck("idle: fifo_empty asserted", fifo_empty === 1'b1);

        // Kick off a load: distinguishable value with bits set above bit 31
        // (upper bits only representable if the FIFO were truly 256b/row wide)
        sent_word[0] = '0;
        sent_word[0][255:240] = 16'hFACE; // lands above bit 31; should be lost to truncation
        sent_word[0][31:0] = 32'h1234_5678;
        sent_word[1] = '0;
        sent_word[2] = '0;

        start_load_fifo_state = 1;
        @(posedge clk2);
        start_load_fifo_state = 0;
        load_fifo_state = 1;
        read_data = sent_word;
        read_data_valid = 1;
        @(posedge clk2);
        read_data_valid = 0;
        load_fifo_state = 0;
        @(posedge clk2);

        preload_state = 1;
        @(posedge clk2);
        #1;
        if (data_valid) begin
            wcheck("BUG: upper bits of read_data (>31) survive into data_out (expected to fail)",
                   wl_data_out[0][255:32] == sent_word[0][255:32]);
            wcheck("lower 32 bits of row 0 round-trip correctly",
                   wl_data_out[0][31:0] == sent_word[0][31:0]);
        end else begin
            $display("[INFO] data_valid not asserted on first preload cycle, check timing manually");
        end

        repeat (6) @(posedge clk2);
        $display("==== weight_loader wrapper done: %0d/%0d checks passed ====\n",
                  wl_checks - wl_errors, wl_checks);
        wl_test_done = 1;
    end

    initial begin
        wait (fifo_test_done && wl_test_done);
        $display("\n==== SUMMARY ====");
        $display("FIFO submodule:    %0d/%0d passed", checks - errors, checks);
        $display("weight_loader:     %0d/%0d passed (upper-bit truncation is an EXPECTED failure demonstrating the bug)",
                  wl_checks - wl_errors, wl_checks);
        $finish;
    end

endmodule
