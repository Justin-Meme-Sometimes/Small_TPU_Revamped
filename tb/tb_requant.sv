`timescale 1ns/1ps
//
// Testbench for src/requant.sv
//
// requant has a 2-cycle latency: on an active edge (valid && (drain_state ||
// accum_state)), shift_buffer[i] is loaded with ins[i] >>> con, and out[i] is
// loaded with the saturated value of whatever shift_buffer[i] held BEFORE
// that edge. So a change to ins/con needs two active edges to be fully
// reflected in out: one to land in shift_buffer, one more to land in out.
// Deasserting valid clears out and shift_buffer immediately (no extra
// latency), since that path bypasses the saturation logic entirely.
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
    logic signed [3:0][7:0] out;

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

    task automatic display_out();
        $display("out[0]=%0d out[1]=%0d out[2]=%0d out[3]=%0d",
                  $signed(out[0]), $signed(out[1]), $signed(out[2]), $signed(out[3]));
    endtask

    initial begin
        reset_dut();
        $display("==== requant ====");
        check("reset: out all zero", out == '0);
        check("reset: out_valid low", out_valid == 1'b0);

        // Basic per-lane conversion: positive, large positive (no sat),
        // negative (no sat, exercises arithmetic-shift sign extension), zero.
        valid <= 1; drain_state <= 1; con <= 1;
        ins[0] = 32'sd5; ins[1] = 32'sd200; ins[2] = -32'sd5; ins[3] = 32'sd0;
        step();
        step();
        display_out();
        check("basic conversion: out == {5>>>1, 200>>>1, -5>>>1, 0>>>1}",
              $signed(out[0]) == 8'sd2 && $signed(out[1]) == 8'sd100 &&
              $signed(out[2]) == -8'sd3 && $signed(out[3]) == 8'sd0);
        check("out_valid asserted", out_valid == 1'b1);

        // Same inputs held for another cycle: output should stay put, not
        // drift or latch onto some other stale value.
        step();
        display_out();
        check("steady state: out unchanged while ins/con held",
              $signed(out[0]) == 8'sd2 && $signed(out[1]) == 8'sd100 &&
              $signed(out[2]) == -8'sd3 && $signed(out[3]) == 8'sd0);

        // Change con and ins[0]; needs two active edges to fully propagate.
        con = 2;
        ins[0] = 32'sd400; // -> 100 after >>>2
        step();
        step();
        display_out();
        check("updated inputs propagate after 2 cycles",
              $signed(out[0]) == 8'sd100 && $signed(out[1]) == 8'sd50 &&
              $signed(out[2]) == -8'sd2 && $signed(out[3]) == 8'sd0);

        // Saturation boundaries: 127 and -128 must pass through unsaturated;
        // 128 and -129 must clamp to 127 / -128 respectively.
        con = 0;
        ins[0] = 32'sd127;
        ins[1] = 32'sd128;
        ins[2] = -32'sd128;
        ins[3] = -32'sd129;
        step();
        step();
        display_out();
        check("boundary: 127 passes through unsaturated", $signed(out[0]) == 8'sd127);
        check("boundary: 128 saturates to 127", $signed(out[1]) == 8'sd127);
        check("boundary: -128 passes through unsaturated", $signed(out[2]) == -8'sd128);
        check("boundary: -129 saturates to -128", $signed(out[3]) == -8'sd128);

        // valid deasserted clears shift_buffer[i]/out[i] on the same edge.
        valid <= 0;
        step();
        check("valid=0: out_valid drops", out_valid == 1'b0);
        check("valid=0: out is cleared to zero", out == '0);
        display_out();

        $display("==== SUMMARY ====");
        $display("requant: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
