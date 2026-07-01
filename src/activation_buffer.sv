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
    input logic  [31:0][3:0] DMA_in, 
    output logic [31:0][3:0] output_buff,
    output logic output_buf_valid
);

//Two buffers A and B
//We initially use A where we start to fill it on start then we fill before we enter compute state for Buffer A
//We then enter compute and Fill B during that until we get into drain then we switch what the output is
//We then clr and then fill A while B is being emptied and repeat this
//We should make a shift register with this



logic we_a, re_a, clr_a, re_in_a, re_valid_a, buffer_a_empty, buffer_a_full, buff_a_active, buff_a_bs;
logic [31:0][3:0] write_in_a, re_out_a;

logic we_b, re_b, clr_b, re_in_b, re_valid_b, buff_b_empty, buff_b_full, buff_b_active, buff_b_bs;
logic [31:0][3:0] write_in_b, re_out_b;

bank_fsm A (.clk(clk), .rst_n(rst_n), .we(we_a), .re(re_a), .a_or_b(1), .start(start), .compute_state(compute_state), .preload_state(preload_state), .drain_state(drain_state), .tile_done(tile_done), .tiles_complete(tiles_complete), .full(buff_a_full), .empty(buff_a_empty), .bank_switch(buff_a_bs), .active(buff_a_active), .(clr_a));
bank_fsm B (.clk(clk), .rst_n(rst_n), .we(we_b), .re(re_b), .a_or_b(0), .start(start), .compute_state(compute_state), .preload_state(preload_state), .drain_state(drain_state), .tile_done(tile_done), .tiles_complete(tiles_complete), .full(buff_b_full), .empty(buff_b_empty), .bank_switch(buff_b_bs), .active(buff_b_active), .(clr_b));

i_buffer BUFF_A (.clk(clk), .rst_n(rst_n), .we(we_a), .re(re_a), .a_or_b(1), .clr(clr_a), .re_in(re_in_a), .re_valid(re_out_a), .we_in(write_in_a), .we_valid(we_valid_a), .buffer_empty(buff_a_empty), .buffer_full(buff_a_full));
i_buffer BUFF_B (.clk(clk), .rst_n(rst_n), .we(we_b), .re(re_b), .a_or_b(0), .clr(clr_b), .re_in(re_in_b), .re_valid(re_out_b), .we_in(write_in_b), .we_valid(we_valid_b), .buffer_empty(buff_b_empty), .buffer_full(buff_b_full));
    
always_comb begin
    if(buff_a_active) begin
        if(re_valid_a) begin
            output_buff = re_out_a;
            output_buf_valid = re_valid_a;
        end
        if(DMA_in_valid) write_in_b = DMA_in;
    end else if (buff_b_active) begin
        if(re_valid_b) begin
            output_buff = re_out_b;
            output_buf_valid = re_valid_b;
        end
        if(DMA_in_valid) write_in_a = DMA_in;
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
    output logic bank_switch,
    output logic active,
    output logic we,
    output logic re,
    output logic clr);

    typedef enum logic [4:0] {IDLE, PREFILL, PRELOAD, COMPUTE, WAIT_INACTIVE, FILL_INACTIVE, DONE} state_t;
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
        we = 0;
        re = 0;
        active = 0;
        clr = 0;
        bank_swtich = 0;
        case(current_state)
            IDLE: begin
                if(start && a_or_b) begin
                    next_state = PREFILL;
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
                    we = 1;
                end else begin
                    next_state = PRELOAD;
                end
            end
            PRELOAD: begin
                if(!PRELOAD) begin
                    next_state = PRELOAD;
                    we = 1;
                end else begin
                    next_state = COMPUTE;
                end
            end
            COMPUTE : begin
                if(!empty && (compute_state || drain_state)) begin
                    next_state = COMPUTE;
                    re = 1;
                    active = 1; //only 1 bank should be active at a time
                end else if (!tiles_complete) begin
                    bank_switch = 1;
                    next_state = FILL_INACTIVE;
                end else if(tiles_complete) begin
                    next_state = DONE;
                end
            end
            WAIT_INACTIVE: begin
                if(compute_state) begin
                    next_state = FILL_INACTIVE;
                end else begin
                    next_state = WAIT_INACTIVE;
                end
            end
            FILL_INACTIVE: begin
                if(compute_state || drain_state && !full) begin
                    we = 1;
                    next_state = COMPUTE;
                    bank_swtich = 1;
                end
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
    input logic [31:0][3:0] we_in,
    input logic we_valid,
    output logic full,
    output logic empty,
    output logic [31:0][3:0] re_out,
    output logic re_valid);

    logic [7:0][255:0] buff;
    logic [7:0] curr_count;

    assign full = curr_count == 8'd255;
    assign empty = curr_count == 8'd0;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            buff <= '0; // or whatever it is to make everything is 0
            curr_count <= '0;
        end
    end else begin
        if(clr) begin
            curr_count <= 0;
            re_valid <= 0;
        end
        else if(we) begin
            if(we_valid && !full) begin
                buff[curr_count] <= we_in[0];
                buff[curr_count+1] <= we_in[1];
                buff[curr_count+2] <= we_in[2];
                buff[curr_count+3] <= we_in[3];
                curr_count <= curr_count + 4
                re_valid <= 0;
            end
        end
        else if(re) begin //curr_count gets to 255 after filling activation buffer then empties
            if(!empty) begin
                re_out[0] <= buff[curr_count];
                re_out[1] <= buff[curr_count-1];
                re_out[2] <= buff[curr_count-2];
                re_out[3] <= buff[curr_count-3];
                re_valid <= 1;
                curr_count <= curr_count - 4
            end else begin
                re_valid <= 0;
            end
        end
    end


endmodule