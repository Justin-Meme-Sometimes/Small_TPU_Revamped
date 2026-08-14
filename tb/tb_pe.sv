`timescale 1ns/1ps
//
// Testbench for src/pe.sv (single systolic PE)
//
// PE is a black box from the port list only: a_reg/b_reg/product_reg/accum_reg
// are internal, so everything below is inferred from down_out/right_out.
//
// Pipeline behaviour (from the RTL):
//   down_out:   continuous assign = preload ? b_reg : (drain ? accum_reg : down_out_drain)
//               (during preload, down_out tracks b_reg's CURRENT value with
//               no extra register delay - this is what gives the weight
//               shift chain 1-cycle-per-row propagation instead of 2; see
//               array.sv/pe.sv history for why that matters. During drain,
//               down_out tracks accum_reg's CURRENT value the same way -
//               this was originally routed through a registered
//               down_out_drain instead, which added a stale, one-cycle-late
//               hop to every row-to-row relay during array.sv's DRAIN
//               phase; see KNOWN_ISSUES.md, "DRAIN's row-to-row relay was
//               propagating stale, one-cycle-behind values".)
//   preload:    b_reg <= b   (down_out reflects this same-cycle, via the assign)
//   compute_en: a_reg <= a;               right_out <= a_reg (OLD value)
//               product_reg <= a_reg(OLD)*b_reg
//               accum_reg   <= accum_reg + product_reg (OLD product_reg)
//   drain:      accum_in_valid ? accum_reg <= accum_in
//                                : down_out_drain <= accum_reg
//               (down_out_drain only matters once drain drops - down_out
//               reads accum_reg directly, combinationally, while drain is
//               still high, regardless of accum_in_valid)
//   clr:        a_reg/product_reg/accum_reg -> 0 (b_reg untouched)
//   tile_done:  same as clr - b_reg is NOT cleared (weight-stationary: the
//               loaded weight stays resident across tiles, only a fresh
//               preload ever changes it)
//
// To check b_reg's held value without disturbing it (no clr/tile_done/drain
// touches it, and down_out only exposes it while preload is high), tests
// below "peek" by raising preload with b left alone and settling with #1
// (no clock edge, so nothing actually gets reloaded) rather than clocking a
// real preload pulse.
//
module tb_pe;

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
    logic preload, compute_en, drain, clr, tile_done, accum_in_valid;
    logic [7:0] a, b;
    logic [31:0] accum_in;
    logic [31:0] down_out;
    logic [7:0] right_out;

    PE dut (
        .clk(clk), .rst_n(rst_n),
        .preload(preload), .compute_en(compute_en), .drain(drain),
        .a(a), .b(b), .clr(clr), .tile_done(tile_done),
        .accum_in(accum_in), .accum_in_valid(accum_in_valid),
        .down_out(down_out), .right_out(right_out)
    );

    task automatic reset_dut();
        rst_n = 0;
        preload = 0; compute_en = 0; drain = 0; clr = 0; tile_done = 0;
        a = 0; b = 0; accum_in = 0; accum_in_valid = 0;
        @(posedge clk); @(posedge clk);
        rst_n = 1;
        @(posedge clk);
    endtask

    // Drives one clock's worth of stimulus, then samples outputs shortly
    // after the edge (small delay lets non-blocking assigns settle).
    task automatic step();
        @(posedge clk);
        #1;
    endtask

    initial begin
        reset_dut();

        // -----------------------------------------------------------
        // 1) Preload chain: down_out tracks b_reg immediately (same cycle),
        //    no delay - confirmed empirically (see conversation history /
        //    direct probe), this is the fix for the weight shift chain's
        //    1-cycle-per-row propagation.
        // -----------------------------------------------------------
        $display("==== preload chain ====");
        preload = 1;
        b = 8'h11; step();
        check("preload#1: down_out reflects current b (0x11) with no delay", down_out == 32'h11);

        b = 8'h22; step();
        check("preload#2: down_out reflects current b (0x22)", down_out == 32'h22);

        b = 8'h33; step();
        check("preload#3: down_out reflects current b (0x33)", down_out == 32'h33);

        preload = 0;
        step();
        check("after preload stops: down_out reverts to down_out_drain (0, drain never ran)",
              down_out == 32'h0);

        // b_reg is now 0x33 (set by the last preload pulse above)

        // -----------------------------------------------------------
        // 2) clr vs tile_done: neither touches b_reg (weight-stationary -
        //    only a fresh preload ever changes the loaded weight). Peek
        //    b_reg by raising preload with b left alone and settling with
        //    #1 (no clock edge), so nothing actually gets reloaded.
        // -----------------------------------------------------------
        $display("==== clr / tile_done semantics ====");
        clr = 1; step(); clr = 0; #1;
        preload = 1; #1;
        check("clr alone leaves b_reg untouched (still 0x33)", down_out == 32'h33);
        preload = 0; #1;

        tile_done = 1; step(); tile_done = 0; #1;
        preload = 1; #1;
        check("tile_done alone leaves b_reg untouched (still 0x33, weight-stationary)",
              down_out == 32'h33);
        preload = 0; #1;

        // -----------------------------------------------------------
        // 3) compute + drain: b_reg = 2, feed a = 1,2,3,4
        //    hand-derived expected right_out sequence: 0,1,2,3
        //    hand-derived expected accum after 4 cycles: 6
        //    (product_reg: 0,2,4,6 ; accum_reg: 0,0,2,6)
        //    Note: accum_reg is a 2-stage-pipelined running sum, so the 4th
        //    term (a_reg=3 -> product=6) is sitting in product_reg but
        //    hasn't been folded into accum_reg yet by the time drain starts
        //    here - it would show up on a 5th compute_en cycle instead.
        // -----------------------------------------------------------
        $display("==== compute + drain MAC pipeline ====");
        reset_dut();
        preload = 1; b = 8'd2; step(); preload = 0;
        // b_reg is now 2 (down_out reverted to down_out_drain=0 once preload dropped)

        compute_en = 1;
        a = 8'd1; step();
        check("compute cyc0: right_out == 0 (a_reg was reset)", right_out == 8'd0);

        a = 8'd2; step();
        check("compute cyc1: right_out == 1", right_out == 8'd1);

        a = 8'd3; step();
        check("compute cyc2: right_out == 2", right_out == 8'd2);

        a = 8'd4; step();
        check("compute cyc3: right_out == 3", right_out == 8'd3);

        compute_en = 0;
        drain = 1; accum_in_valid = 0;
        step();
        check("drain: accum_reg (=6) surfaces on down_out", down_out == 32'd6);
        drain = 0;

        // -----------------------------------------------------------
        // 4) drain with accum_in_valid: external partial sum is ADDED into
        //    accum_reg (accum_reg <= accum_in + accum_reg, not a replace -
        //    this is what makes array.sv's DRAIN relay a real cross-row
        //    reduction, summing each row's own contribution into the one
        //    below instead of just overwriting it), and down_out reflects
        //    the new total immediately (same cycle) - down_out reads
        //    accum_reg combinationally while drain is high, not through a
        //    registered hop, so there's no one-cycle lag between accum_reg
        //    changing and down_out reflecting it.
        // -----------------------------------------------------------
        $display("==== drain accum_in load ====");
        drain = 1; accum_in_valid = 1; accum_in = 32'd100;
        step();
        check("drain+accum_in_valid: down_out reflects accum_in+accum_reg (100+6=106) immediately",
              down_out == 32'd106);

        accum_in_valid = 0;
        step();
        check("next plain drain cycle: down_out still reflects accum_reg (106, unchanged)",
              down_out == 32'd106);
        drain = 0;

        $display("==== SUMMARY ====");
        $display("PE: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
