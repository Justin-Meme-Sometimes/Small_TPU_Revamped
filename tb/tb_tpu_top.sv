`timescale 1ns/1ps
//
// Testbench for src/tpu_top.sv - the whole chip wired together (DMA, weight
// loader, activation double-buffer, 4x4 PE array, bias/relu/requant).
//
// src/DMA.sv used to be a "dummy DMA" that handed out canned weight/
// activation data instantly, with no real backing memory. It's since been
// replaced with a real DMA (src/DMA.sv's DMA_FSM + j_buffer) that loads a
// tile byte-by-byte over u_in, gated by prefill_state - see tb/tb_dma.sv,
// which validates that DMA in isolation (256 weight bytes, 16 bias bytes,
// 16 activation bytes, correct FIFO ordering, correct bank_out shapes).
//
// The top-level FSM now has a dedicated LOAD_DMA state ahead of PREFILL,
// added specifically to close the timing gap between the real DMA (needs
// ~257 cycles to WRITE a 256-byte weight tile in over u_in, one byte/cycle)
// and the rest of the chip: LOAD_DMA holds prefill_state (DMA's start
// trigger) high for exactly those 257 cycles, then hands off to PREFILL,
// during which weight_bank_out_valid pulses (DMA streaming the tile back
// out) and weight_loader's load_fifo_state window (also tied to PREFILL)
// now actually overlap - see tb/tb_dma.sv for DMA validated in isolation
// (256 weight bytes, 16 bias bytes, 16 activation bytes, FIFO ordering,
// bank_out shapes).
//
// This testbench covers tpu_top's own top-level control FSM end-to-end
// (IDLE -> LOAD_DMA -> PREFILL -> PRELOAD -> COMPUTE -> DRAIN -> FUNCS ->
// {PRELOAD loop | DONE -> IDLE}) plus whether weight data actually makes it
// into weight_fifo in time now that LOAD_DMA/PREFILL's timing lines up with
// DMA - and a no-X/Z smoke check on the datapath across several tile groups
// with a free-running dummy byte stream on u_in.
//
// State durations, from tpu_top.sv's counters (unchanged by this testbench):
//   LOAD_DMA: 257 cycles (load_dma_max)   PREFILL: 16 cycles (prefill_max)
//   PRELOAD:  8 cycles (preload_max)      COMPUTE: 7 cycles (compute_max)
//   DRAIN:    4 cycles (drain_max)        FUNCS:   3 cycles (funcs_max)
//   tiles per group: 8 (tiles_max)
//
// tpu_top's interface has since changed from a direct `start` pin to an
// opcode register: uio_in is latched into opcode_reg every cycle, which
// combinationally derives start (OP_COMPUTE), requant_value (OP_LOAD_REQUANT,
// captured off u_in), and start_read_fsm (OP_READ_OUTPUTS - forwarded
// straight to DMA's own start_read_fsm/DMA_READ_FSM, see tb/tb_dma.sv for
// that path's write-in/read-out coverage in isolation). pulse_opcode() below
// drives uio_in for one cycle to replicate the old single-cycle start pulse,
// accounting for opcode_reg's one-cycle registration latency.
//
module tb_tpu_top;

    int errors = 0;
    int checks = 0;

    task automatic check(string name, logic cond);
        checks++;
        if (!cond) begin
            errors++;
            $display("[FAIL] %s", name);
        end else begin
            $display("[PASS] %s", name);
        end
    endtask

    logic clk = 0;
    always #5 clk = ~clk;

    localparam byte OP_NONE = 8'h0;
    localparam byte OP_COMPUTE = 8'h1;
    localparam byte OP_LOAD_REQUANT = 8'h2;
    localparam byte OP_READ_OUTPUTS = 8'h3;

    logic rst_n;
    logic [7:0] u_in;
    logic [7:0] uio_in;
    logic [7:0] uio_out;
    logic [7:0] u_out;

    // Free-running dummy byte stream so DMA has something to chew on
    // whenever it happens to be capturing - exact values don't matter here
    // (tb_dma.sv already covers byte-exact load/replay correctness), this
    // just keeps u_in from sitting at a constant value for the whole run.
    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n) u_in <= 8'd0;
        else u_in <= u_in + 8'd1;
    end

    tpu_top dut (
        .clk(clk), .rst_n(rst_n),
        .u_in(u_in), .uio_in(uio_in), .uio_out(uio_out), .u_out(u_out)
    );

    // Waveform dump for viewing in GTKWave. A no-op unless this testbench
    // is built with --trace-fst (or --trace for VCD) - run_all.sh doesn't
    // pass that flag, so this has no effect/cost on the normal test suite.
    initial begin
        $dumpfile("tb_tpu_top.vcd");
        $dumpvars(0, tb_tpu_top);
    end

    task automatic reset_dut();
        rst_n = 0; uio_in = OP_NONE;
        @(posedge clk); @(posedge clk);
        rst_n = 1;
        @(posedge clk); #1;
    endtask

    task automatic step();
        @(posedge clk); #1;
    endtask

    // Presents `opcode` on uio_in for one cycle, then holds OP_NONE for one
    // more so opcode_reg's one-cycle registration latency has fully played
    // out - by the time this returns, current_state already reflects
    // whatever the opcode triggered (e.g. IDLE -> LOAD_DMA for OP_COMPUTE),
    // matching the old single-cycle direct `start` pin's call-site timing.
    task automatic pulse_opcode(input byte opcode);
        uio_in = opcode;
        step();
        uio_in = OP_NONE;
        step();
    endtask

    // Polls dut.current_state until it equals `target` or `max_cycles`
    // elapse. Used throughout instead of hand-derived cycle counts because
    // the FSM's real per-state duration depends on several sub-FSMs
    // (weight_loader, activation_buffer's bank_fsm) racing each other, not
    // just the top-level counters in isolation.
    task automatic wait_for_state(input logic [4:0] target, input int max_cycles, output int cycles_taken);
        cycles_taken = 0;
        while (dut.current_state !== target && cycles_taken < max_cycles) begin
            step();
            cycles_taken++;
        end
    endtask

    // Runs one full 8-tile group with a fresh `start` pulse and checks the
    // control path holds up: state sequencing, tile_count progression, the
    // DONE->IDLE clear, and no X/Z propagating into product_out/requant_out
    // anywhere in the group.
    task automatic run_group_test(input int trial_num, input int num_trials);
        int n;

        pulse_opcode(OP_COMPUTE);
        check($sformatf("group %0d/%0d: start pulse moves IDLE -> LOAD_DMA", trial_num, num_trials),
              dut.current_state == dut.LOAD_DMA);

        wait_for_state(dut.PRELOAD, 300, n);
        check($sformatf("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)", trial_num, num_trials, n),
              dut.current_state == dut.PRELOAD);

        for (int t = 1; t <= 8; t++) begin
            wait_for_state(dut.COMPUTE, 20, n);
            check($sformatf("group %0d/%0d tile %0d: reached COMPUTE", trial_num, num_trials, t),
                  dut.current_state == dut.COMPUTE);
            wait_for_state(dut.DRAIN, 20, n);
            check($sformatf("group %0d/%0d tile %0d: tile_count advanced to %0d on the COMPUTE->DRAIN edge",
                             trial_num, num_trials, t, t),
                  dut.tile_count == t);
            wait_for_state(dut.FUNCS, 20, n);
            check($sformatf("group %0d/%0d tile %0d: no X/Z in requant_out", trial_num, num_trials, t),
                  !$isunknown(dut.requant_out));
            if (t < 8) begin
                wait_for_state(dut.PRELOAD, 20, n);
                check($sformatf("group %0d/%0d tile %0d: FUNCS looped back to PRELOAD", trial_num, num_trials, t),
                      dut.current_state == dut.PRELOAD);
            end
        end

        wait_for_state(dut.IDLE, 20, n);
        check($sformatf("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                         trial_num, num_trials, n),
              dut.current_state == dut.IDLE);
        check($sformatf("group %0d/%0d: DONE's tile_clr reset tile_count back to 0", trial_num, num_trials),
              dut.tile_count == 8'd0);
    endtask

    initial begin
        int n;

        reset_dut();
        $display("==== tpu_top: reset ====");
        check("reset: current_state is IDLE", dut.current_state == dut.IDLE);
        check("reset: weight fifo empty", dut.weight_fifo_empty == 1'b1);
        check("reset: tile_count is 0", dut.tile_count == 8'd0);

        // -----------------------------------------------------------
        // 0) Exercise the two non-start opcodes directly: OP_LOAD_REQUANT
        //    latches whatever's on u_in into requant_value, and
        //    OP_READ_OUTPUTS forwards straight into DMA's start_read_fsm ->
        //    DMA_READ_FSM. Full write-in/read-out correctness for that path
        //    (real data, FIFO order, completion) is covered by tb/tb_dma.sv
        //    in isolation - this just checks tpu_top's opcode plumbing.
        // -----------------------------------------------------------
        $display("==== tpu_top: opcode decode (OP_LOAD_REQUANT / OP_READ_OUTPUTS) ====");
        begin
            byte sampled_u_in;
            uio_in = OP_LOAD_REQUANT;
            step();
            sampled_u_in = u_in;
            uio_in = OP_NONE;
            step();
            check("OP_LOAD_REQUANT latches u_in into requant_value", dut.requant_value == sampled_u_in);
        end
        check("FSM still IDLE (OP_LOAD_REQUANT doesn't trigger start)", dut.current_state == dut.IDLE);

        uio_in = OP_READ_OUTPUTS;
        step();
        check("OP_READ_OUTPUTS asserts start_read_fsm", dut.start_read_fsm == 1'b1);
        uio_in = OP_NONE;
        step();
        check("start_read_fsm forwarded into DMA's read FSM (left IDLE)",
              dut.dma.r_fsm.current_state == dut.dma.r_fsm.READ_RESULTS);

        // -----------------------------------------------------------
        // 1) Kick off tile group 1 and follow the FSM through every state
        //    once: IDLE -> PREFILL -> PRELOAD -> COMPUTE -> DRAIN -> FUNCS.
        // -----------------------------------------------------------
        $display("==== tpu_top: tile group 1 - LOAD_DMA ====");
        pulse_opcode(OP_COMPUTE);
        check("start pulse moves IDLE -> LOAD_DMA", dut.current_state == dut.LOAD_DMA);

        wait_for_state(dut.PREFILL, 270, n);
        check($sformatf("reached PREFILL within budget (took %0d cycles)", n), dut.current_state == dut.PREFILL);
        check("LOAD_DMA ran the full 257 cycles (load_dma_count saturated)", dut.load_dma_count == 9'd257);

        $display("==== tpu_top: tile group 1 - PREFILL ====");
        wait_for_state(dut.PRELOAD, 20, n);
        check($sformatf("reached PRELOAD within budget (took %0d cycles)", n), dut.current_state == dut.PRELOAD);
        check("PREFILL ran the full 16 cycles (prefill_count saturated)", dut.prefill_count == 9'd16);

        // LOAD_DMA holds prefill_state for exactly the 257 cycles DMA needs
        // to WRITE the weight tile in; weight_bank_out_valid starts pulsing
        // right as LOAD_DMA hands off to PREFILL, which is also exactly
        // when weight_loader's load_fifo_state window (tied to PREFILL)
        // opens, so weight_fifo should be non-empty right as PRELOAD begins.
        // (weight_loader immediately starts draining it back out into
        // PE_array during PRELOAD - that's its job - so checking
        // weight_fifo_empty later, e.g. at COMPUTE, would check the wrong
        // thing: empty-by-then is the correct, intended behavior.)
        check("weight_fifo received weight data during PREFILL (non-empty right as PRELOAD begins)",
              dut.weight_fifo_empty == 1'b0);

        wait_for_state(dut.COMPUTE, 20, n);
        check($sformatf("reached COMPUTE within budget (took %0d cycles)", n), dut.current_state == dut.COMPUTE);
        check("no X/Z in product_out entering COMPUTE", !$isunknown(dut.product_out));

        $display("==== tpu_top: tile group 1 - COMPUTE -> DRAIN ====");
        wait_for_state(dut.DRAIN, 20, n);
        check($sformatf("reached DRAIN within budget (took %0d cycles)", n), dut.current_state == dut.DRAIN);
        check("COMPUTE ran the full 7 cycles (compute_count saturated)", dut.compute_count == 8'd7);
        check("tile_done pulsed on the COMPUTE->DRAIN edge (tile_count advanced to 1)", dut.tile_count == 8'd1);

        $display("==== tpu_top: tile group 1 - DRAIN -> FUNCS ====");
        wait_for_state(dut.FUNCS, 20, n);
        check($sformatf("reached FUNCS within budget (took %0d cycles)", n), dut.current_state == dut.FUNCS);
        check("DRAIN ran the full 4 cycles (drain_count saturated)", dut.drain_count == 8'd4);
        check("no X/Z in requant_out during drain/funcs window", !$isunknown(dut.requant_out));

        $display("==== tpu_top: tile group 1 - FUNCS -> back to PRELOAD (tile 1 of 8, not yet tile_complete) ====");
        wait_for_state(dut.PRELOAD, 20, n);
        check($sformatf("FUNCS looped back to PRELOAD for tile 2/8 (took %0d cycles)", n), dut.current_state == dut.PRELOAD);
        check("FUNCS ran the full 3 cycles (funcs_count saturated)", dut.funcs_count == 8'd3);

        // -----------------------------------------------------------
        // 2) Run the remaining 7 tiles of this group (tiles_max=8 total)
        //    and confirm the FSM actually reaches tiles_complete and
        //    returns to IDLE, rather than looping forever.
        // -----------------------------------------------------------
        $display("==== tpu_top: running tiles 2-8 to reach tiles_complete ====");
        for (int t = 2; t <= 8; t++) begin
            wait_for_state(dut.COMPUTE, 20, n);
            wait_for_state(dut.DRAIN, 20, n);
            check($sformatf("tile %0d/8: tile_count advanced correctly", t), dut.tile_count == t);
            wait_for_state(dut.FUNCS, 20, n);
            if (t < 8) begin
                wait_for_state(dut.PRELOAD, 20, n);
                check($sformatf("tile %0d/8: FUNCS looped back to PRELOAD", t), dut.current_state == dut.PRELOAD);
            end
        end
        wait_for_state(dut.IDLE, 20, n);
        check($sformatf("after 8 tiles: FUNCS saw tile_complete and returned to IDLE (took %0d cycles)", n),
              dut.current_state == dut.IDLE);
        check("DONE's tile_clr reset tile_count back to 0 on the way to IDLE", dut.tile_count == 8'd0);

        // -----------------------------------------------------------
        // 3) Start a second tile group and confirm it actually completes a
        //    fresh 8 tiles instead of the group-1 leftover state getting in
        //    the way (regression check for a previously-fixed tile_clr
        //    latch bug - see git history).
        // -----------------------------------------------------------
        $display("==== tpu_top: tile group 2 (does a fresh 8-tile group actually complete?) ====");
        pulse_opcode(OP_COMPUTE);
        check("group 2: start pulse moves IDLE -> LOAD_DMA", dut.current_state == dut.LOAD_DMA);
        wait_for_state(dut.PRELOAD, 300, n);

        for (int t = 1; t <= 8; t++) begin
            wait_for_state(dut.COMPUTE, 20, n);
            wait_for_state(dut.DRAIN, 20, n);
            check($sformatf("group 2 tile %0d: tile_count advanced correctly", t), dut.tile_count == t);
            wait_for_state(dut.FUNCS, 20, n);
            if (t < 8) wait_for_state(dut.PRELOAD, 20, n);
        end
        wait_for_state(dut.IDLE, 20, n);
        check($sformatf("group 2 also reached tiles_complete and returned to IDLE (took %0d cycles)", n),
              dut.current_state == dut.IDLE);
        check("group 2: tile_count cleared back to 0 again", dut.tile_count == 8'd0);

        // -----------------------------------------------------------
        // 4) A handful more full-chip tile groups back to back, purely to
        //    stress the control path over many cycles with the DMA still
        //    quietly loading/draining in the background - confirms nothing
        //    hangs and no X/Z creeps into the datapath once DMA's load
        //    eventually does catch up mid-stream.
        // -----------------------------------------------------------
        $display("==== tpu_top: 5 more back-to-back tile groups (control-path stress) ====");
        for (int trial = 1; trial <= 5; trial++) begin
            run_group_test(trial, 5);
        end

        $display("==== SUMMARY ====");
        $display("tpu_top: %0d/%0d checks passed", checks - errors, checks);
        $finish;
    end

endmodule
