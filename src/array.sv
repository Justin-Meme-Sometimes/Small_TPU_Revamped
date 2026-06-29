module PE_array(
    input logic clk,
    input logic rst_n,
    input logic preload_state_start,
    input logic compute_state_start,
    input logic clr_state,
    input logic tile_done,
    input logic drain_state,
    input logic [3:0][7:0] weight_array,
    input logic [3:0][7:0] activation_array,
    output logic [3:0][32:0] product_array,
    output logic output_valid
);
    assign output_valid = drain_state;
    logic h_en_0, h_en_1, h_en_2, h_en_3;
    logic v_en_0, v_en_1, v_en_2, v_en_3;
    logic [31:0][15:0] pe_down_out;
    logic [31:0][15:0] pe_right_out;
    logic clr;
    
    assign clr = clr_state ? 1 : 0;

    horizontal_en_fsm e_fsm_1 (.clk(clk), 
                                .rst_n(rst_n), 
                                .compute_state_start(compute_state_start), 
                                .tile_done(tile_done), 
                                .en_0(h_en_0),
                                .en_1(h_en_1),
                                .en_2(h_en_2),
                                .en_3(h_en_3));

    vertical_en_fsm v_fsm_1 (   .clk(clk), 
                                .rst_n(rst_n), 
                                .compute_state_start(compute_state_start), 
                                .tile_done(tile_done), 
                                .en_0(v_en_0),
                                .en_1(v_en_1),
                                .en_2(v_en_2),
                                .en_3(v_en_3));

    

    //Row Math:      w1   w2   w3   w4
    //               |    |    |    |
    //     act-0 ->  x -> x -> x -> x
    //               |    |    |    |
    //     act-1 ->  x -> x -> x -> x
    //               |    |    |    |
    //     act-1 ->  x -> x -> x -> x 
    //               |    |    |    |
    //     act-3 ->  x -> x -> x -> x 
    //

    
    //Row 0
    PE pe_0_0 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_0), .drain(drain_state), .a(activation_array[0]), .b(weight_array[0]), .clr(clr_state), .tile_done(tile_done), .accum_in('0), .accum_in_valid(v_en_0), .down_out(pe_down_out[0]), .right_out(pe_right_out[0]));
    PE pe_0_1 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_1), .drain(drain_state), .a(pe_right_out[0]), .b(weight_array[1]), .clr(clr_state), .tile_done(tile_done), .accum_in('0), .accum_in_valid(v_en_0), .down_out(pe_down_out[1]), .right_out(pe_right_out[1]));
    PE pe_0_2 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_2), .drain(drain_state), .a(pe_right_out[1]), .b(weight_array[2]), .clr(clr_state), .tile_done(tile_done), .accum_in('0), .accum_in_valid(v_en_0), .down_out(pe_down_out[2]), .right_out(pe_right_out[2]));
    PE pe_0_3 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_3), .drain(drain_state), .a(pe_right_out[2]), .b(weight_array[3]), .clr(clr_state), .tile_done(tile_done), .accum_in('0), .accum_in_valid(v_en_0), .down_out(pe_down_out[3]), .right_out(pe_right_out[3]));

    //Row 1
    PE pe_1_0 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_0), .drain(drain_state), .a(activation_array[1]), .b(pe_down_out[0]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[0]), .accum_in_valid(v_en_1), .down_out(pe_down_out[4]), .right_out(pe_right_out[4]));
    PE pe_1_1 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_1), .drain(drain_state), .a(pe_right_out[4]), .b(pe_down_out[1]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[1]), .accum_in_valid(v_en_1), .down_out(pe_down_out[5]), .right_out(pe_right_out[5]));
    PE pe_1_2 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_2), .drain(drain_state), .a(pe_right_out[5]), .b(pe_down_out[2]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[2]), .accum_in_valid(v_en_1), .down_out(pe_down_out[6]), .right_out(pe_right_out[6]));
    PE pe_1_3 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_3), .drain(drain_state), .a(pe_right_out[6]), .b(pe_down_out[3]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[3]), .accum_in_valid(v_en_1), .down_out(pe_down_out[7]), .right_out(pe_right_out[7]));

    //Row 2
    PE pe_2_0 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_0), .drain(drain_state), .a(activation_array[2]), .b(pe_down_out[4]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[4]), .accum_in_valid(v_en_1), .down_out(pe_down_out[8]), .right_out(pe_right_out[8]));
    PE pe_2_1 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_1), .drain(drain_state), .a(pe_right_out[8]), .b(pe_down_out[5]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[5]), .accum_in_valid(v_en_1), .down_out(pe_down_out[9]), .right_out(pe_right_out[9]));
    PE pe_2_2 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_2), .drain(drain_state), .a(pe_right_out[9]), .b(pe_down_out[6]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[6]), .accum_in_valid(v_en_1), .down_out(pe_down_out[10]), .right_out(pe_right_out[10]));
    PE pe_2_3 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_3), .drain(drain_state), .a(pe_right_out[10]), .b(pe_down_out[7]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[7]), .accum_in_valid(v_en_1), .down_out(pe_down_out[11]), .right_out(pe_right_out[11]));

    //Row 3
    PE pe_3_0 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_0), .drain(drain_state), .a(activation_array[3]), .b(pe_down_out[8]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[8]), .accum_in_valid(v_en_1), .down_out(pe_down_out[12]), .right_out(pe_right_out[12]));
    PE pe_3_1 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_1), .drain(drain_state), .a(pe_right_out[12]), .b(pe_down_out[9]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[9]), .accum_in_valid(v_en_1), .down_out(pe_down_out[13]), .right_out(pe_right_out[13]));
    PE pe_3_2 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_2), .drain(drain_state), .a(pe_right_out[13]), .b(pe_down_out[10]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[10]), .accum_in_valid(v_en_1), .down_out(pe_down_out[14]), .right_out(pe_right_out[14]));
    PE pe_3_3 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(h_en_3), .drain(drain_state), .a(pe_right_out[14]), .b(pe_down_out[11]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[11]), .accum_in_valid(v_en_1), .down_out(pe_down_out[15]), .right_out(pe_right_out[15]));

    assign product_array[0] = pe_down_out[12];
    assign product_array[1] = pe_down_out[13];
    assign product_array[2] = pe_down_out[14];
    assign product_array[3] = pe_down_out[15];



endmodule

module horizontal_en_fsm(
    input logic clk,
    input logic rst_n,
    input logic compute_state_start,
    input logic tile_done,
    output logic en_0,
    output logic en_1,
    output logic en_2,
    output logic en_3
);

 logic en_0, en_1, en_2, en_3;
    typedef enum logic [4:0] {IDLE, S0, S1, S2, S3} state_t;
    state_t current_state, next_state;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= 0;
        end else begin
            current_state <=  next_state;
        end
    end

    //on S0 enables first col, S1 enables 2nd col, S2 enables 3rd col, etc
    always_comb begin
        next_state = current_state;
        en_3 = 0;
        en_2 = 0;
        en_1 = 0;
        en_0 = 0;
        case(current_state)
            IDLE: begin
                if(!compute_state_start) next_state = IDLE;
                else next_state = S0
            end 
            S0: begin
                next_state = S1;
                en_0 = 1;
            end
            S1: begin
                next_state = S2;
                en_1 = 1;
                en_0 = 1;
            end
            S2: begin
                next_state = S3;
                en_2 = 1;
                en_1 = 1;
                en_0 = 1;
            end
            S3: begin
                if(tile_done) begin
                    next_state = IDLE;
                end else begin
                    next_state = S3;
                end
                en_3 = 1;
                en_2 = 1;
                en_1 = 1;
                en_0 = 1;
            end
        endcase
    end
endmodule


module vertical_en_fsm(
    input logic clk,
    input logic rst_n,
    input logic compute_state_start,
    input logic tile_done,
    output logic en_0,
    output logic en_1,
    output logic en_2,
    output logic en_3
);

 logic en_0, en_1, en_2, en_3;
    typedef enum logic [4:0] {IDLE, S0, S1, S2, S3} state_t;
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
        en_3 = 0;
        en_2 = 0;
        en_1 = 0;
        en_0 = 0;
        case(current_state)
            IDLE: begin
                if(!compute_state_start) next_state = IDLE;
                else next_state = S0
            end 
            S0: begin
                next_state = S1;
            end
            S1: begin
                next_state = S2;
                en_1 = 1;
            end
            S2: begin
                next_state = S3;
                en_2 = 1;
            end
            S3: begin
                if(tile_done) begin
                    next_state = IDLE;
                end else begin
                    next_state = S3;
                end
                en_3 = 1;
            end
        endcase
    end



endmodule