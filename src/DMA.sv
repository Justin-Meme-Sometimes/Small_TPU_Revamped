module DMA (
    input logic clk,
    input logic rst_n,
    input logic [7:0] u_in,
    input logic [2:0] bank,
    input logic compute_state,
    input logic preload_state,
    input logic drain_state,
    input logic [3:0][7:0] computed_bank_in,
    input logic computed_bank_in_valid,
    output logic [7:0] u_out,
    output logic [3:0][7:0] weight_bank_out,
    output logic weight_bank_out_valid,
    output logic [31:0][3:0] activation_bank_out,
    output logic activation_bank_out_valid,
    output logic [3:0][31:0] bias_bank_out,
    output logic bias_bank_out_valid);

    logic weight_single, weight_we, weight_re, weight_a_or_b, weight_clr;
    logic [31:0][3:0] weight_we_in, weight_re_out;
    logic weight_we_valid, weight_full, weight_empty, weight_re_valid;



    j_buffer weight_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(weight_single),
        .we(weight_we),
        .re(weight_re),
        .a_or_b(weight_a_or_b),
        .clr(weight_clr),
        .we_in(weight_we_in),
        .we_valid(weight_we_valid),
        .full(weight_full),
        .empty(weight_empty),
        .re_out(weight_re_out),
        .re_valid(weight_re_valid));

    logic act_single, act_we, act_re, act_a_or_b, act_clr;
    logic [31:0][3:0] act_we_in, act_re_out;
    logic act_we_valid, act_full, act_empty, act_re_valid;

    j_buffer act_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(act_single),
        .we(act_we),
        .re(act_re),
        .a_or_b(act_a_or_b),
        .clr(act_clr),
        .we_in(act_we_in),
        .we_valid(act_we_valid),
        .full(act_full),
        .empty(act_empty),
        .re_out(act_re_out),
        .re_valid(act_re_valid));

    logic bias_single, bias_we, bias_re, bias_a_or_b, bias_clr;
    logic [31:0][3:0] bias_we_in, bias_re_out;
    logic bias_we_valid, bias_full, bias_empty, bias_re_valid;

    j_buffer bias_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(bias_single),
        .we(bias_we),
        .re(bias_re),
        .a_or_b(bias_a_or_b),
        .clr(bias_clr),
        .we_in(bias_we_in),
        .we_valid(bias_we_valid),
        .full(bias_full),
        .empty(bias_empty),
        .re_out(bias_re_out),
        .re_valid(bias_re_valid));

    logic result_single, result_we, result_re, result_a_or_b, result_clr;
    logic [31:0][3:0] result_we_in, result_re_out;
    logic result_we_valid, result_full, result_empty, result_re_valid;

    j_buffer result_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(1'd0),
        .we(result_we),
        .re(result_re),
        .a_or_b(result_a_or_b),
        .clr(result_clr),
        .we_in(result_we_in),
        .we_valid(result_we_valid),
        .full(result_full),
        .empty(result_empty),
        .re_out(result_re_out),
        .re_valid(result_re_valid));

endmodule

module j_buffer(
    input logic clk,
    input logic rst_n,    
    input logic single,
    input logic we,
    input logic re,
    input logic a_or_b,
    input logic clr,
    input logic [31:0][3:0] we_in,
    input logic we_valid,
    output logic full,
    output logic empty,
    output logic [31:0][3:0] re_out,
    output logic re_valid);

    logic [15:0][7:0] buff;
    logic [9:0] curr_count;

    assign full = curr_count == 10'd16;
    assign empty = curr_count == 8'd0;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            buff <= '0; // or whatever it is to make everything is 0
            curr_count <= '0;
        end else begin
            if(clr) begin
                curr_count <='0;
                re_valid <= 0;
            end
            else if(we) begin
                if(we_valid && !full) begin
                    buff[curr_count] <= we_in[0];
                    buff[curr_count+1] <= we_in[1];
                    buff[curr_count+2] <= we_in[2];
                    buff[curr_count+3] <= we_in[3];
                    curr_count <= curr_count + 4;
                    re_valid <= 0;
                end
                else if(single) begin
                    buff[curr_count] <= we_in[0]
                    curr_count <= curr_count + 1;
                    re_valid <= 0;
                end
            end
            else if(re) begin //curr_count gets to 255 after filling activation buffer then empties
                if(!empty) begin
                    re_out[0] <= buff[curr_count-4];
                    re_out[1] <= buff[curr_count-3];
                    re_out[2] <= buff[curr_count-2];
                    re_out[3] <= buff[curr_count-1];
                    re_valid <= 1;
                    curr_count <= curr_count - 4;
                end else begin
                    re_valid <= 0;
                end
            end
        end
    end

endmodule


