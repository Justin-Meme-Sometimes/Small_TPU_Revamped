module DMA (
    input logic clk,
    input logic rst_n,
    input logic [7:0] u_in,
    input logic bias_fsm_start,
    input logic activation_fsm_start,
    input logic weight_fsm_start,
    input logic tile_done,
    input logic [3:0][7:0] computed_bank_in,
    input logic computed_bank_in_valid,
    input logic start_read_fsm,
    input logic [3:0] bank,
    input logic result_we,
    output logic [7:0] u_out,
    output logic [3:0][7:0] weight_bank_out,
    output logic weight_bank_out_valid,
    output logic [31:0][3:0] activation_bank_out,
    output logic activation_bank_out_valid,
    output logic [3:0][31:0] bias_bank_out,
    output logic bias_bank_out_valid);


    logic activations_busy, weights_busy, bias_busy;
    logic any_busy;

    assign any_busy = activations_busy | weights_busy | bias_busy;

    always_comb begin
        weight_we_in[0] = 8'd0;
        bias_we_in[0] = 8'd0;
        act_we_in[0] = 8'd0;
        if(!any_busy) begin
            if(bank == 4'd1) begin
                weight_we_in[0] = u_in;
            end else if(bank == 4'd2) begin
                bias_we_in[0] = u_in;
            end else if(bank == 4'd3) begin
                act_we_in[0] =  u_in;
            end
        end
    end

    
    logic weight_single, weight_we, weight_re, weight_a_or_b, weight_clr;
    logic [3:0][7:0] weight_we_in;
    logic weight_we_valid, weight_full, weight_empty;
    logic [15:0] weight_full_count;
   


    assign weight_full_count = 16'd256;
    assign weight_we_valid = weight_we;
    assign weight_re = !weight_we && !weight_empty; //stream weights out as soon as they're not being loaded

    j_buffer #(.DEPTH(256)) weight_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(1'd1),
        .we(weight_we),
        .re(weight_re),
        .clr(weight_clr),
        .we_in(weight_we_in),
        .we_valid(weight_we_valid),
        .full(weight_full),
        .empty(weight_empty),
        .re_out(weight_bank_out),
        .full_count(weight_full_count),
        .re_valid(weight_bank_out_valid));

    logic act_single, act_we, act_a_or_b, act_clr;
    logic [3:0][7:0] act_we_in;
    logic act_we_valid, act_full, act_empty, act_full_prev;
    logic [15:0] act_full_count;

    assign act_full_count = 16'd16;
    assign act_we_valid = act_we;
    assign activation_bank_out_valid = act_full && !act_full_prev; //pulse once when the tile finishes loading

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            act_full_prev <= 1'd0;
        end else begin
            act_full_prev <= act_full;
        end
    end

    j_buffer act_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(1'd1),
        .we(act_we),
        .re(1'd0),
        .clr(act_clr),
        .we_in(act_we_in),
        .we_valid(act_we_valid),
        .full(act_full),
        .empty(act_empty),
        .buff_out(activation_bank_out),
        .full_count(act_full_count));

    logic bias_single, bias_we, bias_a_or_b, bias_clr;
    logic [3:0][7:0] bias_we_in;
    logic bias_we_valid, bias_full, bias_empty, bias_full_prev;
    logic [15:0] bias_full_count;

    assign bias_full_count = 16'd16;
    assign bias_we_valid = bias_we;
    assign bias_bank_out_valid = bias_full && !bias_full_prev; //pulse once when the tile finishes loading

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            bias_full_prev <= 1'd0;
        end else begin
            bias_full_prev <= bias_full;
        end
    end

    j_buffer bias_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(1'd1),
        .we(bias_we),
        .re(1'd0),
        .clr(bias_clr),
        .we_in(bias_we_in),
        .we_valid(bias_we_valid),
        .full(bias_full),
        .empty(bias_empty),
        .buff_out(bias_bank_out),
        .full_count(bias_full_count));

    LOAD_WEIGHTS_FSM w_fsm (
        .clk(clk),
        .rst_n(rst_n),
        .any_busy(any_busy),
        .start(weight_fsm_start),
        .full_weights(weight_full),
        .we_weights(weight_we),
        .clr(weight_clr));

    LOAD_BIAS_FSM b_fsm (
        .clk(clk),
        .rst_n(rst_n),
        .start(bias_fsm_start),
        .full_bias(bias_full),
        .we_bias(bias_we),
        .clr(bias_clr));

    LOAD_ACTIVATIONS_FSM a_fsm (
        .clk(clk),
        .rst_n(rst_n),
        .start(activation_fsm_start),
        .full_activations(act_full),
        .we_activations(act_we),
        .clr(act_clr));

    logic result_single, result_re, result_a_or_b, result_clr;
    logic [3:0][7:0] result_we_in, result_re_out;
    logic result_we_valid, result_full, result_empty, result_re_valid;
    logic [15:0] result_full_count;
    logic [8:0] read_count;
    logic computed_in_max;

    assign result_full_count = 16'd256;
    assign result_we_valid = computed_bank_in_valid;
    assign computed_in_max = read_count == (result_full_count >> 2); //4 bytes drained per result_re pulse

    j_buffer #(.DEPTH(256)) result_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single(1'd0),
        .we(result_we),
        .re(result_re),
        .clr(result_clr),
        .we_in(computed_bank_in),
        .we_valid(result_we_valid),
        .full(result_full),
        .empty(result_empty),
        .re_out(result_re_out),
        .full_count(result_full_count),
        .re_valid(result_re_valid));


    counter c_1 (
        .clk(clk),
        .rst_n(rst_n),
        .en(en_counter),
        .clr(clr_counter),
        .out(read_count)
    );
    
    DMA_READ_FSM r_fsm (
            .clk(clk),
            .rst_n(rst_n),
            .start(start_read_fsm),
            .computed_in_max(computed_in_max),
            .result_clr(result_clr),
            .clr_counter(clr_counter),
            .result_re(result_re),
            .en_counter(en_counter));

endmodule

module j_buffer #(
    parameter DEPTH = 16)
    (
    input logic clk,
    input logic rst_n,
    input logic single,
    input logic we,
    input logic re,
    input logic clr,
    input logic [3:0][7:0] we_in,
    input logic [15:0] full_count,
    input logic we_valid,
    output logic full,
    output logic empty,
    output logic [3:0][7:0] re_out,
    output logic re_valid,
    output logic [15:0][7:0] buff_out);

    logic [DEPTH-1:0][7:0] buff;
    logic [9:0] wr_ptr, rd_ptr; //separate pointers so multi-group reads play back in FIFO (write) order instead of draining from the top down

    assign full = wr_ptr == full_count;
    assign empty = rd_ptr == wr_ptr;
    assign buff_out = buff[15:0];

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            buff <= '0; // or whatever it is to make everything is 0
            wr_ptr <= '0;
            rd_ptr <= '0;
        end else begin
            if(clr) begin
                wr_ptr <= '0;
                rd_ptr <= '0;
                re_valid <= 0;
            end
            else if(we) begin
                if(single && !full && we_valid) begin
                    buff[wr_ptr] <= we_in[0];
                    wr_ptr <= wr_ptr + 1;
                    re_valid <= 0;
                end else if(we_valid && !full) begin
                    buff[wr_ptr] <= we_in[0];
                    buff[wr_ptr+1] <= we_in[1];
                    buff[wr_ptr+2] <= we_in[2];
                    buff[wr_ptr+3] <= we_in[3];
                    wr_ptr <= wr_ptr + 4;
                    re_valid <= 0;
                end

            end else if(re) begin
                if(!empty) begin
                    re_out[0] <= buff[rd_ptr];
                    re_out[1] <= buff[rd_ptr+1];
                    re_out[2] <= buff[rd_ptr+2];
                    re_out[3] <= buff[rd_ptr+3];
                    re_valid <= 1;
                    rd_ptr <= rd_ptr + 4;
                end else begin
                    re_valid <= 0;
                end
            end
        end
    end

endmodule


module LOAD_WEIGHTS_FSM(
    input logic clk,
    input logic rst_n,
    input logic start,   
    input logic any_busy,
    input logic full_weights,
    output logic we_weights,
    output logic busy,
    output logic clr);

    typedef enum logic [5:0] {IDLE, LOAD_WEIGHTS, DONE} state_t;
    state_t current_state, next_state;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= IDLE;
        end else begin
            current_state <= next_state;
        end
    end
    
    always_comb begin
        next_state = current_state;
        we_weights = 1'd0;
        clr = 1'd0;
        busy = 1'd0;
        case(current_state)
            IDLE: begin
                if(start && !any_busy) begin
                    next_state = LOAD_WEIGHTS;
                    clr = 1'd1;
                end else begin
                    next_state = IDLE;
                end
            end
            LOAD_WEIGHTS: begin
                if(!full_weights) begin
                    next_state = LOAD_WEIGHTS;
                    we_weights = 1'd1;
                    busy = 1'd1;
                end else begin
                    next_state = DONE;
                end
            end
            DONE: begin
                next_state = IDLE;
            end
        endcase
    end
endmodule


module LOAD_BIAS_FSM(
    input logic clk,
    input logic rst_n,
    input logic any_busy,
    input logic start,   
    input logic full_bias,
    output logic we_bias,
    output logic busy,
    output logic clr);

    typedef enum logic [5:0] {IDLE, LOAD_BIAS, DONE} state_t;
    state_t current_state, next_state;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= IDLE;
        end else begin
            current_state <=  next_state;
        end
    end
    
    always_comb begin
        next_state = current_state;
        we_bias = 1'd0;
        busy = 1'd1;
        clr = 1'd0;
        case(current_state)
            IDLE: begin
                if(start && !any_busy) begin
                    next_state = LOAD_BIAS;
                end else begin
                    next_state = IDLE;
                end
            end
            LOAD_BIAS: begin
                if(!full_bias) begin
                    next_state = LOAD_BIAS;
                    we_bias = 1'd1;
                    busy = 1'd1;
                end else begin
                    next_state = DONE;
                end
            end
            DONE: begin
                clr = 1'd1; //clear banks
                next_state = IDLE;
            end
        endcase
    end
endmodule


module LOAD_ACTIVATIONS_FSM(
    input logic clk,
    input logic rst_n,
    input logic any_busy,
    input logic start,   
    input logic full_activations,
    output logic busy,
    output logic we_activations,
    output logic clr);

    typedef enum logic [5:0] {IDLE, LOAD_ACTIVATIONS, DONE} state_t;
    state_t current_state, next_state;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= IDLE;
        end else begin
            current_state <=  next_state;
        end
    end
    
    always_comb begin
        next_state = current_state;
        busy = 1'd0;
        we_activations = 1'd0;
        clr = 1'd0;
        case(current_state)
            IDLE: begin
                if(start && !any_busy) begin
                    next_state = LOAD_ACTIVATIONS;
                end else begin
                    next_state = IDLE;
                end
            end
            LOAD_ACTIVATIONS: begin
                if(!full_activations) begin
                    next_state = LOAD_ACTIVATIONS;
                    busy = 1'd1;
                    we_activations = 1'd1;
                end else begin
                    next_state = DONE;
                end
            end
            DONE: begin
                clr = 1'd1; //clear banks
                next_state = IDLE;
            end
        endcase
    end
endmodule


module DMA_READ_FSM(
    input logic clk,
    input logic rst_n,
    input logic start,  
    input logic computed_in_max,
    output logic result_clr,
    output logic clr_counter,
    output logic result_re,
    output logic en_counter);

    typedef enum logic [5:0] {IDLE, READ_RESULTS} state_t;
    state_t current_state, next_state;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= IDLE;
        end else begin
            current_state <=  next_state;
        end
    end
    
    always_comb begin
        next_state = current_state;
        clr_counter = 1'd0;
        result_re = 1'd0;
        en_counter = 1'd0;
        result_clr = 1'd0;
        case(current_state)
            IDLE: begin
                if(start) begin
                    next_state = READ_RESULTS;
                end else begin
                    next_state = IDLE;
                end
            end
            READ_RESULTS: begin
                en_counter = 1'd1;
                if(!computed_in_max) begin
                    next_state = READ_RESULTS;
                    result_re = 1'd1;
                end else begin
                    result_clr = 1'd1;
                    clr_counter = 1'd1;
                    next_state = IDLE;
                end
            end
           
        endcase
    end
    
endmodule

module counter 
(input logic clk,
 input logic rst_n,
 input logic en,
 input logic clr,
 output logic [8:0] out);

 always_ff @(posedge clk, negedge rst_n) begin
    if(!rst_n)begin
        out <= '0;
    end else begin
        if(clr)begin
            out <= '0;
        end else if (en) begin
            out <= out + 1'd1;
        end
    end
 end

endmodule


