module DMA (
    input logic clk,
    input logic rst_n,
    input logic [2:0] bank,
    input logic compute_state,
    input logic preload_state,
    input logic drain_state,
    input logic [3:0][7:0] computed_bank_in,
    input logic computed_bank_in_valid,
    output logic [3:0][7:0] weight_bank_out,
    output logic weight_bank_out_valid,
    output logic [31:0][3:0] activation_bank_out,
    output logic activation_bank_out_valid);

    // Dummy DMA stand-in: no backing memory, no bank arbitration, no
    // backpressure handling - just canned data with correctly-timed valid
    // signals so tpu_top's control path and datapath can be exercised
    // end-to-end before the real memory-mapped DMA exists. weight_loader
    // and activation_buffer already self-gate writes on their own
    // full/empty flags, so it's safe to present valid unconditionally
    // every cycle.
    //
    // The weight row and activation tile are static within a tile and
    // step to a new, distinguishable value each time preload_state pulses
    // (i.e. once per tile), so a testbench can confirm consecutive tiles
    // actually see different data rather than a frozen value.

    logic [7:0] tile_idx;
    logic preload_state_d;

    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n) begin
            tile_idx <= '0;
            preload_state_d <= 1'b0;
        end else begin
            preload_state_d <= preload_state;
            if (preload_state && !preload_state_d) begin
                tile_idx <= tile_idx + 1'b1;
            end
        end
    end

    assign weight_bank_out_valid = 1'b1;
    assign weight_bank_out[0] = 8'd10 + tile_idx;
    assign weight_bank_out[1] = 8'd20 + tile_idx;
    assign weight_bank_out[2] = 8'd30 + tile_idx;
    assign weight_bank_out[3] = 8'd40 + tile_idx;

    // activation_buffer's i_buffer only ever consumes elements [0:3] of a
    // write; [4:31] are padding to satisfy the port width and are never
    // read downstream.
    assign activation_bank_out_valid = 1'b1;
    assign activation_bank_out[0] = 4'd1 + tile_idx[3:0];
    assign activation_bank_out[1] = 4'd2 + tile_idx[3:0];
    assign activation_bank_out[2] = 4'd3 + tile_idx[3:0];
    assign activation_bank_out[3] = 4'd4 + tile_idx[3:0];

    genvar gi;
    generate
        for (gi = 4; gi < 32; gi++) begin : PAD
            assign activation_bank_out[gi] = 4'd0;
        end
    endgenerate

    // Stand-in for "writing results back to memory": just latch whatever
    // requant hands back so a testbench can inspect it hierarchically
    // (dma.captured / dma.capture_count) instead of implementing a real
    // bank-addressed store.
    logic [3:0][7:0] captured [0:31];
    logic [4:0] capture_ptr;
    logic [31:0] capture_count;

    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n) begin
            capture_ptr <= '0;
            capture_count <= '0;
        end else if (computed_bank_in_valid) begin
            captured[capture_ptr] <= computed_bank_in;
            capture_ptr <= capture_ptr + 1'b1;
            capture_count <= capture_count + 1'b1;
        end
    end

endmodule
