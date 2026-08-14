// Minimal cycle-driven Verilator harness for tpu_top.
//
// Protocol: reads lines of "<rst_n> <u_in> <uio_in>" (decimal) from stdin,
// one per clock cycle. For each line: drives those values, clocks the DUT
// once (posedge, then settle), and prints "<u_out> <uio_out>" (decimal) to
// stdout. This lets a Python driver own all stimulus sequencing/timing
// while the harness just replays it cycle-exactly against the real RTL.
#include <cstdio>
#include <verilated.h>
#include "Vtpu_top.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vtpu_top *top = new Vtpu_top;

    char line[256];
    while (std::fgets(line, sizeof(line), stdin)) {
        int rst_n, u_in, uio_in;
        if (std::sscanf(line, "%d %d %d", &rst_n, &u_in, &uio_in) != 3) continue;

        top->rst_n = rst_n;
        top->u_in = (uint8_t)u_in;
        top->uio_in = (uint8_t)uio_in;

        top->clk = 0;
        top->eval();
        top->clk = 1;
        top->eval();

        std::printf("%d %d\n", (int)top->u_out, (int)top->uio_out);
    }

    top->final();
    delete top;
    return 0;
}
