(* keep_hierarchy *)
module maxpool(
    input logic clk,
    input logic rst_n,
    input logic signed [3:0][31:0] ins,
    input logic signed [31:0] max_in,
    input logic tile_done,
    input logic valid,
    output logic signed[3:0][7:0] out,
    output logic out_valid
);

logic col_parity, row_parity;
logic [31:0] col_reg, line_buf;

endmodule