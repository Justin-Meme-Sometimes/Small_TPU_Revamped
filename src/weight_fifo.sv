module weight_loader    
    #(parameter WIDTH=32,
    parameter ROW_SIZE=3,
    parameter BITWIDTH = 16,
    parameter ADDR_WIDTH = 16,
    parameter MEMORY_WIDTH = 256,
    parameter DEPTH=4,
    parameter VW = ADDR_WIDTH * BITWIDTH)
    (
    input logic clk,
    input logic rst_n,
    input logic [ROW_SIZE-1:0][VW-1:0] read_data,
    input logic start_load_fifo_state,
    input logic load_fifo_state,
    input logic preload_state,
    input logic tiles_complete,
    input logic read_data_valid,
    output logic fifo_full,
    output logic fifo_empty,
    output logic data_valid,
    output logic [ROW_SIZE-1:0][VW-1:0] data_out);

    logic fifo_re, fifo_we;
    typedef enum logic [4:0] {IDLE, LOAD_FIFO, PRELOAD} state_t;
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
        fifo_we = 0;
        fifo_re = 0;
        data_valid = 0;
        case(current_state)
            IDLE: begin
                if(start_load_fifo_state || tiles_complete) begin
                    next_state = LOAD_FIFO;
                    fifo_we = 1;
                end else begin
                    next_state = IDLE;
                end
            end 
            LOAD_FIFO: begin
                if(!fifo_full && load_fifo_state) begin
                    if(read_data_valid) begin
                        fifo_we = 1;
                    end
                    next_state  = LOAD_FIFO;
                end else begin
                    next_state = PRELOAD;
                end
            end
            PRELOAD: begin
                if(!fifo_empty && preload_state) begin
                    data_valid = 1;
                    fifo_re = 1;
                    next_state = PRELOAD;
                end else begin
                    next_state = IDLE;
                end
            end
        endcase
    end

    FIFO weight_fifo(.clock(clk), .reset_n(rst_n), .we(fifo_we), .re(fifo_re), .data_in(read_data), .data_out(data_out),
                    .full(fifo_full), .empty(fifo_empty));

endmodule


module FIFO #(parameter WIDTH=32,
              parameter ROW_SIZE=3,
              parameter DEPTH=4) (
    input logic              clock, reset_n,
    input logic              [ROW_SIZE-1:0][WIDTH-1:0] data_in,
    input logic              we, re,
    output logic             [ROW_SIZE-1:0][WIDTH-1:0] data_out,
    output logic             full, empty);

    logic[WIDTH-1:0][ROW_SIZE-1:0] Q[DEPTH];
    logic [1:0] putPtr, getPtr; // pointers wrap automatically
    logic [3:0] count;
    logic [7:0] first_packet;
    assign empty = (count == 0);
    assign full = (count == 4'd4);

    always_comb begin
      if(!(empty)) begin
        data_out = {Q[getPtr]};
      end
    end

    always_ff @(posedge clock, negedge reset_n) begin
    if (!reset_n) begin
      count <= '0;
      getPtr <= 0;
      putPtr <= 0;
    end
    if(we && re && (!empty) && (!full)) begin   // We want to read and write @ the same time.
      Q[putPtr] <= data_in;                     
      getPtr <= getPtr + 1;
      putPtr <= putPtr + 1;
    end
    else if(re && !(empty)) begin              // We just want to read and update counters.
      getPtr <= getPtr + 1;                
      count <= count - 1;
    end
    else if (we && !(full)) begin             // We just want to read only here.
      Q[putPtr] <= data_in; 
      putPtr <= putPtr + 1;
      count <= count + 1;
    end
end

endmodule : FIFO
