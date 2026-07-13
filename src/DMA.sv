module DMA (
    input logic clk,
    input logic rst_n,
    input logic [2:0] bank,
    input logic compute_state,
    input logic preload_state,
    input logic drain_state,
    input logic [7:0][3:0] computed_bank_in,
    input logic computed_bank_in_valid,
    output logic [7:0][3:0] weight_bank_out,
    output logic weight_bank_out_valid,
    output logic [7:0][3:0] activation_bank_out,
    output logic activation_bank_out_valid);


    logic computed_we, computed_re, computed_clr, computed_re_valid, computed_we_valid, computed_empty, computed_full;
    logic [31:0][3:0] computed_we_in, computed_re_out;
    
    logic act_we, act_re, act_clr, act_valid, act_valid, act_empty, act_full;
    logic [31:0][3:0] act_we_in, act_re_out;

    logic w_we, w_re, w_clr, w_re_valid, w_we_valid, w_empty, w_full;
    logic [31:0][3:0] w_we_in, we_re_out;

    C_buffer computed_buffer (.clk(clk), .rst_n(rst_n), .re(computed_re), .we(computed_we), .clr(computed_clr), .we_in(computed_we_in), .we_valid(computed_we_valid), .full(computed_full), .empty(computed_empty), .re_out(computed_re_out), .re_valid(computed_re_valid));
    C_buffer activation_buffer (.clk(clk), .rst_n(rst_n), .re(act_re), .we(act_we), .clr(act_clr), .we_in(act_we_in), .we_valid(act_we_valid), .full(act_full), .empty(act_empty), .re_out(act_re_out), .re_valid(act_re_valid));
    C_buffer weight_buffer (.clk(clk), .rst_n(rst_n), .re(w_re), .we(w_we), .clr(w_clr), .we_in(w_we_in), .we_valid(w_we_valid), .full(w_full), .empty(w_empty), .re_out(w_re_out), .re_valid(w_re_valid));

endmodule




module C_buffer(
    input logic clk,
    input logic rst_n,    
    input logic we,
    input logic re,
    input logic clr,
    input logic [31:0][3:0] we_in,
    input logic we_valid,
    output logic full,
    output logic empty,
    output logic [31:0][3:0] re_out,
    output logic re_valid);

    logic [512:0][7:0] buff;
    logic [7:0] curr_count;

    assign full = curr_count == 8'd512;
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
            end
            else if(re) begin //curr_count gets to 255 after filling activation buffer then empties
                if(!empty) begin
                    re_out[0] <= buff[curr_count];
                    re_out[1] <= buff[curr_count-1];
                    re_out[2] <= buff[curr_count-2];
                    re_out[3] <= buff[curr_count-3];
                    re_valid <= 1;
                    curr_count <= curr_count - 4;
                end else begin
                    re_valid <= 0;
                end
            end
        end


endmodule