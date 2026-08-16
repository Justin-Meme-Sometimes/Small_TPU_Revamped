module requant(
    input logic clk,
    input logic rst_n,
    input logic signed [3:0][31:0] ins,
    input logic signed [31:0] con,
    input logic valid,
    output logic signed[3:0][7:0] out,
    output logic out_valid
);

logic signed[3:0][31:0] shift_buffer;

//for the signed issue apparently also doing 
//logic signed [31:0] shiftbuffer [3:0]; also works which is wild

genvar i;
generate

    for(i = 0; i < 4; i++) begin
        always_ff @(posedge clk, negedge rst_n) begin
            if(!rst_n) begin
                out[i] <= '0;
            end else begin
                if(valid) begin
                    if($signed(shift_buffer[i]) > 32'sd127) begin
                        out[i] <= 8'd127;
                    end else if($signed(shift_buffer[i]) < -32'sd128) begin
                        out[i] <= -8'd128;
                    end else begin
                        out[i] <= shift_buffer[i];
                    end
                end else begin
                    out[i] <= '0;
                end
            end
        end
        always_comb begin
            shift_buffer[i] = 0;
            if(valid) begin
                shift_buffer[i] = ins[i] >>> con;
            end
        end
    end
endgenerate

always_ff @(posedge clk, negedge rst_n) begin
    if(!rst_n) begin
        out_valid <= 0;
    end else begin
        if(valid) begin
            out_valid <= valid;
        end else begin
            out_valid <= 0;
        end
    end
end

endmodule


