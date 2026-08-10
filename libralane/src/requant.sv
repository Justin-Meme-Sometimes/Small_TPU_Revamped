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
                    if(shift_buffer[i] > 32'sd127) begin
                        out[i] <= 8'd127;
                    end else if(shift_buffer[i] < -32'sd128) begin
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
            out_valid <= valid;
        end else begin
            out_valid <= 0;
        end
    end
end

endmodule


