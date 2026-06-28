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