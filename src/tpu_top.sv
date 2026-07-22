module tpu_top (
    input logic clk,
    input logic rst_n,
    input logic start,
    input logic [7:0][3:0] tpu_in,
    output logic [7:0][3:0] tpu_out,
    input logic [31:0] op_code
);

    logic start_fifo_load;
    logic load_fifo;
    logic preload_state;
    logic weight_fifo_full;
    logic weight_fifo_empty;
    logic weight_data_valid;
    logic [3:0][7:0] weight_data_out;
    logic [3:0][7:0] weight_bank_out;
    logic weight_bank_out_valid;

    logic activation_buff_start;
    logic compute_state;
    logic drain_state;
    logic tile_done;
    logic tile_complete;
    logic [31:0][3:0] activation_bank_out;
    logic activation_bank_out_valid;
    logic [3:0][7:0] systolic_act_in;
    logic systolic_act_in_valid;

    logic [3:0][32:0] product_out;
    logic product_out_valid;

    logic relu_drain_state;
    logic relu_accum_state;
    logic [31:0][3:0] relu_out;
    logic relu_out_valid;

    logic accum_state;
    logic [3:0][7:0] requant_out;
    logic requant_out_valid;
    logic [2:0] dma_bank;

    assign tpu_out = '0;
    assign dma_bank = 3'd0;

    typedef enum logic [4:0] {IDLE, PREFILL, PRELOAD, COMPUTE, DRAIN, FUNCS, DONE} state_t;
    state_t current_state, next_state;

    // Kick weight-fifo loading and activation prefill off together as soon as
    // the top FSM enters PREFILL; both sub-FSMs self-pace off their own
    // full/empty flags from there, so holding these high for the whole
    // PREFILL window (instead of a single pulse) is harmless.
    assign start_fifo_load = (current_state == PREFILL);
    assign load_fifo = (current_state == PREFILL);
    assign activation_buff_start = (current_state == PREFILL);

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= 0;
        end else begin
            current_state <=  next_state;
        end
    end

    logic prefill_en, prefill_clr, preload_en, preload_clr, compute_en, compute_clr, drain_en, drain_clr, func_en, func_clr, tile_en, tile_clr;
    logic [7:0] prefill_count, preload_count, compute_count, drain_count, funcs_count, tile_count;
    logic prefill_max, preload_max, compute_max, drain_max, funcs_max, tiles_max;
    
    counter PREFILL_COUNTER (.clk(clk), .rst_n(rst_n), .en(prefill_en), .clr(prefill_clr), .out(prefill_count));
    counter PRELOAD_COUNTER (.clk(clk), .rst_n(rst_n), .en(preload_en), .clr(preload_clr), .out(preload_count));
    counter COMPUTE_COUNTER (.clk(clk), .rst_n(rst_n), .en(compute_en), .clr(compute_clr), .out(compute_count));
    counter DRAIN_COUNTER   (.clk(clk), .rst_n(rst_n), .en(drain_en),   .clr(drain_clr),   .out(drain_count));
    counter FUNCS_COUNTER   (.clk(clk), .rst_n(rst_n), .en(func_en),    .clr(func_clr),    .out(funcs_count));
    counter TILES_COMPLETE_COUNTER   (.clk(clk), .rst_n(rst_n), .en(tile_done), .clr(tile_clr), .out(tile_count));

    assign prefill_max = (prefill_count == 8'd16);
    assign preload_max = (preload_count == 8'd8);
    assign compute_max = (compute_count == 8'd7);
    assign drain_max = (drain_count == 8'd4);
    assign funcs_max = (funcs_count == 8'd3);
    assign tiles_max = (tile_count == 8'd8);


    assign tile_complete = tiles_max;

    //S0 isn't enabled first row, S1 enabled 2nd row, S2 enabled 3rd row
    always_comb begin
        next_state = current_state;
        prefill_clr = 0;
        preload_clr = 0;
        compute_clr = 0;
        drain_clr = 0;
        func_clr = 0;
        tile_clr = 0;
        prefill_en = 0;
        preload_en = 0;
        compute_en = 0;
        drain_en = 0;
        func_en = 0;
        preload_state = 0;
        compute_state = 0;
        drain_state = 0;
        accum_state = 0;
        tile_done = 0;
        case(current_state)
            IDLE: begin
                if(!start) next_state = IDLE;
                else next_state = PREFILL;
            end
            PREFILL: begin
                if(prefill_max) begin
                    next_state = PRELOAD;
                end else begin
                    prefill_en = 1;
                    next_state = PREFILL;
                end
            end
            PRELOAD: begin
                if(preload_max) begin
                    next_state = COMPUTE;
                end else begin
                    next_state = PRELOAD;
                    preload_en = 1;
                    prefill_clr = 1;
                    func_clr = 1;
                end
                preload_state = 1;
            end
            COMPUTE: begin
                if(compute_max) begin
                    next_state = DRAIN;
                    tile_done = 1;
                end else begin
                    next_state = COMPUTE;
                    compute_en = 1;
                    preload_clr = 1;
                end
                compute_state = 1;
            end
            DRAIN: begin
                if(drain_max) begin
                    next_state = FUNCS;
                end else begin
                    next_state = DRAIN;
                    drain_en = 1;
                    compute_clr = 1;
                end
                drain_state = 1;
            end
            FUNCS: begin
                if(funcs_max && !tile_complete) begin
                    next_state = PRELOAD;
                end else if(funcs_max && tile_complete) begin
                    next_state = DONE;
                end else begin
                    next_state = FUNCS;
                    func_en = 1;
                    drain_clr = 1;
                end
                accum_state = 1;
            end
            DONE: begin
                next_state = IDLE;
                tile_clr = 1;
            end
        endcase
    end

    
    weight_loader w_l (
        .clk(clk),
        .rst_n(rst_n),
        .read_data(weight_bank_out),
        .read_data_valid(weight_bank_out_valid),
        .start_load_fifo_state(start_fifo_load),
        .load_fifo_state(load_fifo),
        .preload_state(preload_state),
        .tiles_complete(tile_complete),
        .fifo_full(weight_fifo_full),
        .fifo_empty(weight_fifo_empty),
        .data_valid(weight_data_valid),
        .data_out(weight_data_out)

    );

    activation_buffer a_buff (
        .clk(clk),
        .rst_n(rst_n),
        .start(activation_buff_start),
        .compute_state(compute_state),
        .preload_state(preload_state),
        .drain_state(drain_state),
        .tile_done(tile_done),
        .tiles_complete(tile_complete),
        .DMA_in_valid(activation_bank_out_valid),
        .DMA_in(activation_bank_out),
        .output_buff(systolic_act_in),
        .output_buf_valid(systolic_act_in_valid)

    );

    PE_array sys_array (
        .clk(clk),
        .rst_n(rst_n),
        .preload_state_start(preload_state),
        .compute_state_start(compute_state),
        .clr_state(1'd0),
        .tile_done(tile_done),
        .drain_state(drain_state),
        .weight_array(weight_data_out),
        .activation_valid(systolic_act_in_valid),
        .activation_array(systolic_act_in),
        .product_array(product_out),
        .output_valid(product_out_valid));

    relu_buffer r_buffer (
        .clk(clk),
        .rst_n(rst_n),
        .drain_state(drain_state),
        .accum_state(accum_state),
        .ins(product_out),
        .valid(product_out_valid),
        .out_valid(relu_out_valid),
        .out(relu_out)
    );

    requant req (
        .clk(clk),
        .rst_n(rst_n),
        .ins(relu_out),
        .con(1'd1),
        .valid(relu_out_valid),
        .drain_state(drain_state),
        .accum_state(accum_state),
        .out(requant_out),
        .out_valid(requant_out_valid));

    DMA dma (
        .clk(clk),
        .rst_n(rst_n),
        .compute_state(compute_state),
        .preload_state(preload_state),
        .drain_state(drain_state),
        .bank(dma_bank),
        .computed_bank_in(requant_out), //this also comes from relu
        .computed_bank_in_valid(requant_out_valid), //this comes from relu
        .weight_bank_out(weight_bank_out),  //this goes into weight fifo
        .weight_bank_out_valid(weight_bank_out_valid),  //this also goes into weight fifo
        .activation_bank_out(activation_bank_out), //this goes into double buffer for activation
        .activation_bank_out_valid(activation_bank_out_valid)); //this also goes into double buffer for activation

endmodule

module counter 
(input logic clk,
 input logic rst_n,
 input logic en,
 input logic clr,
 output logic [7:0] out);

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
