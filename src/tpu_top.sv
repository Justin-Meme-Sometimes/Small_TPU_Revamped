module tpu_top (
    input logic clk,
    input logic rst_n,
    input logic op_code
);

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
        en_3 = 0;
        en_2 = 0;
        en_1 = 0;
        en_0 = 0;
        case(current_state)
            IDLE: begin
                if(!compute_state_start) next_state = IDLE;
                else next_state = S0
            end 
            PREFILL: begin
                next_state = S1;
            end
            PRELOAD: begin
                next_state = S2;
                en_1 = 1;
            end
            COMPUTE: begin
                next_state = S3;
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

    
endmodule
