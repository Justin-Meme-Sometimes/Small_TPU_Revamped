module tpu_top (
    input logic clk,
    input logic rst_n,
    input logic [31:0][3:0] tpu_in,
    input logic [31:0] op_code
);

    logic start_fifo_load;
    logic load_fifo;
    logic preload_state;
    logic tiles_complete;
    logic weight_fifo_full;
    logic weight_fifo_empty;
    logic weight_data_valid;
    logic [3:0][7:0] weight_data_out;
    logic [7:0][3:0] weight_bank_out;
    logic weight_bank_out_valid;

    logic activation_buff_start;
    logic compute_state;
    logic drain_state;
    logic tile_done;
    logic tile_complete;
    logic [7:0][3:0] activation_bank_out;
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
    logic [7:0][3:0] reqaunt_out;


    typedef enum logic [4:0] {IDLE, PREFILL, PRELOAD, COMPUTE, DRAIN, FUNCS, DONE} state_t;
    state_t current_state, next_state;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= 0;
        end else begin
            current_state <=  next_state;
        end
    end



    //S0 isn't enabled first row, S1 enabled 2nd row, S2 enabled 3rd row
    always_comb begin
        next_state = current_state;
        case(current_state)
            IDLE: begin
                if(!compute_state_start) next_state = IDLE;
                else next_state = S0
            end 
            PREFILL: begin
                next_state = PRELOAD;
            end
            PRELOAD: begin
                next_state = COMPUTE;
                en_1 = 1;
            end
            COMPUTE: begin
                next_state = DRAIN;
                en_2 = 1;
            end
            DRAIN: begin
                if(tile_done) begin
                    next_state = IDLE;
                end else begin
                    next_state = S3;
                end
                en_3 = 1;
            end
            FUNCS: begin
                if(funcs_done) begin
                   next_state = DONE;
                end else begin
                   next_state = FUNCS;
                end 
                accum_state = 1;
            end
            DONE: begin
                next_state = IDLE;
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
        .tiles_complete(tiles_complete),
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
        .activation_array(systolic_act_in),
        .product_array(product_out),
        .output_valid(product_out_valid));

    relu_buffer r_buffer (
        .clk(clk),
        .rst_n(rst_n),
        .drain_state(relu_drain_state),
        .accum_state(relu_accum_state),
        .ins(product_out),
        .valid(product_out_valid),
        .out_valid(relu_out_valid),
        .out(relu_out),
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
        .computed_bank_in(reqaunt_out), //this also comes from relu
        .computed_bank_in_valid(requant_out_valid), //this comes from relu
        .weight_bank_out(weight_bank_out),  //this goes into weight fifo
        .weight_bank_out_valid(weight_bank_out_valid),  //this also goes into weight fifo
        .activation_bank_out(activation_bank_out), //this goes into double buffer for activation
        .activation_bank_out_valid(activation_bank_out_valid)); //this also goes into double buffer for activation

endmodule
