(* keep_hierarchy *)
module bias_add(
    input logic clk,
    input logic rst_n,
    input logic preload_state,
    input logic product_in_valid,
    input logic [3:0][31:0] bias_in,
    input logic [3:0][31:0] product_in,
    output logic [3:0][31:0] product_out,
    output logic out_valid
);

    logic [3:0][31:0] bias_reg;

    genvar i;
    generate
        for(i = 0; i < 4; i++) begin
            always_ff @(posedge clk, negedge rst_n) begin
                if(!rst_n) begin
                    bias_reg[i] <= '0;
                    product_out[i] <= '0;
                end else begin
                    if(preload_state) begin
                        bias_reg[i] <= bias_in[i];
                    end
                    if(product_in_valid) begin
                        product_out[i] <= bias_reg[i] + product_in[i];
                    end
                end
            end
        end
    endgenerate

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            out_valid <= 0;
        end else begin
            if(product_in_valid) begin
                out_valid <= 1;
            end else begin
                out_valid <= 0;
            end
        end
    end


endmodule