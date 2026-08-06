`timescale 1ns/1ps
//
// Testbench for src/tpu_top.sv - the whole chip wired together (DMA, weight
// loader, activation double-buffer, 4x4 PE array, bias/relu/requant).
//
// tpu_top's DMA loading used to be automatic: a dedicated LOAD_DMA top-FSM
// state held prefill_state high for 257 cycles right after a start pulse,
// bridging the gap between DMA needing ~257 cycles to write a 256-byte
// weight tile in and the rest of the chip. DMA has since been split into
// three independent per-bank FSMs (see src/DMA.sv), each with its own start
// pulse and an external `bank` selector, and tpu_top now exposes that
// directly as opcodes: OP_LOAD_WEIGHTS/OP_LOAD_BIAS/OP_LOAD_ACTIVATIONS
// assert weight_fsm_start/bias_fsm_start/activation_fsm_start and set `bank`
// combinationally off opcode_reg. As a result the LOAD_DMA state is now
// dead/unreachable: the top FSM's case statement has no LOAD_DMA branch,
// so IDLE goes straight to PREFILL on OP_COMPUTE. Loading is now the host's
// job, done via the load opcodes before OP_COMPUTE is ever issued - see
// load_weights_via_opcode()/load_bias_via_opcode()/load_activations_via_opcode()
// below and tb/tb_dma.sv, which validates DMA's load/drain/read-back
// correctness in isolation (byte-exact FIFO ordering, correct bank_out
// shapes) against the same three-FSM interface.
//
// NOTE: because weight_buf starts streaming out (weight_re) as soon as its
// own load finishes - independent of tpu_top's state - and weight_loader
// only accepts data while load_fifo_state (tied to PREFILL) is high, any
// draining that happens before OP_COMPUTE is issued (while current_state is
// still IDLE) is silently dropped by weight_loader. The "weight_fifo
// received weight data" check below is a real, meaningful check of whether
// that timing actually lines up under the new decoupled-opcode scheme, not
// an assumption - if it fails, that's the load/PREFILL timing gap showing
// up for real, not a testbench bug.
//
// This testbench covers tpu_top's own top-level control FSM end-to-end
// (IDLE -> PREFILL -> PRELOAD -> COMPUTE -> DRAIN -> FUNCS ->
// {PRELOAD loop | DONE -> IDLE}) plus the full opcode decode surface, and a
// no-X/Z smoke check on the datapath across several tile groups with a
// free-running dummy byte stream on u_in.
//
// State durations, from tpu_top.sv's counters (unchanged by this testbench):
//   PREFILL:  16 cycles (prefill_max)      PRELOAD: 8 cycles (preload_max)
//   COMPUTE:  7 cycles (compute_max)       DRAIN:   4 cycles (drain_max)
//   FUNCS:    3 cycles (funcs_max)         tiles per group: 8 (tiles_max)
//
// tpu_top's interface uses an opcode register: uio_in is latched into
// opcode_reg every cycle, which combinationally derives start (OP_COMPUTE),
// requant_value (OP_LOAD_REQUANT, captured off u_in), start_read_fsm
// (OP_READ_OUTPUTS - forwarded straight to DMA's own start_read_fsm/
// DMA_READ_FSM, see tb/tb_dma.sv for that path's write-in/read-out coverage
// in isolation), and bank + the three load-FSM start pulses (OP_LOAD_*).
// pulse_opcode() drives uio_in for one cycle then lets it settle for one
// more, accounting for opcode_reg's one-cycle registration latency; the
// load_*_via_opcode() tasks instead hold the opcode for the whole load
// window since `bank` must stay valid for every cycle data's being fed in.
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
    localparam byte OP_STATUS = 8'h4;
    localparam byte OP_LOAD_WEIGHTS = 8'h5;
    localparam byte OP_LOAD_ACTIVATIONS = 8'h6;
    localparam byte OP_LOAD_BIAS = 8'h7;

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
    // whatever the opcode triggered (e.g. IDLE -> PREFILL for OP_COMPUTE).
    task automatic pulse_opcode(input byte opcode);
        uio_in = opcode;
        step();
        uio_in = OP_NONE;
        step();
    endtask

    // A single registered cycle of weight_fsm_start/bias_fsm_start/
    // activation_fsm_start is enough to commit DMA's corresponding load FSM
    // to a full load cycle - opcode_reg's own update and the load FSM's
    // IDLE -> LOAD_* transition land on the same edge, so there's no way to
    // assert the opcode just to "peek" at it without it taking effect.
    // Because of that, these tasks pulse the opcode for exactly one cycle
    // (matching pulse_opcode()) and then drop to OP_NONE for the rest of the
    // load window - `bank` stays valid throughout since it's a latch with no
    // OP_NONE branch to disturb it, but weight_fsm_start/etc. correctly drop
    // back to 0, so the load FSM won't see `start` still asserted once it
    // cycles back to IDLE and relaunch a second load (which is exactly what
    // holding the opcode high for the whole window used to cause).
    // `bank` is a registered signal (clocked off opcode_reg), so it lags one
    // extra edge behind weight_fsm_start/etc. (which are still pure
    // combinational off opcode_reg) - it's valid one step later than the
    // pulse that triggers the load FSM, not the same step.
    task automatic load_weights_via_opcode(input bit check_plumbing = 0);
        uio_in = OP_LOAD_WEIGHTS;
        step();
        if (check_plumbing)
            check("OP_LOAD_WEIGHTS asserts weight_fsm_start", dut.weight_fsm_start == 1'b1);
        uio_in = OP_NONE;
        step();
        if (check_plumbing)
            check("OP_LOAD_WEIGHTS routes bank=1 (registered, settles one cycle later)", dut.bank == 4'd1);
        repeat (279) step(); // remaining writes + transition/settle edges, padded
        if (check_plumbing)
            check("weight FSM (inside DMA) finished loading and returned to IDLE",
                  dut.dma.w_fsm.current_state == dut.dma.w_fsm.IDLE);
    endtask

    // DMA.sv routes bank==2 into bias_we_in and bank==3 into act_we_in (see
    // DMA.sv's top always_comb) - bank=2 is what OP_LOAD_BIAS is *supposed*
    // to route.
    task automatic load_bias_via_opcode(input bit check_plumbing = 0);
        uio_in = OP_LOAD_BIAS;
        step();
        if (check_plumbing)
            check("OP_LOAD_BIAS asserts bias_fsm_start", dut.bias_fsm_start == 1'b1);
        uio_in = OP_NONE;
        step();
        if (check_plumbing)
            check("OP_LOAD_BIAS routes bank=2 (DMA.sv's bias bank, registered)", dut.bank == 4'd2);
        repeat (24) step(); // remaining writes + transition/settle edges, padded
        if (check_plumbing)
            check("bias FSM (inside DMA) finished loading and returned to IDLE",
                  dut.dma.b_fsm.current_state == dut.dma.b_fsm.IDLE);
    endtask

    task automatic load_activations_via_opcode(input bit check_plumbing = 0);
        uio_in = OP_LOAD_ACTIVATIONS;
        step();
        if (check_plumbing)
            check("OP_LOAD_ACTIVATIONS asserts activation_fsm_start", dut.activation_fsm_start == 1'b1);
        uio_in = OP_NONE;
        step();
        if (check_plumbing)
            check("OP_LOAD_ACTIVATIONS routes bank=3 (DMA.sv's activation bank, registered)", dut.bank == 4'd3);
        repeat (24) step();
        if (check_plumbing)
            check("activation FSM (inside DMA) finished loading and returned to IDLE",
                  dut.dma.a_fsm.current_state == dut.dma.a_fsm.IDLE);
    endtask

    // Runs all three loads back to back, then a fresh OP_COMPUTE pulse -
    // the sequence every tile group needs now that loading is decoupled
    // from the top FSM's own state sequencing.
    task automatic load_all_and_start();
        load_weights_via_opcode();
        load_bias_via_opcode();
        load_activations_via_opcode();
        pulse_opcode(OP_COMPUTE);
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

    // Runs one full 8-tile group with a fresh load + start pulse and checks
    // the control path holds up: state sequencing, tile_count progression,
    // the DONE->IDLE clear, and no X/Z propagating into product_out/
    // requant_out anywhere in the group.
    task automatic run_group_test(input int trial_num, input int num_trials);
        int n;

        load_all_and_start();
        check($sformatf("group %0d/%0d: start pulse moves IDLE -> PREFILL", trial_num, num_trials),
              dut.current_state == dut.PREFILL);

        wait_for_state(dut.PRELOAD, 30, n);
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
        // 0) Exercise the non-start/non-compute opcodes directly.
        //    OP_LOAD_REQUANT latches whatever's on u_in into requant_value.
        //    OP_READ_OUTPUTS forwards straight into DMA's start_read_fsm ->
        //    DMA_READ_FSM. OP_LOAD_WEIGHTS/OP_LOAD_BIAS/OP_LOAD_ACTIVATIONS
        //    each assert their DMA fsm_start pulse and route `bank` while
        //    held. Full write-in/read-out/load correctness for these paths
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
        // computed_in_max is driven by a free-running cycle counter
        // (read_count == result_full_count>>2, i.e. 64), not by result_buf's
        // actual fill level - it takes 64 cycles regardless of whether
        // there's anything in result_buf, so give it that long to fall back
        // to IDLE before anything else in this test touches DMA.
        repeat (70) step();
        check("DMA's read FSM settled back to IDLE (result_buf was empty)",
              dut.dma.r_fsm.current_state == dut.dma.r_fsm.IDLE);

        // Asserting each load opcode for even one registered cycle commits
        // DMA's corresponding load FSM to a real load (see load_weights_via_
        // opcode()'s header comment), so plumbing checks (bank/fsm_start
        // routing) and the full load-to-completion check happen together
        // per bank via check_plumbing=1, rather than as a separate
        // no-side-effects probe followed by a real load later.
        $display("==== tpu_top: opcode decode + load (OP_LOAD_WEIGHTS / OP_LOAD_BIAS / OP_LOAD_ACTIVATIONS) ====");
        load_weights_via_opcode(1);
        load_bias_via_opcode(1);
        load_activations_via_opcode(1);
        check("FSM still IDLE after all three load opcodes", dut.current_state == dut.IDLE);

        // -----------------------------------------------------------
        // 1) Kick off compute for the tile group just loaded above and
        //    follow the FSM through every state once: IDLE -> PREFILL ->
        //    PRELOAD -> COMPUTE -> DRAIN -> FUNCS.
        // -----------------------------------------------------------
        $display("==== tpu_top: tile group 1 - PREFILL ====");
        pulse_opcode(OP_COMPUTE);
        check("start pulse moves IDLE -> PREFILL", dut.current_state == dut.PREFILL);

        wait_for_state(dut.PRELOAD, 30, n);
        check($sformatf("reached PRELOAD within budget (took %0d cycles)", n), dut.current_state == dut.PRELOAD);
        check("PREFILL ran the full 16 cycles (prefill_count saturated)", dut.prefill_count == 9'd16);

        // Whether weight_fifo actually received data by here depends on
        // whether weight_buf's drain (which starts as soon as its own load
        // finishes, independent of tpu_top's state) happened to overlap
        // with PREFILL's 16-cycle load_fifo_state window - see the header
        // comment. This is a real check of that timing, not an assumption.
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
        // 3) Start a second tile group (fresh loads + start) and confirm it
        //    actually completes a fresh 8 tiles instead of the group-1
        //    leftover state getting in the way (regression check for a
        //    previously-fixed tile_clr latch bug - see git history).
        // -----------------------------------------------------------
        $display("==== tpu_top: tile group 2 (does a fresh 8-tile group actually complete?) ====");
        load_all_and_start();
        check("group 2: start pulse moves IDLE -> PREFILL", dut.current_state == dut.PREFILL);
        wait_for_state(dut.PRELOAD, 30, n);

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
        //    stress the control path over many cycles with fresh loads each
        //    time - confirms nothing hangs and no X/Z creeps into the
        //    datapath.
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
