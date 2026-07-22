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

    // Deterministic per-(tile, column) "hash" instead of a plain linear
    // walk, so a run of many tiles looks like a sequence of distinct random
    // matrices rather than the same shape drifting by 1 each time. Kept as
    // a plain function (not $random) so a testbench can independently
    // recompute the exact expected value from tile_idx alone - see
    // tb_tpu_top.sv's mirrored weight_lane/act_lane functions.
    function automatic logic [7:0] weight_lane(input logic [7:0] idx, input logic [1:0] col);
        weight_lane = (idx * 8'd41) + 8'd10 + (col * 8'd15);
    endfunction

    function automatic logic [3:0] act_lane(input logic [7:0] idx, input logic [1:0] col);
        act_lane = (idx[3:0] * 4'd7) + 4'd1 + (col * 4'd3);
    endfunction

    assign weight_bank_out_valid = 1'b1;
    assign weight_bank_out[0] = weight_lane(tile_idx, 2'd0);
    assign weight_bank_out[1] = weight_lane(tile_idx, 2'd1);
    assign weight_bank_out[2] = weight_lane(tile_idx, 2'd2);
    assign weight_bank_out[3] = weight_lane(tile_idx, 2'd3);

    // activation_buffer's i_buffer only ever consumes elements [0:3] of a
    // write; [4:31] are padding to satisfy the port width and are never
    // read downstream.
    assign activation_bank_out_valid = 1'b1;
    assign activation_bank_out[0] = act_lane(tile_idx, 2'd0);
    assign activation_bank_out[1] = act_lane(tile_idx, 2'd1);
    assign activation_bank_out[2] = act_lane(tile_idx, 2'd2);
    assign activation_bank_out[3] = act_lane(tile_idx, 2'd3);

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
