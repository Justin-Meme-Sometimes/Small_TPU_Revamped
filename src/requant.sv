module requant(
    input logic clk,
    input logic rst_n,
    input logic signed [3:0][31:0] ins,
    input logic signed [31:0] con,
    input logic valid,
    input logic drain_state,
    input logic accum_state,
    output logic signed[3:0][7:0] out,
    output logic out_valid
);

logic signed[31:0][3:0] shift_buffer;

genvar i;
generate 
    for(i = 0; i < 4; i++) begin
        always_ff @(posedge clk, negedge rst_n) begin
            if(!rst_n) begin
                out[i] <= '0;
                shift_buffer[i] <= '0;
            end else begin
                if(valid && (drain_state || accum_state)) begin
                    shift_buffer[i] <= ins[i] >> con;
                    if(shift_buffer[i] > 32'd127) begin
                        out[i] <= 8'd127;
                    end else if(shift_buffer[i] < -32'd128) begin
                        out[i] <= -8'd128;
                    end else begin
                        out[i] <= shift_buffer[i];
                    end
                end else begin
                    out[i] <= '0;
                    shift_buffer[i] <= '0;
                end
            end
        end
    end
endgenerate

always_ff @(posedge clk, negedge rst_n) begin
    if(!rst_n) begin
        out_valid <= 0;
    end else begin
        if(valid && (drain_state || accum_state)) begin
            out_valid <= 1;
        end else begin
            out_valid <= 0;
        end
    end
end

endmodule


// Line 94's check now passes.

// One more thing worth flagging: there's still a real, currently-failing check at line 68-71 — out is stuck at -128 on every active cycle regardless of ins/con (confirmed by direct sim), not the 127-stuck behavior the old header comment describes. That comment block (lines 5-17) documents a bug narrative that no longer matches src/requant.sv — the code now compares shift_buffer[i] per-lane, not the whole vector, but a different bug (stuck at -128, likely from the 4-bit-truncated shift_buffer combined with reading its pre-update value in the same edge) still saturates every lane. Want me to update that header comment and the remaining check names to reflect this current behavior too, or leave it as-is since it wasn't what you asked about?

