module tpu_top (
    input logic clk,
    input logic rst_n,
    input logic [7:0] u_in,
    input logic [7:0] uio_in,
    output logic [7:0] uio_out,
    output logic [7:0] u_out
);
    
    localparam OP_COMPUTE = 8'h1;
    localparam OP_LOAD_REQUANT = 8'h2;
    localparam OP_READ_OUTPUTS = 8'h3;
    localparam OP_STATUS = 8'h4;
    localparam OP_LOAD_WEIGHTS = 8'h5;
    localparam OP_LOAD_ACTIVATIONS = 8'h6;
    localparam OP_LOAD_BIAS = 8'h7;

    logic [7:0] opcode_reg;
    logic [7:0] requant_value;
    logic start;
    logic start_read_fsm;
    logic weight_fsm_start;
    logic activation_fsm_start;
    logic bias_fsm_start;
    logic [3:0] bank;
    
    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            opcode_reg <= 0;
        end else begin
            opcode_reg <= uio_in;
        end
    end
    
    always_comb begin
        start = 1'd0;
        start_read_fsm = 1'd0;
        weight_fsm_start = 1'd0;
        activation_fsm_start = 1'd0;
        bias_fsm_start = 1'd0;
        if(opcode_reg == OP_COMPUTE) begin
            if(current_state == IDLE) start = 1'd1; 
        end else if(opcode_reg == OP_READ_OUTPUTS) begin
            start_read_fsm = 1'd1;
        end else if(opcode_reg == OP_LOAD_WEIGHTS) begin
            weight_fsm_start = 1'd1;
        end else if(opcode_reg == OP_LOAD_ACTIVATIONS) begin
            activation_fsm_start = 1'd1;
        end else if(opcode_reg == OP_LOAD_BIAS) begin
            bias_fsm_start = 1'd1;
        end
    end

    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n) begin
            requant_value <= 8'd0;
            uio_out <= 8'd0;
            bank <= 4'd0;
        end else if (opcode_reg == OP_LOAD_REQUANT) begin
            requant_value <= u_in;
        end else if (opcode_reg == OP_STATUS) begin
            uio_out <= (current_state == IDLE);
        end else if (opcode_reg == OP_LOAD_WEIGHTS) begin
            bank <= 4'd1;
        end else if (opcode_reg == OP_LOAD_ACTIVATIONS) begin
            bank <= 4'd3;
        end else if (opcode_reg == OP_LOAD_BIAS) begin
            bank <= 4'd2;
        end
    end

    
  
    logic start_fifo_load;
    logic load_fifo;
    logic preload_state;
    logic weight_fifo_full;
    logic weight_fifo_empty;
    logic weight_data_valid;
    logic [3:0][7:0] weight_data_out;
    logic [3:0][7:0] weight_bank_out;
    logic weight_bank_out_valid;
    logic prefill_state;
    logic load_dma_state;

    logic activation_buff_start;
    logic compute_state;
    logic drain_state;
    logic tile_done;
    logic tile_complete;
    logic [31:0][3:0] activation_bank_out;
    logic activation_bank_out_valid;
    logic [3:0][7:0] systolic_act_in;
    logic systolic_act_in_valid;

    logic [3:0][31:0] product_out;
    logic product_out_valid;

    logic [3:0][31:0] bias_in; //placeholder until DMA supplies real per-tile bias data
    logic [3:0][31:0] product_biased;
    logic [3:0][31:0] bias_bank_out;
    logic bias_bank_out_valid;
    logic product_biased_valid;

    assign bias_in = bias_bank_out;

    logic relu_drain_state;
    logic relu_accum_state;
    logic [3:0][31:0] relu_out;
    logic relu_out_valid;

    logic accum_state;
    logic [3:0][7:0] requant_out;
    logic requant_out_valid;
    logic [2:0] dma_bank;
    logic result_we;

    assign tpu_out = '0;
    assign dma_bank = 3'd0;

    typedef enum logic [4:0] {IDLE, LOAD_DMA, PREFILL, PRELOAD, COMPUTE, DRAIN, FUNCS, DONE} state_t;
    state_t current_state, next_state;

    // Kick weight-fifo loading and activation prefill off together as soon as
    // the top FSM enters PREFILL; both sub-FSMs self-pace off their own
    // full/empty flags from there, so holding these high for the whole
    // PREFILL window (instead of a single pulse) is harmless.
    assign start_fifo_load = (current_state == PREFILL);
    assign load_fifo = (current_state == PREFILL);
    assign activation_buff_start = (current_state == PREFILL);
    assign prefill_state = (current_state == PREFILL);

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= 0;
        end else begin
            current_state <=  next_state;
        end
    end

    logic load_dma_en, load_dma_clr, prefill_en, prefill_clr, preload_en, preload_clr, compute_en, compute_clr, drain_en, drain_clr, func_en, func_clr, tile_en, tile_clr;
    logic [8:0] load_dma_count, prefill_count, preload_count, compute_count, drain_count, funcs_count, tile_count;
    logic load_dma_max, prefill_max, preload_max, compute_max, drain_max, funcs_max, tiles_max;

    counter_top LOAD_DMA_COUNTER (.clk(clk), .rst_n(rst_n), .en(load_dma_en), .clr(load_dma_clr), .out(load_dma_count));
    counter_top PREFILL_COUNTER (.clk(clk), .rst_n(rst_n), .en(prefill_en), .clr(prefill_clr), .out(prefill_count));
    counter_top PRELOAD_COUNTER (.clk(clk), .rst_n(rst_n), .en(preload_en), .clr(preload_clr), .out(preload_count));
    counter_top COMPUTE_COUNTER (.clk(clk), .rst_n(rst_n), .en(compute_en), .clr(compute_clr), .out(compute_count));
    counter_top DRAIN_COUNTER   (.clk(clk), .rst_n(rst_n), .en(drain_en),   .clr(drain_clr),   .out(drain_count));
    counter_top FUNCS_COUNTER   (.clk(clk), .rst_n(rst_n), .en(func_en),    .clr(func_clr),    .out(funcs_count));
    counter_top TILES_COMPLETE_COUNTER   (.clk(clk), .rst_n(rst_n), .en(tile_done), .clr(tile_clr), .out(tile_count));

    assign load_dma_max = (load_dma_count == 9'd257);
    assign prefill_max = (prefill_count == 9'd16);
    assign preload_max = (preload_count == 9'd8);
    assign compute_max = (compute_count == 9'd7);
    assign drain_max = (drain_count == 9'd4);
    assign funcs_max = (funcs_count == 9'd3);
    assign tiles_max = (tile_count == 9'd8);


    assign tile_complete = tiles_max;

    //S0 isn't enabled first row, S1 enabled 2nd row, S2 enabled 3rd row
    always_comb begin
        next_state = current_state;
        load_dma_clr = 0;
        prefill_clr = 0;
        preload_clr = 0;
        compute_clr = 0;
        result_we = 0;
        drain_clr = 0;
        func_clr = 0;
        tile_clr = 0;
        load_dma_en = 0;
        prefill_en = 0;
        preload_en = 0;
        compute_en = 0;
        drain_en = 0;
        func_en = 0;
        load_dma_state = 0;
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
                    load_dma_clr = 1;
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
                    result_we = 1;
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
                    result_we = 1;
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

    bias_add b_add (
        .clk(clk),
        .rst_n(rst_n),
        .preload_state(preload_state),
        .drain_state(drain_state),
        .valid(product_out_valid),
        .bias_in(bias_bank_out),
        .product_in(product_out),
        .product_out(product_biased),
        .out_valid(product_biased_valid)
    );

    relu_buffer r_buffer (
        .clk(clk),
        .rst_n(rst_n),
        .drain_state(drain_state),
        .accum_state(accum_state),
        .ins(product_biased),
        .valid(product_biased_valid),
        .out_valid(relu_out_valid),
        .out(relu_out)
    );

    requant req ( 
        .clk(clk),
        .rst_n(rst_n),
        .ins(relu_out),
        .con(requant_value), //change this
        .valid(relu_out_valid),
        .drain_state(drain_state),
        .accum_state(accum_state),
        .out(requant_out),
        .out_valid(requant_out_valid));

    DMA dma (
        .clk(clk),
        .rst_n(rst_n),
        .u_in(u_in),
        .u_out(u_out),
        .tile_done(tile_done),
        .weight_fsm_start(weight_fsm_start),
        .activation_fsm_start(activation_fsm_start),
        .bias_fsm_start(bias_fsm_start),
        .start_read_fsm(start_read_fsm),
        .bank(bank),
        .result_we(result_we),
        .computed_bank_in(requant_out), //this also comes from relu
        .computed_bank_in_valid(requant_out_valid), //this comes from relu
        .weight_bank_out(weight_bank_out),  //this goes into weight fifo
        .weight_bank_out_valid(weight_bank_out_valid),  //this also goes into weight fifo
        .activation_bank_out(activation_bank_out), //this goes into double buffer for activation
        .activation_bank_out_valid(activation_bank_out_valid),
        .bias_bank_out(bias_bank_out),
        .bias_bank_out_valid(bias_bank_out_valid)); //this also goes into double buffer for activation

endmodule

module counter_top 
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
