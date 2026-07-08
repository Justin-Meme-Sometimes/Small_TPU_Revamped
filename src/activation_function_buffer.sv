module act_func_buffer(
    input logic clk,
    input logic rst_n,
    input logic drain_state,
    input logic accum_state,
    input logic signed [31:0][3:0] ins,
    input logic valid,
    output logic out_valid,
    output logic [31:0][3:0] out
);

    genvar i;
    generate 
        for(i = 0; i < 4; i++) begin
            always_ff @(posedge clk, negedge rst_n) begin
                if(!rst_n) begin
                    out[i] <= '0;
                end else begin
                    if(valid && (drain_state || accum_state)) begin
                        out[i] <= (ins[i] < 0 ? 0 : ins[i]);
                    end else begin
                        out[i] <= 0;
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
