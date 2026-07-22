// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_tpu_top__Syms.h"


VL_ATTR_COLD void Vtb_tpu_top___024root__trace_init_sub__TOP__0(Vtb_tpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_tpu_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2,0,"checks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tpu_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"tpu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"op_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"last_group_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tpu_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"tpu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"op_code",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"start_fifo_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"load_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"weight_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"weight_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"weight_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"weight_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"weight_bank_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+393,0,"weight_bank_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"activation_buff_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"compute_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"tile_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+387,0,"activation_bank_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+393,0,"activation_bank_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"systolic_act_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"systolic_act_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+26,0,"product_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 131,0);
    tracep->declBit(c+21,0,"product_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"relu_drain_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"relu_accum_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+31,0,"relu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+35,0,"relu_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"accum_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"requant_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"requant_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"dma_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+391,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"prefill_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"prefill_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"preload_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"preload_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"compute_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"compute_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"drain_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"drain_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"func_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"func_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"tile_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"tile_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"prefill_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"preload_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"compute_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"drain_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"funcs_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"tile_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+57,0,"prefill_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"preload_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"compute_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"drain_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"funcs_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"tiles_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMPUTE_COUNTER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("DRAIN_COUNTER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("FUNCS_COUNTER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("PREFILL_COUNTER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRELOAD_COUNTER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("TILES_COMPLETE_COUNTER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("a_buff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"compute_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"tiles_complete",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"DMA_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+387,0,"DMA_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+62,0,"output_buff",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+25,0,"output_buf_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"we_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"re_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"clr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"re_valid_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"we_valid_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"buff_a_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"buff_a_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"buff_a_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"first_pass_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+75,0,"write_in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+79,0,"re_out_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+83,0,"we_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"re_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"clr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"re_valid_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"we_valid_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"buff_b_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"buff_b_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"buff_b_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"first_pass_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+92,0,"write_in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+96,0,"re_out_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+100,0,"buff_a_bs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"buff_b_bs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"a_or_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"compute_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"tiles_complete",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"other_bank_active",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"bank_switch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"first_pass",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"clr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+103,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+104,0,"o_bank_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"a_or_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"compute_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"tiles_complete",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"other_bank_active",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"bank_switch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"first_pass",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"clr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+106,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+107,0,"o_bank_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("BUFF_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"a_or_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+75,0,"we_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+70,0,"we_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+79,0,"re_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+69,0,"re_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+108,0,"buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+112,0,"curr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("BUFF_B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"a_or_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+92,0,"we_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+87,0,"we_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+96,0,"re_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+86,0,"re_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+113,0,"buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+117,0,"curr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dma", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"bank",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+20,0,"compute_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"computed_bank_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"computed_bank_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"weight_bank_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+393,0,"weight_bank_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+387,0,"activation_bank_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+393,0,"activation_bank_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"tile_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+119,0,"preload_state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("captured", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+120,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+152,0,"capture_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,0,"capture_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("r_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"accum_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+154,0,"ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+21,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+31,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("req", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+31,0,"ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+399,0,"con",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"accum_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+158,0,"shift_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("sys_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload_state_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"compute_state_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"clr_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"weight_array",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"activation_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"activation_array",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+26,0,"product_array",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 131,0);
    tracep->declBit(c+21,0,"output_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"h_en_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"h_en_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"h_en_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"h_en_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"v_en_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"v_en_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"v_en_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"v_en_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+170,0,"pe_down_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+186,0,"pe_right_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"val_act_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("e_fsm_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"compute_state_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"en_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"en_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"en_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"en_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+204,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+206,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+209,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+210,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+211,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+212,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+219,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+220,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+225,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+226,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+227,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+228,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_0_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+234,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+236,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+242,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+243,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+244,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+245,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+251,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+254,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+256,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+260,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+261,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+262,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+263,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_1_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+265,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+267,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+269,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+271,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+272,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+274,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+278,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+279,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+280,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+281,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+283,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+287,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+288,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+289,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+290,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+292,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+296,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+297,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+298,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+299,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_2_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+301,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+305,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+306,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+307,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+308,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_3_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+311,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+315,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+317,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_3_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+323,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+324,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+326,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_3_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+333,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+335,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pe_3_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"compute_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"drain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+337,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+338,0,"accum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"accum_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"down_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"right_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+341,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+343,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+344,0,"accum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("v_fsm_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"compute_state_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"tile_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"en_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"en_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"en_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"en_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+346,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("w_l", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+400,0,"ROW_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+401,0,"BITWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+402,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"MEMORY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+401,0,"VW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+386,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"start_load_fifo_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"load_fifo_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"preload_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"tiles_complete",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"read_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"fifo_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"fifo_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+347,0,"fifo_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"fifo_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+349,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+350,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("weight_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+401,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"ROW_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+386,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+351,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+355,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+356,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+357,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+358,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+361,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+362,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+363,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+367,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+368,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+380,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+381,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+382,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+383,0,"putPtr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+384,0,"getPtr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+385,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+405,0,"first_packet",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+9,0,"group1_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"trial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_tpu_top___024root__trace_init_top(Vtb_tpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_init_top\n"); );
    // Body
    Vtb_tpu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_tpu_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_tpu_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_tpu_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_tpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_tpu_top___024root__trace_register(Vtb_tpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_tpu_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_tpu_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_tpu_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_tpu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_tpu_top___024root__trace_const_0_sub_0(Vtb_tpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_tpu_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_const_0\n"); );
    // Init
    Vtb_tpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tpu_top___024root*>(voidSelf);
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_tpu_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_tpu_top___024root__trace_const_0_sub_0(Vtb_tpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+392,(0U),32);
    bufp->fullBit(oldp+393,(1U));
    bufp->fullBit(oldp+394,(vlSelf->tb_tpu_top__DOT__dut__DOT__relu_drain_state));
    bufp->fullBit(oldp+395,(vlSelf->tb_tpu_top__DOT__dut__DOT__relu_accum_state));
    bufp->fullCData(oldp+396,(0U),3);
    bufp->fullBit(oldp+397,(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_en));
    bufp->fullBit(oldp+398,(0U));
    bufp->fullIData(oldp+399,(1U),32);
    bufp->fullIData(oldp+400,(4U),32);
    bufp->fullIData(oldp+401,(8U),32);
    bufp->fullIData(oldp+402,(1U),32);
    bufp->fullIData(oldp+403,(0x100U),32);
    bufp->fullIData(oldp+404,(0x20U),32);
    bufp->fullCData(oldp+405,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__first_packet),8);
}

VL_ATTR_COLD void Vtb_tpu_top___024root__trace_full_0_sub_0(Vtb_tpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_tpu_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_full_0\n"); );
    // Init
    Vtb_tpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tpu_top___024root*>(voidSelf);
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_tpu_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_tpu_top___024root__trace_full_0_sub_0(Vtb_tpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_tpu_top__DOT__errors),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_tpu_top__DOT__checks),32);
    bufp->fullBit(oldp+3,(vlSelf->tb_tpu_top__DOT__rst_n));
    bufp->fullBit(oldp+4,(vlSelf->tb_tpu_top__DOT__start));
    bufp->fullIData(oldp+5,(vlSelf->tb_tpu_top__DOT__tpu_in),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_tpu_top__DOT__op_code),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_tpu_top__DOT__last_group_row),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__n),32);
    bufp->fullIData(oldp+9,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__group1_row),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__t),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk4__DOT__t),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial),32);
    bufp->fullBit(oldp+13,((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))));
    bufp->fullBit(oldp+14,(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state));
    bufp->fullBit(oldp+15,((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count))));
    bufp->fullBit(oldp+16,((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count))));
    bufp->fullBit(oldp+17,(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_valid));
    bufp->fullIData(oldp+18,(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out),32);
    bufp->fullIData(oldp+19,(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out),32);
    bufp->fullBit(oldp+20,(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state));
    bufp->fullBit(oldp+21,(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state));
    bufp->fullBit(oldp+22,(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done));
    bufp->fullBit(oldp+23,((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count))));
    bufp->fullIData(oldp+24,(vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[0U]),32);
    bufp->fullBit(oldp+25,(vlSelf->tb_tpu_top__DOT__dut__DOT__systolic_act_in_valid));
    __Vtemp_1[0U] = vlSelf->__VdfgTmp_hfccefdc9__0[0U];
    __Vtemp_1[1U] = vlSelf->__VdfgTmp_hfccefdc9__0[1U];
    __Vtemp_1[2U] = vlSelf->__VdfgTmp_hfccefdc9__0[2U];
    __Vtemp_1[3U] = vlSelf->__VdfgTmp_hfccefdc9__0[3U];
    __Vtemp_1[4U] = 0U;
    bufp->fullWData(oldp+26,(__Vtemp_1),132);
    bufp->fullWData(oldp+31,(vlSelf->tb_tpu_top__DOT__dut__DOT__relu_out),128);
    bufp->fullBit(oldp+35,(vlSelf->tb_tpu_top__DOT__dut__DOT__relu_out_valid));
    bufp->fullBit(oldp+36,(vlSelf->tb_tpu_top__DOT__dut__DOT__accum_state));
    bufp->fullIData(oldp+37,(vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__req__out),32);
    bufp->fullBit(oldp+38,(vlSelf->tb_tpu_top__DOT__dut__DOT__requant_out_valid));
    bufp->fullCData(oldp+39,(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state),5);
    bufp->fullBit(oldp+40,(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en));
    bufp->fullBit(oldp+41,(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr));
    bufp->fullBit(oldp+42,(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en));
    bufp->fullBit(oldp+43,(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr));
    bufp->fullBit(oldp+44,(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en));
    bufp->fullBit(oldp+45,(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr));
    bufp->fullBit(oldp+46,(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en));
    bufp->fullBit(oldp+47,(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr));
    bufp->fullBit(oldp+48,(vlSelf->tb_tpu_top__DOT__dut__DOT__func_en));
    bufp->fullBit(oldp+49,(vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr));
    bufp->fullBit(oldp+50,(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr));
    bufp->fullCData(oldp+51,(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count),8);
    bufp->fullCData(oldp+52,(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count),8);
    bufp->fullCData(oldp+53,(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count),8);
    bufp->fullCData(oldp+54,(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count),8);
    bufp->fullCData(oldp+55,(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count),8);
    bufp->fullCData(oldp+56,(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count),8);
    bufp->fullBit(oldp+57,((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count))));
    bufp->fullBit(oldp+58,((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count))));
    bufp->fullBit(oldp+59,((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))));
    bufp->fullBit(oldp+60,((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count))));
    bufp->fullBit(oldp+61,((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count))));
    bufp->fullWData(oldp+62,(vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff),128);
    bufp->fullBit(oldp+66,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a));
    bufp->fullBit(oldp+67,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_a));
    bufp->fullBit(oldp+68,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_a));
    bufp->fullBit(oldp+69,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a));
    bufp->fullBit(oldp+70,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a));
    bufp->fullBit(oldp+71,((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count))));
    bufp->fullBit(oldp+72,((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count))));
    bufp->fullBit(oldp+73,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active));
    bufp->fullBit(oldp+74,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a));
    bufp->fullWData(oldp+75,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a),128);
    bufp->fullWData(oldp+79,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a),128);
    bufp->fullBit(oldp+83,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b));
    bufp->fullBit(oldp+84,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_b));
    bufp->fullBit(oldp+85,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_b));
    bufp->fullBit(oldp+86,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_b));
    bufp->fullBit(oldp+87,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_b));
    bufp->fullBit(oldp+88,((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count))));
    bufp->fullBit(oldp+89,((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count))));
    bufp->fullBit(oldp+90,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active));
    bufp->fullBit(oldp+91,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_b));
    bufp->fullWData(oldp+92,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b),128);
    bufp->fullWData(oldp+96,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b),128);
    bufp->fullBit(oldp+100,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_bs));
    bufp->fullBit(oldp+101,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_bs));
    bufp->fullCData(oldp+102,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state),6);
    bufp->fullCData(oldp+103,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state),6);
    bufp->fullBit(oldp+104,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg));
    bufp->fullCData(oldp+105,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state),6);
    bufp->fullCData(oldp+106,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state),6);
    bufp->fullBit(oldp+107,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg));
    bufp->fullWData(oldp+108,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff),128);
    bufp->fullSData(oldp+112,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count),10);
    bufp->fullWData(oldp+113,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff),128);
    bufp->fullSData(oldp+117,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count),10);
    bufp->fullCData(oldp+118,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx),8);
    bufp->fullBit(oldp+119,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__preload_state_d));
    bufp->fullIData(oldp+120,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0U]),32);
    bufp->fullIData(oldp+121,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [1U]),32);
    bufp->fullIData(oldp+122,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [2U]),32);
    bufp->fullIData(oldp+123,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [3U]),32);
    bufp->fullIData(oldp+124,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [4U]),32);
    bufp->fullIData(oldp+125,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [5U]),32);
    bufp->fullIData(oldp+126,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [6U]),32);
    bufp->fullIData(oldp+127,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [7U]),32);
    bufp->fullIData(oldp+128,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [8U]),32);
    bufp->fullIData(oldp+129,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [9U]),32);
    bufp->fullIData(oldp+130,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0xaU]),32);
    bufp->fullIData(oldp+131,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0xbU]),32);
    bufp->fullIData(oldp+132,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0xcU]),32);
    bufp->fullIData(oldp+133,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0xdU]),32);
    bufp->fullIData(oldp+134,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0xeU]),32);
    bufp->fullIData(oldp+135,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0xfU]),32);
    bufp->fullIData(oldp+136,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x10U]),32);
    bufp->fullIData(oldp+137,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x11U]),32);
    bufp->fullIData(oldp+138,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x12U]),32);
    bufp->fullIData(oldp+139,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x13U]),32);
    bufp->fullIData(oldp+140,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x14U]),32);
    bufp->fullIData(oldp+141,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x15U]),32);
    bufp->fullIData(oldp+142,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x16U]),32);
    bufp->fullIData(oldp+143,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x17U]),32);
    bufp->fullIData(oldp+144,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x18U]),32);
    bufp->fullIData(oldp+145,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x19U]),32);
    bufp->fullIData(oldp+146,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x1aU]),32);
    bufp->fullIData(oldp+147,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x1bU]),32);
    bufp->fullIData(oldp+148,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x1cU]),32);
    bufp->fullIData(oldp+149,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x1dU]),32);
    bufp->fullIData(oldp+150,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x1eU]),32);
    bufp->fullIData(oldp+151,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                              [0x1fU]),32);
    bufp->fullCData(oldp+152,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_ptr),5);
    bufp->fullIData(oldp+153,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count),32);
    __Vtemp_2[0U] = vlSelf->__VdfgTmp_hfccefdc9__0[0U];
    __Vtemp_2[1U] = vlSelf->__VdfgTmp_hfccefdc9__0[1U];
    __Vtemp_2[2U] = vlSelf->__VdfgTmp_hfccefdc9__0[2U];
    __Vtemp_2[3U] = vlSelf->__VdfgTmp_hfccefdc9__0[3U];
    bufp->fullWData(oldp+154,(__Vtemp_2),128);
    bufp->fullWData(oldp+158,(vlSelf->tb_tpu_top__DOT__dut__DOT__req__DOT__shift_buffer),128);
    bufp->fullBit(oldp+162,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_0));
    bufp->fullBit(oldp+163,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_1));
    bufp->fullBit(oldp+164,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_2));
    bufp->fullBit(oldp+165,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_3));
    bufp->fullBit(oldp+166,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_0));
    bufp->fullBit(oldp+167,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_1));
    bufp->fullBit(oldp+168,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_2));
    bufp->fullBit(oldp+169,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_3));
    bufp->fullWData(oldp+170,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out),512);
    bufp->fullWData(oldp+186,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out),512);
    bufp->fullIData(oldp+202,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in),32);
    bufp->fullCData(oldp+203,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__current_state),5);
    bufp->fullCData(oldp+204,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__next_state),5);
    bufp->fullCData(oldp+205,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in)),8);
    bufp->fullCData(oldp+206,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out)),8);
    bufp->fullIData(oldp+207,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__down_out),32);
    bufp->fullCData(oldp+208,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out),8);
    bufp->fullCData(oldp+209,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__a_reg),8);
    bufp->fullCData(oldp+210,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__b_reg),8);
    bufp->fullSData(oldp+211,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg),16);
    bufp->fullIData(oldp+212,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg),32);
    bufp->fullCData(oldp+213,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[0U])),8);
    bufp->fullCData(oldp+214,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
                                        >> 8U))),8);
    bufp->fullIData(oldp+215,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__down_out),32);
    bufp->fullCData(oldp+216,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out),8);
    bufp->fullCData(oldp+217,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__a_reg),8);
    bufp->fullCData(oldp+218,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__b_reg),8);
    bufp->fullSData(oldp+219,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg),16);
    bufp->fullIData(oldp+220,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg),32);
    bufp->fullCData(oldp+221,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[0U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+222,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+223,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__down_out),32);
    bufp->fullCData(oldp+224,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out),8);
    bufp->fullCData(oldp+225,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__a_reg),8);
    bufp->fullCData(oldp+226,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__b_reg),8);
    bufp->fullSData(oldp+227,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg),16);
    bufp->fullIData(oldp+228,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg),32);
    bufp->fullCData(oldp+229,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[1U])),8);
    bufp->fullCData(oldp+230,((vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+231,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__down_out),32);
    bufp->fullCData(oldp+232,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__right_out),8);
    bufp->fullCData(oldp+233,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__a_reg),8);
    bufp->fullCData(oldp+234,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__b_reg),8);
    bufp->fullSData(oldp+235,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg),16);
    bufp->fullIData(oldp+236,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg),32);
    bufp->fullCData(oldp+237,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                                        >> 8U))),8);
    bufp->fullCData(oldp+238,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U])),8);
    bufp->fullIData(oldp+239,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U])),32);
    bufp->fullIData(oldp+240,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__down_out),32);
    bufp->fullCData(oldp+241,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out),8);
    bufp->fullCData(oldp+242,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__a_reg),8);
    bufp->fullCData(oldp+243,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__b_reg),8);
    bufp->fullSData(oldp+244,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg),16);
    bufp->fullIData(oldp+245,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg),32);
    bufp->fullCData(oldp+246,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[2U])),8);
    bufp->fullCData(oldp+247,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U] 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+248,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U] 
                               >> 0x10U)),32);
    bufp->fullIData(oldp+249,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__down_out),32);
    bufp->fullCData(oldp+250,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out),8);
    bufp->fullCData(oldp+251,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__a_reg),8);
    bufp->fullCData(oldp+252,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__b_reg),8);
    bufp->fullSData(oldp+253,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg),16);
    bufp->fullIData(oldp+254,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg),32);
    bufp->fullCData(oldp+255,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[2U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+256,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U])),8);
    bufp->fullIData(oldp+257,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U])),32);
    bufp->fullIData(oldp+258,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__down_out),32);
    bufp->fullCData(oldp+259,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out),8);
    bufp->fullCData(oldp+260,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__a_reg),8);
    bufp->fullCData(oldp+261,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__b_reg),8);
    bufp->fullSData(oldp+262,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg),16);
    bufp->fullIData(oldp+263,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg),32);
    bufp->fullCData(oldp+264,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[3U])),8);
    bufp->fullCData(oldp+265,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U] 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+266,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U] 
                               >> 0x10U)),32);
    bufp->fullIData(oldp+267,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__down_out),32);
    bufp->fullCData(oldp+268,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__right_out),8);
    bufp->fullCData(oldp+269,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__a_reg),8);
    bufp->fullCData(oldp+270,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__b_reg),8);
    bufp->fullSData(oldp+271,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg),16);
    bufp->fullIData(oldp+272,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg),32);
    bufp->fullCData(oldp+273,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+274,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U])),8);
    bufp->fullIData(oldp+275,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U])),32);
    bufp->fullIData(oldp+276,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__down_out),32);
    bufp->fullCData(oldp+277,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out),8);
    bufp->fullCData(oldp+278,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__a_reg),8);
    bufp->fullCData(oldp+279,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__b_reg),8);
    bufp->fullSData(oldp+280,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg),16);
    bufp->fullIData(oldp+281,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg),32);
    bufp->fullCData(oldp+282,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[4U])),8);
    bufp->fullCData(oldp+283,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U] 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+284,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U] 
                               >> 0x10U)),32);
    bufp->fullIData(oldp+285,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__down_out),32);
    bufp->fullCData(oldp+286,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out),8);
    bufp->fullCData(oldp+287,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__a_reg),8);
    bufp->fullCData(oldp+288,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__b_reg),8);
    bufp->fullSData(oldp+289,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg),16);
    bufp->fullIData(oldp+290,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg),32);
    bufp->fullCData(oldp+291,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[4U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+292,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U])),8);
    bufp->fullIData(oldp+293,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U])),32);
    bufp->fullIData(oldp+294,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__down_out),32);
    bufp->fullCData(oldp+295,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out),8);
    bufp->fullCData(oldp+296,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__a_reg),8);
    bufp->fullCData(oldp+297,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__b_reg),8);
    bufp->fullSData(oldp+298,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg),16);
    bufp->fullIData(oldp+299,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg),32);
    bufp->fullCData(oldp+300,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[5U])),8);
    bufp->fullCData(oldp+301,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U] 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+302,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U] 
                               >> 0x10U)),32);
    bufp->fullIData(oldp+303,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out),32);
    bufp->fullCData(oldp+304,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__right_out),8);
    bufp->fullCData(oldp+305,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__a_reg),8);
    bufp->fullCData(oldp+306,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__b_reg),8);
    bufp->fullSData(oldp+307,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg),16);
    bufp->fullIData(oldp+308,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg),32);
    bufp->fullCData(oldp+309,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+310,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U])),8);
    bufp->fullIData(oldp+311,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U])),32);
    bufp->fullIData(oldp+312,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out),32);
    bufp->fullCData(oldp+313,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out),8);
    bufp->fullCData(oldp+314,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__a_reg),8);
    bufp->fullCData(oldp+315,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__b_reg),8);
    bufp->fullSData(oldp+316,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg),16);
    bufp->fullIData(oldp+317,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg),32);
    bufp->fullCData(oldp+318,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[6U])),8);
    bufp->fullCData(oldp+319,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U] 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+320,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U] 
                               >> 0x10U)),32);
    bufp->fullIData(oldp+321,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out),32);
    bufp->fullCData(oldp+322,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out),8);
    bufp->fullCData(oldp+323,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__a_reg),8);
    bufp->fullCData(oldp+324,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__b_reg),8);
    bufp->fullSData(oldp+325,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg),16);
    bufp->fullIData(oldp+326,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg),32);
    bufp->fullCData(oldp+327,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[6U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+328,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U])),8);
    bufp->fullIData(oldp+329,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U])),32);
    bufp->fullIData(oldp+330,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out),32);
    bufp->fullCData(oldp+331,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out),8);
    bufp->fullCData(oldp+332,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__a_reg),8);
    bufp->fullCData(oldp+333,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__b_reg),8);
    bufp->fullSData(oldp+334,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg),16);
    bufp->fullIData(oldp+335,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg),32);
    bufp->fullCData(oldp+336,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[7U])),8);
    bufp->fullCData(oldp+337,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U] 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+338,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U] 
                               >> 0x10U)),32);
    bufp->fullIData(oldp+339,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__down_out),32);
    bufp->fullCData(oldp+340,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__right_out),8);
    bufp->fullCData(oldp+341,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__a_reg),8);
    bufp->fullCData(oldp+342,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__b_reg),8);
    bufp->fullSData(oldp+343,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg),16);
    bufp->fullIData(oldp+344,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg),32);
    bufp->fullCData(oldp+345,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__current_state),5);
    bufp->fullCData(oldp+346,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__next_state),5);
    bufp->fullBit(oldp+347,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re));
    bufp->fullBit(oldp+348,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we));
    bufp->fullCData(oldp+349,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state),5);
    bufp->fullCData(oldp+350,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state),5);
    bufp->fullIData(oldp+351,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0U]),32);
    bufp->fullIData(oldp+352,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [1U]),32);
    bufp->fullIData(oldp+353,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [2U]),32);
    bufp->fullIData(oldp+354,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [3U]),32);
    bufp->fullIData(oldp+355,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [4U]),32);
    bufp->fullIData(oldp+356,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [5U]),32);
    bufp->fullIData(oldp+357,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [6U]),32);
    bufp->fullIData(oldp+358,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [7U]),32);
    bufp->fullIData(oldp+359,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [8U]),32);
    bufp->fullIData(oldp+360,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [9U]),32);
    bufp->fullIData(oldp+361,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0xaU]),32);
    bufp->fullIData(oldp+362,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0xbU]),32);
    bufp->fullIData(oldp+363,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0xcU]),32);
    bufp->fullIData(oldp+364,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0xdU]),32);
    bufp->fullIData(oldp+365,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0xeU]),32);
    bufp->fullIData(oldp+366,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0xfU]),32);
    bufp->fullIData(oldp+367,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x10U]),32);
    bufp->fullIData(oldp+368,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x11U]),32);
    bufp->fullIData(oldp+369,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x12U]),32);
    bufp->fullIData(oldp+370,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x13U]),32);
    bufp->fullIData(oldp+371,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x14U]),32);
    bufp->fullIData(oldp+372,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x15U]),32);
    bufp->fullIData(oldp+373,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x16U]),32);
    bufp->fullIData(oldp+374,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x17U]),32);
    bufp->fullIData(oldp+375,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x18U]),32);
    bufp->fullIData(oldp+376,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x19U]),32);
    bufp->fullIData(oldp+377,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x1aU]),32);
    bufp->fullIData(oldp+378,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x1bU]),32);
    bufp->fullIData(oldp+379,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x1cU]),32);
    bufp->fullIData(oldp+380,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x1dU]),32);
    bufp->fullIData(oldp+381,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x1eU]),32);
    bufp->fullIData(oldp+382,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                              [0x1fU]),32);
    bufp->fullCData(oldp+383,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr),2);
    bufp->fullCData(oldp+384,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr),2);
    bufp->fullCData(oldp+385,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count),4);
    bufp->fullBit(oldp+386,(vlSelf->tb_tpu_top__DOT__clk));
    bufp->fullWData(oldp+387,(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out),128);
    bufp->fullCData(oldp+391,(vlSelf->tb_tpu_top__DOT__dut__DOT__next_state),5);
}
