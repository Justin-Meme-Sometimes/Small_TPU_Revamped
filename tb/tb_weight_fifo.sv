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

        // read while empty must be a safe no-op: guarded by !empty in the
        // FIFO's re branch, so count/getPtr must not move.
        @(negedge clk);
        re = 1;
        @(negedge clk);
        @(negedge clk);
        re = 0;
        check("read while empty is a no-op: still empty", empty === 1'b1);
        check("read while empty is a no-op: not full", full === 1'b0);

        // simultaneous we&&re while empty: the we&&re branch requires
        // !empty, so this falls through to the we-only branch (plain write).
        @(negedge clk);
        we = 1; re = 1; data_in = wr_word[2];
        @(negedge clk);
        we = 0; re = 0;
        check("we&&re while empty performs a plain write, not a no-op", !empty && !full);
        #1;
        check("we&&re-while-empty write is readable back correctly", data_out === wr_word[2]);

        @(negedge clk);
        re = 1;
        @(negedge clk);
        re = 0;
        check("after draining the we&&re-while-empty entry: empty again", empty === 1'b1);

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

        // we&&re&&!empty writes data_in at putPtr AND advances getPtr past
        // the old front in the same cycle - it doesn't queue behind the
        // existing entry, it silently evicts it. Confirm that's really what
        // comes back out (NOTE, not a bug: this is how a true dual-port
        // "replace" cycle behaves here).
        @(negedge clk);
        re = 1;
        #1;
        check("NOTE: we&&re evicted the old front - draining now returns wr_word[1], not wr_word[0]",
              data_out === wr_word[1]);
        @(negedge clk);
        re = 0;
        check("after draining that entry: fifo empty again", empty === 1'b1);

        // second full fill/drain pass: exercises the 2-bit putPtr/getPtr
        // wrapping around a second time, from a non-zero starting phase
        // (unlike the very first pass, which started from freshly-reset
        // pointers).
        for (int i = 0; i < 4; i++) begin
            wr_word[i][0] = 32'hD000_0000 + i;
            wr_word[i][1] = 32'hE000_0000 + i;
            wr_word[i][2] = 32'hF000_0000 + i;
            @(negedge clk);
            we = 1; data_in = wr_word[i];
        end
        @(negedge clk);
        we = 0;
        check("second fill pass: full asserted", full === 1'b1);

        for (int i = 0; i < 4; i++) begin
            @(negedge clk);
            re = 1;
            #1;
            check($sformatf("second pass pop %0d returns row written %0dst (pointer wraparound holds)", i, i),
                  data_out === wr_word[i]);
        end
        @(negedge clk);
        re = 0;
        check("second pass: empty again after draining", empty === 1'b1);

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

    task automatic wl_reset();
        rst_n2 = 0; start_load_fifo_state = 0; load_fifo_state = 0;
        preload_state = 0; tiles_complete = 0; read_data_valid = 0; read_data = '0;
        @(posedge clk2); @(posedge clk2);
        rst_n2 = 1;
        @(posedge clk2);
    endtask

    initial begin
        @(negedge clk); // let FIFO tb settle first, purely cosmetic ordering in log
        $display("\n==== weight_loader wrapper ====");
        rst_n2 = 0; start_load_fifo_state = 0; load_fifo_state = 0;
        preload_state = 0; tiles_complete = 0; read_data_valid = 0; read_data = '0;
        @(posedge clk2); @(posedge clk2);
        rst_n2 = 1;
        @(posedge clk2);
        #1;

        wcheck("idle: fifo_empty asserted", fifo_empty === 1'b1);

        // Kick off a load: distinguishable value with bits set above bit 31
        // (upper bits only representable if the FIFO were truly 256b/row wide)
        sent_word[0] = '0;
        sent_word[0][255:240] = 16'hFACE; // lands above bit 31; should be lost to truncation
        sent_word[0][31:0] = 32'h1234_5678;
        sent_word[1] = '0;
        sent_word[2] = '0;

        start_load_fifo_state = 1;
        @(posedge clk2); #1;                    // IDLE -> LOAD_FIFO
        start_load_fifo_state = 0;
        load_fifo_state = 1;
        read_data = sent_word;
        read_data_valid = 1;
        @(posedge clk2); #1;                    // real write of sent_word
        read_data_valid = 0;
        load_fifo_state = 0;
        @(posedge clk2); #1;                    // LOAD_FIFO -> PRELOAD

        // Sample data_valid/data_out the same way the FIFO submodule test
        // above does (right when the condition is set, *before* the next
        // edge) - the FIFO's getPtr advances via NBA at the same edge as
        // the read, so data_out has already moved on to the NEXT row by
        // the time you sample a cycle late.
        preload_state = 1;
        #1;
        // FINDING (verified via hierarchical trace): the IDLE case sets
        // fifo_we=1 unconditionally whenever start_load_fifo_state is
        // asserted - unlike LOAD_FIFO's writes, this one is NOT gated by
        // read_data_valid. So the IDLE->LOAD_FIFO transition edge above
        // silently writes a garbage row (read_data was still all-zero at
        // that point) ahead of the real data. This first preload pulse
        // hands out that garbage row, not sent_word.
        wcheck("FINDING: first preload pulse returns a garbage all-zero row (IDLE->LOAD_FIFO write isn't gated by read_data_valid)",
               data_valid === 1'b1 && wl_data_out[0][31:0] == 32'h0);

        @(posedge clk2); #1;
        // Second preload pulse: the real row.
        wcheck("second preload pulse: data_valid still asserted", data_valid === 1'b1);
        wcheck("BUG: upper bits of read_data (>31) survive into data_out (expected to fail - FIFO is only 32b/row wide)",
               wl_data_out[0][255:32] == sent_word[0][255:32]);
        wcheck("lower 32 bits of row 0 round-trip correctly",
               wl_data_out[0][31:0] == sent_word[0][31:0]);

        @(posedge clk2); #1;
        preload_state = 0;
        wcheck("both rows drained: fifo_empty asserted", fifo_empty === 1'b1);

        // -------------------------------------------------------------
        // edge case A: LOAD_FIFO->PRELOAD is also triggered purely by
        // fifo_full, independent of load_fifo_state. Fill to exactly 4
        // entries and deliberately never drop load_fifo_state.
        // -------------------------------------------------------------
        $display("==== weight_loader edge cases ====");
        wl_reset();
        #1;
        start_load_fifo_state = 1;
        @(posedge clk2); #1;                    // IDLE -> LOAD_FIFO (+ garbage row, count=1)
        start_load_fifo_state = 0;
        load_fifo_state = 1;                    // held high through the whole fill and beyond
        for (int i = 0; i < 3; i++) begin
            read_data = '0;
            read_data[0][31:0] = 32'hA000_0000 + i;
            read_data_valid = 1;
            @(posedge clk2); #1;
        end
        read_data_valid = 0;
        wcheck("edgeA: fifo_full reached (1 garbage + 3 real rows)", fifo_full === 1'b1);

        preload_state = 1;                      // load_fifo_state is STILL 1 here
        @(posedge clk2); #1;
        wcheck("edgeA: FSM left LOAD_FIFO for PRELOAD purely from fifo_full (load_fifo_state never dropped)",
               data_valid === 1'b1);
        preload_state = 0;
        load_fifo_state = 0;
        repeat (4) @(posedge clk2);

        // -------------------------------------------------------------
        // edge case B: LOAD_FIFO->PRELOAD also triggers when load_fifo_state
        // drops early, even though the fifo isn't full yet.
        // -------------------------------------------------------------
        wl_reset();
        #1;
        start_load_fifo_state = 1;
        @(posedge clk2); #1;                    // IDLE -> LOAD_FIFO (+ garbage row, count=1)
        start_load_fifo_state = 0;
        load_fifo_state = 1;
        read_data = '0;
        read_data[0][31:0] = 32'hB000_0001;
        read_data_valid = 1;
        @(posedge clk2); #1;                    // one real write, count=2 (of 4)
        read_data_valid = 0;
        load_fifo_state = 0;                    // dropped while there's still room
        wcheck("edgeB: fifo not full when load_fifo_state dropped", fifo_full === 1'b0);

        preload_state = 1;
        @(posedge clk2); #1;
        wcheck("edgeB: FSM left LOAD_FIFO for PRELOAD once load_fifo_state dropped, even though fifo wasn't full",
               data_valid === 1'b1);
        preload_state = 0;
        repeat (3) @(posedge clk2);

        // -------------------------------------------------------------
        // edge case C: tiles_complete is an alternate IDLE->LOAD_FIFO entry
        // path, independent of start_load_fifo_state.
        // -------------------------------------------------------------
        wl_reset();
        #1;
        wcheck("edgeC: idle before tiles_complete", fifo_empty === 1'b1);
        tiles_complete = 1;
        @(posedge clk2); #1;                    // IDLE -> LOAD_FIFO via tiles_complete alone
        tiles_complete = 0;
        wcheck("edgeC: tiles_complete alone (without start_load_fifo_state) leaves IDLE and writes a row",
               fifo_empty === 1'b0);

        preload_state = 1;                      // load_fifo_state was never raised - falls straight to PRELOAD
        @(posedge clk2); #1;
        wcheck("edgeC: reaches PRELOAD and surfaces the row written on the tiles_complete entry",
               data_valid === 1'b1);
        preload_state = 0;
        repeat (3) @(posedge clk2);

        // -------------------------------------------------------------
        // edge case D: dropping preload_state mid-PRELOAD (fifo still
        // non-empty) returns to IDLE immediately rather than continuing
        // to drain or getting stuck.
        // -------------------------------------------------------------
        wl_reset();
        #1;
        start_load_fifo_state = 1;
        @(posedge clk2); #1;                    // IDLE -> LOAD_FIFO (+ garbage row, count=1)
        start_load_fifo_state = 0;
        load_fifo_state = 1;
        read_data = '0;
        read_data[0][31:0] = 32'hD000_0001;
        read_data_valid = 1;
        @(posedge clk2); #1;                    // real write, count=2
        read_data_valid = 0;
        load_fifo_state = 0;
        preload_state = 1;
        @(posedge clk2); #1;                    // LOAD_FIFO -> PRELOAD, first pulse
        wcheck("edgeD: entered PRELOAD, first pulse valid", data_valid === 1'b1);

        preload_state = 0;                      // drop while fifo still has 1 entry left
        @(posedge clk2); #1;
        wcheck("edgeD: dropping preload_state while fifo non-empty returns to IDLE immediately (data_valid drops)",
               data_valid === 1'b0);
        repeat (2) @(posedge clk2);

        $display("==== weight_loader edge cases done ====\n");

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
