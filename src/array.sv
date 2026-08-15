module PE_array(
    input logic clk,
    input logic rst_n,
    input logic preload_state_start,
    input logic compute_state_start,
    input logic clr_state,
    input logic tile_done,
    input logic drain_state,
    input logic [3:0][7:0] weight_array,
    input logic drain_state_start,
    input logic [3:0] activation_valid,
    input logic weight_data_valid,
    input logic [3:0][7:0] activation_array,
    output logic [3:0][31:0] product_array,
    output logic output_valid
);

    logic [15:0][31:0] pe_down_out;
    logic [15:0][7:0] pe_right_out;
    logic [15:0] accum_out_valid;
    logic [15:0] right_out_valid;
    logic clr;

    assign clr = clr_state ? 1 : 0;

    logic [3:0][7:0] activations_skewed_out;
    logic [3:0] activations_skewed_valid_out;

    skew_buffer skew_buff_1 (
        .clk(clk),
        .rst_n(rst_n),
        .clr(clr_state || tile_done),
        .activations_in(activation_array),
        .activations_in_valid(activation_valid),
        .activations_skewed_out(activations_skewed_out),
        .activations_skewed_valid_out(activations_skewed_valid_out)
    );

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
    PE pe_0_0 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start), .a(activations_skewed_out[0]),     .a_valid(activations_skewed_valid_out[0]), .b(weight_array[0]), .clr(clr_state), .tile_done(tile_done), .accum_in('0),   .accum_in_valid(1'd1),  .accum_out_valid(accum_out_valid[0]), .down_out(pe_down_out[0]), .right_out(pe_right_out[0]),  .right_out_valid(right_out_valid[0]));
    PE pe_0_1 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start), .a(pe_right_out[0]),   .a_valid(right_out_valid[0]),.b(weight_array[1]), .clr(clr_state), .tile_done(tile_done), .accum_in('0),   .accum_in_valid(1'd1),   .accum_out_valid(accum_out_valid[1]), .down_out(pe_down_out[1]), .right_out(pe_right_out[1]),   .right_out_valid(right_out_valid[1]));
    PE pe_0_2 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start), .a(pe_right_out[1]),   .a_valid(right_out_valid[1]),.b(weight_array[2]), .clr(clr_state), .tile_done(tile_done), .accum_in('0),   .accum_in_valid(1'd1),   .accum_out_valid(accum_out_valid[2]), .down_out(pe_down_out[2]), .right_out(pe_right_out[2]),   .right_out_valid(right_out_valid[2]));
    PE pe_0_3 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start), .a(pe_right_out[2]),   .a_valid(right_out_valid[2]), .b(weight_array[3]), .clr(clr_state), .tile_done(tile_done), .accum_in('0),  .accum_in_valid(1'd1),  .accum_out_valid(accum_out_valid[3]), .down_out(pe_down_out[3]), .right_out(pe_right_out[3]),  .right_out_valid(right_out_valid[3]));

    //Row 1
    PE pe_1_0 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(activations_skewed_out[1]),    .a_valid(activations_skewed_valid_out[1]), .b(pe_down_out[0]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[0]), .accum_in_valid(accum_out_valid[0]), .accum_out_valid(accum_out_valid[4]), .down_out(pe_down_out[4]), .right_out(pe_right_out[4]), .right_out_valid(right_out_valid[4]));
    PE pe_1_1 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(pe_right_out[4]),  .a_valid(right_out_valid[4]),.b(pe_down_out[1]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[1]), .accum_in_valid(accum_out_valid[1]), .accum_out_valid(accum_out_valid[5]), .down_out(pe_down_out[5]), .right_out(pe_right_out[5]),  .right_out_valid(right_out_valid[5]));
    PE pe_1_2 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(pe_right_out[5]),  .a_valid(right_out_valid[5]),.b(pe_down_out[2]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[2]), .accum_in_valid(accum_out_valid[2]), .accum_out_valid(accum_out_valid[6]), .down_out(pe_down_out[6]), .right_out(pe_right_out[6]),  .right_out_valid(right_out_valid[6]));
    PE pe_1_3 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(pe_right_out[6]),  .a_valid(right_out_valid[6]),.b(pe_down_out[3]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[3]), .accum_in_valid(accum_out_valid[3]), .accum_out_valid(accum_out_valid[7]), .down_out(pe_down_out[7]), .right_out(pe_right_out[7]),  .right_out_valid(right_out_valid[7]));

    //Row 2
    PE pe_2_0 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(activations_skewed_out[2]),    .a_valid(activations_skewed_valid_out[2]),.b(pe_down_out[4]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[4]), .accum_in_valid(accum_out_valid[4]), .accum_out_valid(accum_out_valid[8]), .down_out(pe_down_out[8]), .right_out(pe_right_out[8]),   .right_out_valid(right_out_valid[8]));
    PE pe_2_1 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(pe_right_out[8]),  .a_valid(right_out_valid[8]),.b(pe_down_out[5]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[5]), .accum_in_valid(accum_out_valid[5]), .accum_out_valid(accum_out_valid[9]), .down_out(pe_down_out[9]), .right_out(pe_right_out[9]),   .right_out_valid(right_out_valid[9]));
    PE pe_2_2 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(pe_right_out[9]),  .a_valid(right_out_valid[9]),.b(pe_down_out[6]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[6]), .accum_in_valid(accum_out_valid[6]), .accum_out_valid(accum_out_valid[10]), .down_out(pe_down_out[10]), .right_out(pe_right_out[10]), .right_out_valid(right_out_valid[10]));
    PE pe_2_3 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(pe_right_out[10]), .a_valid(right_out_valid[10]),.b(pe_down_out[7]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[7]), .accum_in_valid(accum_out_valid[7]), .accum_out_valid(accum_out_valid[11]), .down_out(pe_down_out[11]), .right_out(pe_right_out[11]), .right_out_valid(right_out_valid[11]));

    //Row 3
    PE pe_3_0 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(activations_skewed_out[3]),    .a_valid(activations_skewed_valid_out[3]), .b(pe_down_out[8]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[8]), .accum_in_valid(accum_out_valid[8]), .accum_out_valid(accum_out_valid[12]), .down_out(pe_down_out[12]), .right_out(pe_right_out[12]),   .right_out_valid(right_out_valid[12]));
    PE pe_3_1 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(pe_right_out[12]), .a_valid(right_out_valid[12]), .b(pe_down_out[9]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[9]), .accum_in_valid(accum_out_valid[9]), .accum_out_valid(accum_out_valid[13]), .down_out(pe_down_out[13]), .right_out(pe_right_out[13]),   .right_out_valid(right_out_valid[13]));
    PE pe_3_2 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(pe_right_out[13]), .a_valid(right_out_valid[13]), .b(pe_down_out[10]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[10]), .accum_in_valid(accum_out_valid[10]), .accum_out_valid(accum_out_valid[14]), .down_out(pe_down_out[14]), .right_out(pe_right_out[14]), .right_out_valid(right_out_valid[14]));
    PE pe_3_3 (.clk(clk), .rst_n(rst_n), .preload(preload_state_start), .compute_en(compute_state_start),  .a(pe_right_out[14]), .a_valid(right_out_valid[14]), .b(pe_down_out[11]), .clr(clr_state), .tile_done(tile_done), .accum_in(pe_down_out[11]), .accum_in_valid(accum_out_valid[11]), .accum_out_valid(accum_out_valid[15]), .down_out(pe_down_out[15]), .right_out(pe_right_out[15]), .right_out_valid(right_out_valid[15]));

    logic [3:0][31:0] product_array_raw;
    logic [3:0] product_array_valid;

    assign product_array_raw[0] = pe_down_out[12];
    assign product_array_raw[1] = pe_down_out[13];
    assign product_array_raw[2] = pe_down_out[14];
    assign product_array_raw[3] = pe_down_out[15];

    assign product_array_valid[0] = accum_out_valid[12];
    assign product_array_valid[1] = accum_out_valid[13];
    assign product_array_valid[2] = accum_out_valid[14];
    assign product_array_valid[3] = accum_out_valid[15];

    deskew_buffer deskew_buff_1 (
        .clk(clk),
        .rst_n(rst_n),
        .clr(clr_state || tile_done),
        .prod_in(product_array_raw),
        .prod_in_valid(product_array_valid),
        .output_row(product_array),
        .output_valid(output_valid)
    );

endmodule

module skew_buffer(
    input logic clk,
    input logic rst_n,
    input logic clr,
    input logic [3:0][7:0] activations_in,
    input logic [3:0] activations_in_valid,
    output logic [3:0][7:0] activations_skewed_out,
    output logic [3:0] activations_skewed_valid_out
);

    logic row_1_valid;
    logic [1:0] row_2_valid;
    logic [2:0] row_3_valid;
    logic [7:0] row_1;
    logic [1:0][7:0] row_2;
    logic [2:0][7:0] row_3;
   

    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n) begin
            row_1 <= 0; row_1_valid <= 0;
        end else if (clr) begin
            row_1 <= 0; row_1_valid <= 0;
        end else begin
            row_1 <= activations_in[1];
            row_1_valid <= activations_in_valid[1];
        end
    end

    
    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n) begin
            row_2 <= '0; row_2_valid <= '0;
        end else if (clr) begin
            row_2 <= '0; row_2_valid <= '0;
        end else begin
            row_2[1] <= row_2[0];             
            row_2_valid[1] <= row_2_valid[0];

            row_2[0] <= activations_in[2];    
            row_2_valid[0] <= activations_in_valid[2];
        end
    end


    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n) begin
            row_3 <= '0; row_3_valid <= '0;
        end else if (clr) begin
            row_3 <= '0; row_3_valid <= '0;
        end else begin
            row_3[2] <= row_3[1];             
            row_3_valid[2] <= row_3_valid[1];

            row_3[1] <= row_3[0];             
            row_3_valid[1] <= row_3_valid[0];

            row_3[0] <= activations_in[3];    
            row_3_valid[0] <= activations_in_valid[3];
        end
    end

    assign activations_skewed_out[0] = activations_in[0];
    assign activations_skewed_out[1] = row_1;
    assign activations_skewed_out[2] = row_2[1];
    assign activations_skewed_out[3] = row_3[2];

    assign activations_skewed_valid_out[0] = activations_in_valid[0];
    assign activations_skewed_valid_out[1] = row_1_valid;
    assign activations_skewed_valid_out[2] = row_2_valid[1];
    assign activations_skewed_valid_out[3] = row_3_valid[2];
endmodule

module deskew_buffer(
    input logic clk,
    input logic rst_n,
    input logic clr,
    input logic [3:0][31:0] prod_in,
    input logic [3:0] prod_in_valid,
    output logic [3:0][31:0] output_row,
    output logic output_valid
);
    logic [3:0][3:0][31:0] buffer;
    logic [3:0][3:0] buffer_valid;

    logic [3:0] col0_cnt, col1_cnt, col2_cnt, col3_cnt;

    counter_pe cnt_0 (.clk(clk), .rst_n(rst_n), .en(prod_in_valid[0]), .clr(clr), .out(col0_cnt)); 
    counter_pe cnt_1 (.clk(clk), .rst_n(rst_n), .en(prod_in_valid[1]), .clr(clr), .out(col1_cnt));
    counter_pe cnt_2 (.clk(clk), .rst_n(rst_n), .en(prod_in_valid[2]), .clr(clr), .out(col2_cnt));
    counter_pe cnt_3 (.clk(clk), .rst_n(rst_n), .en(prod_in_valid[3]), .clr(clr), .out(col3_cnt));

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n)begin
            for(int i = 0; i < 4; i++) begin
                for(int j = 0; j < 4; j++) begin
                buffer[i][j] <= '0;
                end
            end 
        end else begin
            if(clr) begin
                for(int i = 0; i < 4; i++) begin
                    for(int j = 0; j < 4; j++) begin
                        buffer[i][j] <= '0;
                    end
                end 
            end else begin
                if(prod_in_valid[0]) begin
                    buffer[0][col0_cnt] <= prod_in[0];
                    buffer_valid[0][col0_cnt] <= prod_in_valid[0];
                end
                if(prod_in_valid[1]) begin
                    buffer[1][col1_cnt] <= prod_in[1];
                    buffer_valid[1][col1_cnt] <= prod_in_valid[1];
                end
                if(prod_in_valid[2]) begin
                    buffer[2][col2_cnt] <= prod_in[2];
                    buffer_valid[2][col2_cnt] <= prod_in_valid[2];
                end
                if(prod_in_valid[3]) begin
                    buffer[3][col3_cnt] <= prod_in[3];
                    buffer_valid[3][col3_cnt] <= prod_in_valid[3];
                end
            end
        end
    end

    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n) begin
            output_valid <= 0;
        end else if (clr) begin
            output_valid <= 0;
        end else if (prod_in_valid[3]) begin
            output_row[0] <= buffer[0][col3_cnt];
            output_row[1] <= buffer[1][col3_cnt];
            output_row[2] <= buffer[2][col3_cnt];
            output_row[3] <= prod_in[3];  
            output_valid <= 1;
        end else begin
            output_valid <= 0;
        end
    end

endmodule


module counter_pe
(input logic clk,
 input logic rst_n,
 input logic en,
 input logic clr,
 output logic [3:0] out);

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

