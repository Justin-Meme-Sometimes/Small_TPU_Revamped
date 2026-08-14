module activation_buffer (
    input logic clk,
    input logic rst_n,
    input logic start,
    input logic compute_state,
    input logic preload_state,
    input logic drain_state,
    input logic tile_done,
    input logic tiles_complete,
    input logic DMA_in_valid,
    input logic  [3:0][7:0] DMA_in,
    output logic [3:0][7:0] output_buff,
    output logic output_buf_valid
);

//Two buffers A and B
//We initially use A where we start to fill it on start then we fill before we enter compute state for Buffer A
//We then enter compute and Fill B during that until we get into drain then we switch what the output is
//We then clr and then fill A while B is being emptied and repeat this
//We should make a shift register with this



logic we_a, re_a, clr_a, re_valid_a, we_valid_a ,buff_a_empty, buff_a_full, buff_a_active, first_pass_a, buff_a_bs;
logic [3:0][7:0] write_in_a, re_out_a;

logic we_b, re_b, clr_b, re_valid_b, we_valid_b, buff_b_empty, buff_b_full, buff_b_active, first_pass_b, buff_b_bs;
logic [3:0][7:0] write_in_b, re_out_b;

bank_fsm A (.clk(clk), .rst_n(rst_n), .we(we_a), .re(re_a), .a_or_b(1), .start(start), .compute_state(compute_state), .preload_state(preload_state), .drain_state(drain_state), .tile_done(tile_done), .tiles_complete(tiles_complete), .full(buff_a_full), .empty(buff_a_empty), .bank_switch(buff_a_bs), .active(buff_a_active), .other_bank_active(buff_b_active),  .first_pass(first_pass_a), .clr(clr_a));
bank_fsm B (.clk(clk), .rst_n(rst_n), .we(we_b), .re(re_b), .a_or_b(0), .start(start), .compute_state(compute_state), .preload_state(preload_state), .drain_state(drain_state), .tile_done(tile_done), .tiles_complete(tiles_complete), .full(buff_b_full), .empty(buff_b_empty), .bank_switch(buff_b_bs), .active(buff_b_active), .other_bank_active(buff_a_active),  .first_pass(first_pass_b), .clr(clr_b));

i_buffer BUFF_A (.clk(clk), .rst_n(rst_n), .we(we_a), .re(re_a), .a_or_b(1), .clr(clr_a), .re_out(re_out_a), .re_valid(re_valid_a), .we_in(write_in_a), .we_valid(we_valid_a), .empty(buff_a_empty), .full(buff_a_full));
i_buffer BUFF_B (.clk(clk), .rst_n(rst_n), .we(we_b), .re(re_b), .a_or_b(0), .clr(clr_b), .re_out(re_out_b), .re_valid(re_valid_b), .we_in(write_in_b), .we_valid(we_valid_b), .empty(buff_b_empty), .full(buff_b_full));
    
always_comb begin
    we_valid_b = 0;
    we_valid_a = 0;
    write_in_a = 0;
    write_in_b = 0;
    output_buf_valid = 0;
    output_buff = 0;
 
    if(we_b && DMA_in_valid) begin
        write_in_b = DMA_in;
        we_valid_b = 1;
    end
    if(we_a && DMA_in_valid) begin
        we_valid_a = 1;
        write_in_a = DMA_in;
    end
    if(re_valid_a) begin
        output_buff = re_out_a;
        output_buf_valid = 1;
    end else if(re_valid_b) begin
        output_buff = re_out_b;
        output_buf_valid = 1;
    end
end
endmodule


module bank_fsm(
    input logic clk,
    input logic rst_n,
    input logic a_or_b,
    input logic start,
    input logic compute_state,
    input logic preload_state,
    input logic drain_state,
    input logic tile_done,
    input logic tiles_complete,
    input logic full,
    input logic empty,
    input logic other_bank_active,
    output logic bank_switch,
    output logic first_pass,
    output logic active,
    output logic we,
    output logic re,
    output logic clr);

    typedef enum logic [5:0] {IDLE, PREFILL, PRELOAD, COMPUTE, WAIT_INACTIVE, FILL_INACTIVE, BUBBLE, DONE} state_t;
    state_t current_state, next_state;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= IDLE;
        end else begin
            current_state <=  next_state;
        end
    end
    
    logic o_bank_reg;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            o_bank_reg <= 0;
        end else begin
            o_bank_reg <= other_bank_active;
        end
    end

    always_comb begin
        next_state = current_state;
        we = 0;
        re = 0;
        active = 0;
        first_pass = 0;
        clr = 0;
        bank_switch = 0;
        case(current_state)
            IDLE: begin
                if(start && a_or_b) begin
                    next_state = PREFILL;
                    first_pass = 1;
                    we = 1;
                end
                else if(start && !a_or_b) begin
                    next_state = WAIT_INACTIVE;
                    we = 1;
                end else begin
                    next_state = IDLE;
                end
            end 
            PREFILL: begin
                if(!full) begin
                    next_state = PREFILL;
                    first_pass = 1;
                    we = 1;
                end else begin
                    next_state = PRELOAD;
                end
            end
            PRELOAD: begin
                if(!preload_state) begin
                    next_state = PRELOAD;
                    we = 1;
                    first_pass = 1;
                end else begin
                    next_state = COMPUTE;
                end
            end
            COMPUTE : begin
                if(!empty && (compute_state || drain_state) && !o_bank_reg) begin
                    next_state = COMPUTE;
                    re = 1;
                    active = 1; //only 1 bank should be active at a time
                end else if (!tiles_complete && o_bank_reg && !active) begin
                    bank_switch = 1;
                    clr = 1;
                    next_state = FILL_INACTIVE;
                end else if(tiles_complete) begin
                    next_state = DONE;
                end
            end
            WAIT_INACTIVE: begin
                if(compute_state) begin
                    next_state = FILL_INACTIVE;
                    clr = 1;
                end else begin
                    next_state = WAIT_INACTIVE;
                end
            end
            FILL_INACTIVE: begin
                if((compute_state || drain_state) && full) begin
                    next_state = BUBBLE;
                    bank_switch = 1;
                    active = 1;
                end else if(!full)begin
                    next_state = FILL_INACTIVE;
                end
                we=1;
            end
            BUBBLE: begin
                next_state = COMPUTE;
                active = 1;
            end
            DONE: begin
                clr = 1; //clear banks
                next_state = IDLE;
            end
        endcase
    end



endmodule


module i_buffer(
    input logic clk,
    input logic rst_n,    
    input logic we,
    input logic re,
    input logic a_or_b,
    input logic clr,
    input logic [3:0][7:0] we_in,
    input logic we_valid,
    output logic full,
    output logic empty,
    output logic [3:0][7:0] re_out,
    output logic re_valid);

    logic [15:0][7:0] buff;
    logic [9:0] curr_count;
    logic [9:0] wr_ptr, rd_ptr; //separate pointers so multi-group reads play back in FIFO (write) order instead of draining from the top down


    assign full = wr_ptr == 10'd16;
    assign empty = rd_ptr == wr_ptr;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            buff <= '0; // or whatever it is to make everything is 0
            wr_ptr <= '0;
            rd_ptr <= '0;
        end else begin
            if(clr) begin
                wr_ptr <= '0;
                rd_ptr <= '0;
                re_valid <= '0;
            end
            else if(we) begin
                if(we_valid && !full) begin
                    buff[wr_ptr] <= we_in[0];
                    buff[wr_ptr+1] <= we_in[1];
                    buff[wr_ptr+2] <= we_in[2];
                    buff[wr_ptr+3] <= we_in[3];
                    wr_ptr <= wr_ptr + 4;
                    re_valid <= 0;
                end
            end
            else if(re) begin //curr_count gets to 255 after filling activation buffer then empties
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
            end else begin
                re_valid <= 0;
                re_out[0] <= '0; 
                re_out[1] <= '0; 
                re_out[2] <= '0; 
                re_out[3] <= '0;
            end
        end
    end

endmodule