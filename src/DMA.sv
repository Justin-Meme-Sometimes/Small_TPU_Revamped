module DMA (
    input logic clk,
    input logic rst_n,
    input logic [7:0] u_in,
    input logic prefill_state,
    input logic [3:0][7:0] computed_bank_in,
    input logic computed_bank_in_valid,
    output logic [7:0] u_out,
    output logic [3:0][7:0] weight_bank_out,
    output logic weight_bank_out_valid,
    output logic [31:0][3:0] activation_bank_out,
    output logic activation_bank_out_valid,
    output logic [3:0][31:0] bias_bank_out,
    output logic bias_bank_out_valid);


    always_comb begin
        if(bank == 4'd1) begin
            weight_we_in[0] = u_in;
        end else if(bank == 4'd2) begin
            bias_we_in[0] = u_in;
        end else if(bank == 4'd3) begin
            act_we_in[0] =  u_in;
        end
    end

    logic [3:0] bank;
    logic weight_single, weight_we, weight_re, weight_a_or_b, weight_clr;
    logic [31:0][3:0] weight_we_in, weight_re_out;
    logic weight_we_valid, weight_full, weight_empty, weight_re_valid;
    logic [15:0] weight_full_count;

    assign weight_full_count = 16'd256;

    j_buffer weight_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(weight_single),
        .we(weight_we),
        .re(weight_re),
        .clr(weight_clr),
        .we_in(weight_we_in),
        .we_valid(weight_we_valid),
        .full(weight_full),
        .empty(weight_empty),
        .re_out(weight_re_out),
        .full_count(weight_full_count),
        .re_valid(weight_re_valid));

    logic act_single, act_we, act_re, act_a_or_b, act_clr;
    logic [31:0][3:0] act_we_in, act_re_out;
    logic act_we_valid, act_full, act_empty, act_re_valid;
    logic [15:0] act_full_count;

    assign act_full_count = 16'd256;

    j_buffer act_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(act_single),
        .we(act_we),
        .re(act_re),
        .clr(act_clr),
        .we_in(act_we_in),
        .we_valid(act_we_valid),
        .full(act_full),
        .empty(act_empty),
        .re_out(act_re_out),
        .full_count(act_full_count),
        .re_valid(act_re_valid));

    logic bias_single, bias_we, bias_re, bias_a_or_b, bias_clr;
    logic [31:0][3:0] bias_we_in, bias_re_out;
    logic bias_we_valid, bias_full, bias_empty, bias_re_valid;
    logic [15:0] bias_full_count;

    assign bias_full_count = 16'd256;

    j_buffer bias_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(bias_single),
        .we(bias_we),
        .re(bias_re),
        .clr(bias_clr),
        .we_in(bias_we_in),
        .we_valid(bias_we_valid),
        .full(bias_full),
        .empty(bias_empty),
        .re_out(bias_re_out),
        .full_count(bias_full_count)
        .re_valid(bias_re_valid));

    logic result_single, result_we, result_re, result_a_or_b, result_clr;
    logic [31:0][3:0] result_we_in, result_re_out;
    logic result_we_valid, result_full, result_empty, result_re_valid;
    logic [15:0] result_full_count;

    assign result_full_count = 16'd256;

    j_buffer result_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(1'd0),
        .we(result_we),
        .re(result_re),
        .clr(result_clr),
        .we_in(result_we_in),
        .we_valid(result_we_valid),
        .full(result_full),
        .empty(result_empty),
        .re_out(result_re_out),
        .full_count(result_full_count),
        .re_valid(result_re_valid));

endmodule

module j_buffer(
    input logic clk,
    input logic rst_n,    
    input logic single,
    input logic we,
    input logic re,
    input logic clr,
    input logic [31:0][3:0] we_in,
    input logic [15:0] full_count,
    input logic we_valid,
    output logic full,
    output logic empty,
    output logic [31:0][3:0] re_out,
    output logic re_valid);

    logic [15:0][7:0] buff;
    logic [9:0] curr_count;

    assign full = curr_count == full_count;
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
                if(single && !full && we_valid) begin
                    buff[curr_count] <= we_in[0]
                    curr_count <= curr_count + 1;
                    re_valid <= 0;
                end else if(we_valid && !full) begin
                    buff[curr_count] <= we_in[0];
                    buff[curr_count+1] <= we_in[1];
                    buff[curr_count+2] <= we_in[2];
                    buff[curr_count+3] <= we_in[3];
                    curr_count <= curr_count + 4;
                    re_valid <= 0;
                end

            end else if(re) begin //curr_count gets to 255 after filling activation buffer then empties
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

module DMA_FSM(
    input logic clk,
    input logic rst_n,
    input logic start,   
    input logic full_weights,
    input logic full_bias,
    input logic full_activations,
    output logic [3:0] bank,
    output logic we_weights,
    output logic we_bias,
    output logic we_activations);

    typedef enum logic [5:0] {IDLE, LOAD_WEIGHTS, LOAD_BIAS, LOAD_ACTIVATIONS, DONE} state_t;
    state_t current_state, next_state;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= 0;
        end else begin
            current_state <=  next_state;
        end
    end
    
    always_comb begin
        next_state = current_state;
        bank = 4'd0;
        we_weights = 1'd0;
        we_bias = 1'd0;
        we_activations = 1'd0;
        case(current_state)
            IDLE: begin
                else if(start) begin
                    next_state = LOAD_WEIGHTS
                    we_weights = 1'd1;
                end else begin
                    next_state = IDLE;
                end
            end 
            LOAD_WEIGHTS: begin
                if(!full_weights) begin
                    next_state = LOAD_WEIGHTS;
                    bank = 4'd1;
                    we_weights = 1'd1;
                end else begin
                    next_state = LOAD_BIAS;
                end
            end
            LOAD_BIAS: begin
                if(!full_bias) begin
                    next_state = LOAD_BIAS;
                    bank = 4'd2;
                    we_bias = 1'd1;
                end else begin
                    next_state = LOAD_ACTIVATIONS;
                end
            end
            LOAD_ACTIVATIONS: begin
                if(!full_activations) begin
                    next_state = LOAD_ACTIVATIONS;
                    bank = 4'd3;
                    we_activations = 1'd1;
                end else begin
                    next_state = LOAD_DONE;
                end
            end
            DONE: begin
                clr = 1; //clear banks
                next_state = IDLE;
            end
        endcase
    end



endmodule


