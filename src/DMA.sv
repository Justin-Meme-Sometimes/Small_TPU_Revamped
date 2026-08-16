module DMA (
    input logic clk,
    input logic rst_n,
    input logic [7:0] u_in,
    input logic bias_fsm_start,
    input logic activation_fsm_start,
    input logic weight_fsm_start,
    input logic in_prefill,
    input logic prefill_start,
    input logic tile_done,
    input logic group_done,
    input logic [3:0][7:0] computed_bank_in,
    input logic computed_bank_in_valid,
    input logic start_read_fsm,
    input logic [3:0] bank,
    input logic result_we,
    output logic [7:0] u_out,
    output logic [3:0][7:0] weight_bank_out,
    output logic weight_bank_out_valid,
    output logic [3:0][7:0] activation_bank_out,
    output logic activation_bank_out_valid,
    output logic [3:0][31:0] bias_bank_out,
    output logic bias_bank_out_valid);


    logic activations_busy, weights_busy, bias_busy;
    logic [7:0] weight_we_in_single, bias_we_in_single, act_we_in_single;
    logic any_busy;
    logic en_counter;
    logic clr_counter;
    logic a_ready, b_ready, w_ready;

    logic act_we_max, act_we_en_counter, act_we_clr_counter;
    logic [8:0] act_we_count;
    logic [7:0] re_out_single_result;

    assign act_we_max = (act_we_count == 9'd16);  // one tile's worth: 16 single-byte writes


    assign act_clr = group_done;
    assign a_ready = weights_busy | bias_busy;
    assign w_ready = activations_busy | bias_busy;
    assign b_ready = activations_busy | weights_busy;
    assign u_out = re_out_single_result;

    always_comb begin
        weight_we_in = '0;
        bias_we_in = '0;
        act_we_in = '0;
        weight_we_in_single = 8'd0;
        bias_we_in_single = 8'd0;
        act_we_in_single = 8'd0;
      
        if(bank == 4'd1 && !w_ready) begin
            weight_we_in_single = u_in;
        end else if(bank == 4'd2 && !b_ready) begin
            bias_we_in_single = u_in;
        end else if(bank == 4'd3 && !a_ready) begin
            act_we_in_single = u_in;
        end
    
    end

    
    logic weight_single, weight_we, weight_re, weight_a_or_b, weight_clr;
    logic [3:0][7:0] weight_we_in;
    logic weight_we_valid, weight_full, weight_empty;
    logic [15:0] weight_full_count;
    logic [7:0] re_out_single_weight;
   


    assign weight_full_count = 16'd256;
    assign weight_we_valid = weight_we;
    assign weight_re = !weight_we && !weight_empty && in_prefill; //stream weights out as soon as they're not being loaded

    j_buffer #(.DEPTH(256)) weight_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single_write(1'd1),
        .we(weight_we),
        .re(weight_re),
        .single_read(1'd0),
        .clr(weight_clr),
        .we_in(weight_we_in),
        .we_valid(weight_we_valid),
        .we_in_single(weight_we_in_single),
        .re_out_single(re_out_single_weight),
        .full(weight_full),
        .empty(weight_empty),
        .re_out(weight_bank_out),
        .full_count(weight_full_count),
        .re_valid(weight_bank_out_valid));

    logic act_single, act_we, act_re, act_a_or_b, act_clr;
    logic [3:0][7:0] act_we_in;
    logic act_we_valid, act_full, act_empty, act_full_prev;
    logic [15:0] act_full_count;
    logic act_re_max, act_en_counter, act_clr_counter;
    logic [8:0] act_re_count;
    logic [7:0] re_out_single_act;

    assign act_full_count = 16'd128;
    assign act_we_valid = act_we;
    assign act_re_max = (act_re_count == 8'd4); //one bank's worth: 4 re pulses x 4 bytes = 16 bytes

    counter act_re_counter (
        .clk(clk),
        .rst_n(rst_n),
        .en(act_en_counter),
        .clr(act_clr_counter),
        .out(act_re_count)
    );

    DMA_ACT_READ_FSM act_read_fsm (
        .clk(clk),
        .rst_n(rst_n),
        .prefill_start(prefill_start),
        .tile_done(tile_done),
        .act_re_max(act_re_max),
        .clr_counter(act_clr_counter),
        .act_re(act_re),
        .en_counter(act_en_counter));

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            act_full_prev <= 1'd0;
        end else begin
            act_full_prev <= act_full;
        end
    end

    j_buffer #(.DEPTH(128)) act_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single_write(1'd1),
        .single_read(1'd0),
        .re_out_single(re_out_single_act),
        .we(act_we),
        .re(act_re),
        .clr(act_clr),
        .we_in(act_we_in),
        .we_valid(act_we_valid),
        .we_in_single(act_we_in_single),
        .full(act_full),
        .empty(act_empty),
        .re_out(activation_bank_out),
        .full_count(act_full_count),
        .re_valid(activation_bank_out_valid));

    logic bias_single, bias_we, bias_a_or_b, bias_clr;
    logic [3:0][7:0] bias_we_in;
    logic bias_we_valid, bias_full, bias_empty, bias_full_prev;
    logic [15:0] bias_full_count;
    logic [7:0] re_out_single_bias;

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
        .single_write(1'd1),
        .single_read(1'd0),
        .re_out_single(re_out_single_bias),
        .we(bias_we),
        .re(1'd0),
        .clr(bias_clr),
        .we_in(bias_we_in),
        .we_valid(bias_we_valid),
        .we_in_single(bias_we_in_single),
        .full(bias_full),
        .empty(bias_empty),
        .buff_out(bias_bank_out),
        .full_count(bias_full_count));

    LOAD_WEIGHTS_FSM w_fsm (
        .clk(clk),
        .rst_n(rst_n),
        .any_busy(w_ready),
        .busy(weights_busy),
        .start(weight_fsm_start),
        .full_weights(weight_full),
        .we_weights(weight_we),
        .clr(weight_clr));

    LOAD_BIAS_FSM b_fsm (
        .clk(clk),
        .rst_n(rst_n),
        .start(bias_fsm_start),
        .any_busy(b_ready),
        .full_bias(bias_full),
        .busy(bias_busy),
        .we_bias(bias_we),
        .clr(bias_clr));

    LOAD_ACTIVATIONS_FSM a_fsm (
        .clk(clk),
        .rst_n(rst_n),
        .start(activation_fsm_start),
        .any_busy(a_ready),
        .act_we_max(act_we_max),
        .en_counter(act_we_en_counter),
        .clr_counter(act_we_clr_counter),
        .busy(activations_busy),
        .we_activations(act_we));

    logic result_single, result_re, result_a_or_b, result_clr;
    logic [3:0][7:0] result_we_in, result_re_out;
    logic result_we_valid, result_full, result_empty, result_re_valid;
    logic [15:0] result_full_count;
    logic [8:0] read_count;
    logic computed_in_max;

    assign result_full_count = 16'd256;
    assign result_we_valid = computed_bank_in_valid;
    assign computed_in_max = read_count == result_full_count;

    j_buffer #(.DEPTH(256)) result_buf (
        .clk(clk),
        .rst_n(rst_n),
        .single_write(1'd0),
        .single_read(1'd1),
        .re_out_single(re_out_single_result),
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



    counter act_we_counter (
        .clk(clk),
        .rst_n(rst_n),
        .en(act_we_en_counter),
        .clr(act_we_clr_counter),
        .out(act_we_count)
    );

endmodule

module j_buffer #(
    parameter DEPTH = 16)
    (
    input logic clk,
    input logic rst_n,
    input logic single_write,
    input logic we,
    input logic re,
    input logic clr,
    input logic single_read,
    input logic [7:0] we_in_single,
    input logic [3:0][7:0] we_in,
    input logic [15:0] full_count,
    input logic we_valid,
    output logic full,
    output logic empty,
    output logic [3:0][7:0] re_out,
    output logic [7:0] re_out_single,
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
                if(single_write && !full && we_valid) begin
                    buff[wr_ptr] <= we_in_single;
                    wr_ptr <= wr_ptr + 1;
                    re_valid <= 0;
                end else if(we_valid && !full && !single_write) begin
                    buff[wr_ptr] <= we_in[0];
                    buff[wr_ptr+1] <= we_in[1];
                    buff[wr_ptr+2] <= we_in[2];
                    buff[wr_ptr+3] <= we_in[3];
                    wr_ptr <= wr_ptr + 4;
                    re_valid <= 0;
                end

            end else if(re) begin
                if(single_read && !empty) begin
                    re_out_single <= buff[rd_ptr];
                    rd_ptr <= rd_ptr + 1;
                    re_valid <= 1;
                end else if(!empty) begin
                    re_out[0] <= buff[rd_ptr];
                    re_out[1] <= buff[rd_ptr+1];
                    re_out[2] <= buff[rd_ptr+2];
                    re_out[3] <= buff[rd_ptr+3];
                    re_valid <= 1;
                    rd_ptr <= rd_ptr + 4;
                end else begin
                    re_valid <= 0;
                end
            end else begin
                re_out_single <= 0;
                re_valid <= 0;
                re_out[0] <= '0; 
                re_out[1] <= '0; 
                re_out[2] <= '0; 
                re_out[3] <= '0;
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
        busy = 1'd0;
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
    input logic act_we_max,
    output logic busy,
    output logic we_activations,
    output logic en_counter,
    output logic clr_counter);

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
        en_counter = 1'd0;
        clr_counter = 1'd0;
        case(current_state)
            IDLE: begin
                if(start && !any_busy) begin
                    next_state = LOAD_ACTIVATIONS;
                end else begin
                    next_state = IDLE;
                end
            end
            LOAD_ACTIVATIONS: begin
                en_counter = 1'd1;
                if(!act_we_max) begin
                    next_state = LOAD_ACTIVATIONS;
                    busy = 1'd1;
                    we_activations = 1'd1;
                end else begin
                    clr_counter = 1'd1;
                    next_state = DONE;
                end
            end
            DONE: begin
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


module DMA_ACT_READ_FSM(
    input logic clk,
    input logic rst_n,
    input logic prefill_start,
    input logic tile_done,
    input logic act_re_max,
    output logic clr_counter,
    output logic act_re,
    output logic en_counter);

    typedef enum logic [5:0] {IDLE, READ_ACTIVATIONS} state_t;
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
        act_re = 1'd0;
        en_counter = 1'd0;
        case(current_state)
            IDLE: begin
                if(prefill_start || tile_done) begin
                    next_state = READ_ACTIVATIONS;
                end else begin
                    next_state = IDLE;
                end
            end
            READ_ACTIVATIONS: begin
                en_counter = 1'd1;
                if(!act_re_max) begin
                    next_state = READ_ACTIVATIONS;
                    act_re = 1'd1;
                end else begin
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


