`timescale 1ns/1ps
//
// Testbench for src/requant.sv
//
// SIGNIFICANT BUG (confirmed by direct simulation, not just static reading):
// the saturation check compares the WHOLE "shift_buffer" packed array
// (32 elements x 4 bits, itself misdeclared - should almost certainly be
// [3:0][31:0] to match "ins" and hold a real 32-bit shifted value per lane,
// not 4 bits) against 32'd127 / -32'd128, instead of comparing shift_buffer[i]
// per lane. Because shift_buffer is unsigned, "-32'd128" gets reinterpreted
// as a huge unsigned number, so the very first active cycle saturates every
// lane to -128, and from the second active cycle onward the whole-vector
// comparison latches such that every lane is permanently stuck at 127
// regardless of ins/con. This makes requant non-functional as a
// requantizer in its current form. This testbench documents the actual
// (broken) behavior rather than a hoped-for correct one - flag to the team,
// do not rely on these check names as a spec.
//
module tb_requant;

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

    logic rst_n, valid, drain_state, accum_state, out_valid;
    logic signed [3:0][31:0] ins;
    logic [31:0] con;
    logic [3:0][7:0] out;

    requant dut (
        .clk(clk), .rst_n(rst_n), .ins(ins), .con(con), .valid(valid),
        .drain_state(drain_state), .accum_state(accum_state),
        .out(out), .out_valid(out_valid)
    );

    task automatic reset_dut();
        rst_n = 0; valid = 0; drain_state = 0; accum_state = 0; ins = '0; con = '0;
        @(posedge clk); @(posedge clk);
        rst_n = 1;
        @(posedge clk); #1;
    endtask

    task automatic step();
        @(posedge clk); #1;
    endtask

    initial begin
        reset_dut();
        $display("==== requant ====");
        check("reset: out all zero", out == 32'h0);
        check("reset: out_valid low", out_valid == 1'b0);

        valid = 1; drain_state = 1; con = 0;
        ins[0] = 32'sd5; ins[1] = 32'sd200; ins[2] = -32'sd5; ins[3] = 32'sd0;
        step();
        check({"BUG: first active cycle should NOT saturate every lane to -128 ",
               "(unsigned huge-number comparison, not per-lane)"},
              !($signed(out[0]) == -8'sd128 && $signed(out[1]) == -8'sd128 &&
                $signed(out[2]) == -8'sd128 && $signed(out[3]) == -8'sd128));
        check("out_valid asserted", out_valid == 1'b1);

        step();
        check("BUG: second active cycle should NOT have every lane stuck at 127",
              !(out[0] == 8'd127 && out[1] == 8'd127 && out[2] == 8'd127 && out[3] == 8'd127));

        // Change con and ins entirely; the whole-vector comparison keeps
        // every lane pinned at 127 regardless of actual data.
        con = 2;
        ins[0] = 32'sd400; // would be 100 after >>2 if requant worked per-lane
        step();
        check("BUG: changing con/ins should have an effect, not stay stuck at 127",
              !(out[0] == 8'd127 && out[1] == 8'd127 && out[2] == 8'd127 && out[3] == 8'd127));

        // valid deasserted forces shift_buffer[i]<=0 per lane AND clears out
        // (the else branch explicitly zeroes out[i], unlike the header
        // comment used to claim).
        valid <= 0;
        step();
        check("valid=0: out_valid drops", out_valid == 1'b0);
        check("valid=0: out is cleared to zero",
              out[0] == 8'd0 && out[1] == 8'd0 && out[2] == 8'd0 && out[3] == 8'd0);

        $display("out[0] = %0d", out[0]);
        $display("out[1] = %0d", out[1]);
        $display("out[2] = %0d", out[2]);
        $display("out[3] = %0d", out[3]);

        $display("==== SUMMARY ====");
        $display("requant: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
