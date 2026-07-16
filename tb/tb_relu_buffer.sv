`timescale 1ns/1ps
//
// Testbench for src/relu_buffer.sv
//
// NOTE: ins/out are declared "[31:0][3:0]" (32 elements x 4 bits), but the
// generate loop only drives/reads indices 0..3, each of which is a 4-bit
// signed lane (range -8..7), not the 32-bit accumulator width you'd expect
// feeding from PE.down_out. out[4..31] are never assigned anywhere (not even
// on reset) - permanently stuck at 0. This looks like a dimension-order
// bug (probably meant "[3:0][31:0]", matching requant.sv's ins), flagged
// here rather than fixed.
//
module tb_relu_buffer;

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

    logic rst_n, drain_state, accum_state, valid, out_valid;
    logic signed [31:0][3:0] ins;
    logic [31:0][3:0] out;

    relu_buffer dut (
        .clk(clk), .rst_n(rst_n),
        .drain_state(drain_state), .accum_state(accum_state),
        .ins(ins), .valid(valid),
        .out_valid(out_valid), .out(out)
    );

    task automatic reset_dut();
        rst_n = 0; drain_state = 0; accum_state = 0; valid = 0; ins = '0;
        @(posedge clk); @(posedge clk);
        rst_n = 1;
        @(posedge clk); #1;
    endtask

    task automatic step();
        @(posedge clk); #1;
    endtask

    initial begin
        reset_dut();
        $display("==== relu_buffer ====");
        check("reset: out[3:0] all zero", out[3:0] == 16'h0);
        check("reset: out_valid low", out_valid == 1'b0);

        // drain_state path: mix of positive/negative/zero 4-bit signed lanes
        drain_state = 1; valid = 1;
        ins[0] = 4'sd5;  // positive -> passes through
        ins[1] = -4'sd3; // negative -> relu'd to 0
        ins[2] = 4'sd0;  // zero -> passes through (0)
        ins[3] = -4'sd1; // negative -> relu'd to 0
        step();
        check("drain: out[0]=5 (positive passes through)", out[0] == 4'sd5);
        check("drain: out[1]=0 (negative relu'd)", out[1] == 4'sd0);
        check("drain: out[2]=0 (zero passes through)", out[2] == 4'sd0);
        check("drain: out[3]=0 (negative relu'd)", out[3] == 4'sd0);
        check("drain: out_valid asserted", out_valid == 1'b1);

        // accum_state path (other half of the OR condition), extremes
        drain_state = 0; accum_state = 1;
        ins[0] = -4'sd8; // most negative 4-bit signed -> relu'd to 0
        ins[1] = 4'sd7;  // most positive 4-bit signed -> passes through
        ins[2] = 4'sd2;
        ins[3] = -4'sd2;
        step();
        check("accum: out[0]=0 (min negative relu'd)", out[0] == 4'sd0);
        check("accum: out[1]=7 (max positive passes through)", out[1] == 4'sd7);
        check("accum: out[2]=2", out[2] == 4'sd2);
        check("accum: out[3]=0 (negative relu'd)", out[3] == 4'sd0);
        check("accum: out_valid asserted", out_valid == 1'b1);

        // valid deasserted forces out to 0 even with drain_state/accum_state high
        accum_state = 0; drain_state = 1; valid = 0;
        ins[0] = 4'sd6; ins[1] = 4'sd6; ins[2] = 4'sd6; ins[3] = 4'sd6;
        step();
        check("valid=0: out forced to 0 despite drain_state", out[3:0] == 16'h0);
        check("valid=0: out_valid low", out_valid == 1'b0);

        // neither drain_state nor accum_state: out forced to 0 even if valid
        drain_state = 0; accum_state = 0; valid = 1;
        ins[0] = 4'sd6;
        step();
        check("neither state active: out forced to 0", out[3:0] == 16'h0);
        check("neither state active: out_valid low", out_valid == 1'b0);

        // out[4..31] are never driven anywhere in the RTL - documents the
        // dimension-order issue noted above rather than a design intent.
        check("out[4..31] permanently 0 (never assigned by the RTL)",
              out[31:4] == 28'h0);

        $display("==== SUMMARY ====");
        $display("relu_buffer: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
