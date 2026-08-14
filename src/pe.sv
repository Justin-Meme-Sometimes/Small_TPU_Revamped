module PE(
    input logic clk,
    input logic rst_n,
    input logic preload,
    input logic compute_en, //will pipeline this signal in
    input logic signed [7:0] a,  //zero pad_areg whenever not using it to clean it
    input logic signed [7:0] b,  //only care about this on preload
    input logic clr,
    input logic tile_done,
    input logic a_valid,
    input logic signed [31:0] accum_in,
    input logic accum_in_valid,
    output logic signed [31:0] down_out, //only care about this during drain and preload
    output logic accum_out_valid,
    output logic signed [7:0] right_out, //care about this during compute really
    output logic right_out_valid
);

    logic signed [7:0] a_reg,b_reg;
    logic signed [15:0] product;
    logic signed [31:0] accum_reg;
    logic a_reg_valid;

    assign down_out = preload ? b_reg : accum_reg;
    assign product = a_reg * b_reg;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            a_reg <= 0;
            b_reg <= 0;
            accum_reg <= 0;
            a_reg_valid <= 0;
            right_out_valid <= 0;
            accum_out_valid <= 0;
        end else begin
            if(clr || tile_done) begin
                a_reg <= 0;
                accum_reg <= 0;
                accum_out_valid <= 0;
                right_out_valid <= 0;
                a_reg_valid <= 0;
            end
            else if(preload) begin
                b_reg <= b;
            end
            else if(compute_en) begin
                a_reg <= a;
                a_reg_valid <= a_valid;
                right_out <= a_reg;
                right_out_valid <= a_reg_valid;
                accum_out_valid <=  a_reg_valid & accum_in_valid;
                accum_reg <= accum_in + product;
            end
        end
    end
endmodule
