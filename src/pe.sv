module PE(
    input logic clk,
    input logic rst_n,
    input logic preload,
    input logic [3:0] compute_en, //will pipeline this signal in
    input logic drain,
    input logic [7:0] a,  //zero pad_areg whenever not using it to clean it
    input logic [7:0] b,  //only care about this on preload
    input logic clr,
    input logic tile_done,
    input logic [31:0] accum_in,
    input logic accum_in_valid,
    output logic [31:0] down_out, //only care about this during drain and preload
    output logic [7:0] right_out, //care about this during compute really
);

    logic [7:0] a_reg,b_reg;
    logic [15:0] product_reg,
    logic [31:0] accum_reg;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            a_reg <= 0;
            b_reg <= 0;
            product_reg <= 0;
            accum_reg <= 0;
        end else begin
            if(clr || tile_dones) begin
                a_reg <= 0;
                if(tile_done) begin
                    b_reg <= 0;
                end
                product_reg <= 0;
                accum_reg <= 0;
            end
            else if(preload) begin
                b_reg <= b;
                down_out <= b_reg;
            end
            else if(compute_en) begin
                a_reg <= a;
                right_out <= a_reg;
                product_reg <= (a_reg * b_reg) + product_reg;
                accum_reg <= accum_reg + product_reg;
            end
            else if(drain) begin
                if(accum_in_valid) begin
                    accum_reg <= accum_in;
                end else begin
                    down_out <= accum_reg;
                end
            end
        end
    end
endmodule
