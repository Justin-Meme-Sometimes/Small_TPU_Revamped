// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_tpu_top__Syms.h"


void Vtb_tpu_top___024root__trace_chg_0_sub_0(Vtb_tpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_tpu_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_chg_0\n"); );
    // Init
    Vtb_tpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tpu_top___024root*>(voidSelf);
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_tpu_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_tpu_top___024root__trace_chg_0_sub_0(Vtb_tpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_tpu_top__DOT__errors),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_tpu_top__DOT__checks),32);
        bufp->chgBit(oldp+2,(vlSelf->tb_tpu_top__DOT__rst_n));
        bufp->chgBit(oldp+3,(vlSelf->tb_tpu_top__DOT__start));
        bufp->chgIData(oldp+4,(vlSelf->tb_tpu_top__DOT__tpu_in),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_tpu_top__DOT__op_code),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_tpu_top__DOT__last_group_row),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__n),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__group1_row),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__t),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk4__DOT__t),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+12,((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))));
        bufp->chgBit(oldp+13,(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state));
        bufp->chgBit(oldp+14,((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count))));
        bufp->chgBit(oldp+15,((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count))));
        bufp->chgBit(oldp+16,(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_valid));
        bufp->chgIData(oldp+17,(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out),32);
        bufp->chgIData(oldp+18,(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out),32);
        bufp->chgBit(oldp+19,(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state));
        bufp->chgBit(oldp+20,(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state));
        bufp->chgBit(oldp+21,(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done));
        bufp->chgBit(oldp+22,((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count))));
        bufp->chgIData(oldp+23,(vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[0U]),32);
        bufp->chgBit(oldp+24,(vlSelf->tb_tpu_top__DOT__dut__DOT__systolic_act_in_valid));
        __Vtemp_1[0U] = vlSelf->__VdfgTmp_hfccefdc9__0[0U];
        __Vtemp_1[1U] = vlSelf->__VdfgTmp_hfccefdc9__0[1U];
        __Vtemp_1[2U] = vlSelf->__VdfgTmp_hfccefdc9__0[2U];
        __Vtemp_1[3U] = vlSelf->__VdfgTmp_hfccefdc9__0[3U];
        __Vtemp_1[4U] = 0U;
        bufp->chgWData(oldp+25,(__Vtemp_1),132);
        bufp->chgWData(oldp+30,(vlSelf->tb_tpu_top__DOT__dut__DOT__relu_out),128);
        bufp->chgBit(oldp+34,(vlSelf->tb_tpu_top__DOT__dut__DOT__relu_out_valid));
        bufp->chgBit(oldp+35,(vlSelf->tb_tpu_top__DOT__dut__DOT__accum_state));
        bufp->chgIData(oldp+36,(vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__req__out),32);
        bufp->chgBit(oldp+37,(vlSelf->tb_tpu_top__DOT__dut__DOT__requant_out_valid));
        bufp->chgCData(oldp+38,(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state),5);
        bufp->chgBit(oldp+39,(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en));
        bufp->chgBit(oldp+40,(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr));
        bufp->chgBit(oldp+41,(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en));
        bufp->chgBit(oldp+42,(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr));
        bufp->chgBit(oldp+43,(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en));
        bufp->chgBit(oldp+44,(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr));
        bufp->chgBit(oldp+45,(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en));
        bufp->chgBit(oldp+46,(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr));
        bufp->chgBit(oldp+47,(vlSelf->tb_tpu_top__DOT__dut__DOT__func_en));
        bufp->chgBit(oldp+48,(vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr));
        bufp->chgBit(oldp+49,(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr));
        bufp->chgCData(oldp+50,(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count),8);
        bufp->chgCData(oldp+51,(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count),8);
        bufp->chgCData(oldp+52,(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count),8);
        bufp->chgCData(oldp+53,(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count),8);
        bufp->chgCData(oldp+54,(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count),8);
        bufp->chgCData(oldp+55,(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count),8);
        bufp->chgBit(oldp+56,((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count))));
        bufp->chgBit(oldp+57,((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count))));
        bufp->chgBit(oldp+58,((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))));
        bufp->chgBit(oldp+59,((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count))));
        bufp->chgBit(oldp+60,((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count))));
        bufp->chgWData(oldp+61,(vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff),128);
        bufp->chgBit(oldp+65,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a));
        bufp->chgBit(oldp+66,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_a));
        bufp->chgBit(oldp+67,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_a));
        bufp->chgBit(oldp+68,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a));
        bufp->chgBit(oldp+69,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a));
        bufp->chgBit(oldp+70,((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count))));
        bufp->chgBit(oldp+71,((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count))));
        bufp->chgBit(oldp+72,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active));
        bufp->chgBit(oldp+73,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a));
        bufp->chgWData(oldp+74,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a),128);
        bufp->chgWData(oldp+78,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a),128);
        bufp->chgBit(oldp+82,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b));
        bufp->chgBit(oldp+83,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_b));
        bufp->chgBit(oldp+84,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_b));
        bufp->chgBit(oldp+85,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_b));
        bufp->chgBit(oldp+86,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_b));
        bufp->chgBit(oldp+87,((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count))));
        bufp->chgBit(oldp+88,((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count))));
        bufp->chgBit(oldp+89,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active));
        bufp->chgBit(oldp+90,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_b));
        bufp->chgWData(oldp+91,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b),128);
        bufp->chgWData(oldp+95,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b),128);
        bufp->chgBit(oldp+99,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_bs));
        bufp->chgBit(oldp+100,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_bs));
        bufp->chgCData(oldp+101,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state),6);
        bufp->chgCData(oldp+102,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state),6);
        bufp->chgBit(oldp+103,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg));
        bufp->chgCData(oldp+104,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state),6);
        bufp->chgCData(oldp+105,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state),6);
        bufp->chgBit(oldp+106,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg));
        bufp->chgWData(oldp+107,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff),128);
        bufp->chgSData(oldp+111,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count),10);
        bufp->chgWData(oldp+112,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff),128);
        bufp->chgSData(oldp+116,(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count),10);
        bufp->chgCData(oldp+117,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx),8);
        bufp->chgBit(oldp+118,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__preload_state_d));
        bufp->chgIData(oldp+119,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0U]),32);
        bufp->chgIData(oldp+120,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [1U]),32);
        bufp->chgIData(oldp+121,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [2U]),32);
        bufp->chgIData(oldp+122,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [3U]),32);
        bufp->chgIData(oldp+123,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [4U]),32);
        bufp->chgIData(oldp+124,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [5U]),32);
        bufp->chgIData(oldp+125,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [6U]),32);
        bufp->chgIData(oldp+126,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [7U]),32);
        bufp->chgIData(oldp+127,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [8U]),32);
        bufp->chgIData(oldp+128,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [9U]),32);
        bufp->chgIData(oldp+129,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0xaU]),32);
        bufp->chgIData(oldp+130,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0xbU]),32);
        bufp->chgIData(oldp+131,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0xcU]),32);
        bufp->chgIData(oldp+132,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0xdU]),32);
        bufp->chgIData(oldp+133,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0xeU]),32);
        bufp->chgIData(oldp+134,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0xfU]),32);
        bufp->chgIData(oldp+135,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x10U]),32);
        bufp->chgIData(oldp+136,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x11U]),32);
        bufp->chgIData(oldp+137,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x12U]),32);
        bufp->chgIData(oldp+138,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x13U]),32);
        bufp->chgIData(oldp+139,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x14U]),32);
        bufp->chgIData(oldp+140,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x15U]),32);
        bufp->chgIData(oldp+141,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x16U]),32);
        bufp->chgIData(oldp+142,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x17U]),32);
        bufp->chgIData(oldp+143,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x18U]),32);
        bufp->chgIData(oldp+144,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x19U]),32);
        bufp->chgIData(oldp+145,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x1aU]),32);
        bufp->chgIData(oldp+146,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x1bU]),32);
        bufp->chgIData(oldp+147,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x1cU]),32);
        bufp->chgIData(oldp+148,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x1dU]),32);
        bufp->chgIData(oldp+149,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x1eU]),32);
        bufp->chgIData(oldp+150,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured
                                 [0x1fU]),32);
        bufp->chgCData(oldp+151,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_ptr),5);
        bufp->chgIData(oldp+152,(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count),32);
        __Vtemp_2[0U] = vlSelf->__VdfgTmp_hfccefdc9__0[0U];
        __Vtemp_2[1U] = vlSelf->__VdfgTmp_hfccefdc9__0[1U];
        __Vtemp_2[2U] = vlSelf->__VdfgTmp_hfccefdc9__0[2U];
        __Vtemp_2[3U] = vlSelf->__VdfgTmp_hfccefdc9__0[3U];
        bufp->chgWData(oldp+153,(__Vtemp_2),128);
        bufp->chgWData(oldp+157,(vlSelf->tb_tpu_top__DOT__dut__DOT__req__DOT__shift_buffer),128);
        bufp->chgBit(oldp+161,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_0));
        bufp->chgBit(oldp+162,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_1));
        bufp->chgBit(oldp+163,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_2));
        bufp->chgBit(oldp+164,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_3));
        bufp->chgBit(oldp+165,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_0));
        bufp->chgBit(oldp+166,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_1));
        bufp->chgBit(oldp+167,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_2));
        bufp->chgBit(oldp+168,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_3));
        bufp->chgWData(oldp+169,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out),512);
        bufp->chgWData(oldp+185,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out),512);
        bufp->chgIData(oldp+201,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in),32);
        bufp->chgCData(oldp+202,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__current_state),5);
        bufp->chgCData(oldp+203,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__next_state),5);
        bufp->chgCData(oldp+204,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in)),8);
        bufp->chgCData(oldp+205,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out)),8);
        bufp->chgIData(oldp+206,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__down_out),32);
        bufp->chgCData(oldp+207,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out),8);
        bufp->chgCData(oldp+208,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__a_reg),8);
        bufp->chgCData(oldp+209,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__b_reg),8);
        bufp->chgSData(oldp+210,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg),16);
        bufp->chgIData(oldp+211,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg),32);
        bufp->chgCData(oldp+212,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[0U])),8);
        bufp->chgCData(oldp+213,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
                                           >> 8U))),8);
        bufp->chgIData(oldp+214,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__down_out),32);
        bufp->chgCData(oldp+215,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out),8);
        bufp->chgCData(oldp+216,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__a_reg),8);
        bufp->chgCData(oldp+217,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__b_reg),8);
        bufp->chgSData(oldp+218,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg),16);
        bufp->chgIData(oldp+219,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg),32);
        bufp->chgCData(oldp+220,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+221,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
                                           >> 0x10U))),8);
        bufp->chgIData(oldp+222,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__down_out),32);
        bufp->chgCData(oldp+223,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out),8);
        bufp->chgCData(oldp+224,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__a_reg),8);
        bufp->chgCData(oldp+225,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__b_reg),8);
        bufp->chgSData(oldp+226,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg),16);
        bufp->chgIData(oldp+227,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg),32);
        bufp->chgCData(oldp+228,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[1U])),8);
        bufp->chgCData(oldp+229,((vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+230,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__down_out),32);
        bufp->chgCData(oldp+231,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__right_out),8);
        bufp->chgCData(oldp+232,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__a_reg),8);
        bufp->chgCData(oldp+233,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__b_reg),8);
        bufp->chgSData(oldp+234,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg),16);
        bufp->chgIData(oldp+235,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg),32);
        bufp->chgCData(oldp+236,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                                           >> 8U))),8);
        bufp->chgCData(oldp+237,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U])),8);
        bufp->chgIData(oldp+238,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U])),32);
        bufp->chgIData(oldp+239,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__down_out),32);
        bufp->chgCData(oldp+240,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out),8);
        bufp->chgCData(oldp+241,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__a_reg),8);
        bufp->chgCData(oldp+242,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__b_reg),8);
        bufp->chgSData(oldp+243,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg),16);
        bufp->chgIData(oldp+244,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg),32);
        bufp->chgCData(oldp+245,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[2U])),8);
        bufp->chgCData(oldp+246,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U] 
                                           >> 0x10U))),8);
        bufp->chgIData(oldp+247,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U] 
                                  >> 0x10U)),32);
        bufp->chgIData(oldp+248,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__down_out),32);
        bufp->chgCData(oldp+249,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out),8);
        bufp->chgCData(oldp+250,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__a_reg),8);
        bufp->chgCData(oldp+251,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__b_reg),8);
        bufp->chgSData(oldp+252,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg),16);
        bufp->chgIData(oldp+253,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg),32);
        bufp->chgCData(oldp+254,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+255,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U])),8);
        bufp->chgIData(oldp+256,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U])),32);
        bufp->chgIData(oldp+257,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__down_out),32);
        bufp->chgCData(oldp+258,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out),8);
        bufp->chgCData(oldp+259,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__a_reg),8);
        bufp->chgCData(oldp+260,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__b_reg),8);
        bufp->chgSData(oldp+261,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg),16);
        bufp->chgIData(oldp+262,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg),32);
        bufp->chgCData(oldp+263,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[3U])),8);
        bufp->chgCData(oldp+264,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U] 
                                           >> 0x10U))),8);
        bufp->chgIData(oldp+265,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U] 
                                  >> 0x10U)),32);
        bufp->chgIData(oldp+266,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__down_out),32);
        bufp->chgCData(oldp+267,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__right_out),8);
        bufp->chgCData(oldp+268,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__a_reg),8);
        bufp->chgCData(oldp+269,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__b_reg),8);
        bufp->chgSData(oldp+270,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg),16);
        bufp->chgIData(oldp+271,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg),32);
        bufp->chgCData(oldp+272,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+273,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U])),8);
        bufp->chgIData(oldp+274,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U])),32);
        bufp->chgIData(oldp+275,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__down_out),32);
        bufp->chgCData(oldp+276,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out),8);
        bufp->chgCData(oldp+277,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__a_reg),8);
        bufp->chgCData(oldp+278,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__b_reg),8);
        bufp->chgSData(oldp+279,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg),16);
        bufp->chgIData(oldp+280,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg),32);
        bufp->chgCData(oldp+281,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[4U])),8);
        bufp->chgCData(oldp+282,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U] 
                                           >> 0x10U))),8);
        bufp->chgIData(oldp+283,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U] 
                                  >> 0x10U)),32);
        bufp->chgIData(oldp+284,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__down_out),32);
        bufp->chgCData(oldp+285,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out),8);
        bufp->chgCData(oldp+286,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__a_reg),8);
        bufp->chgCData(oldp+287,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__b_reg),8);
        bufp->chgSData(oldp+288,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg),16);
        bufp->chgIData(oldp+289,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg),32);
        bufp->chgCData(oldp+290,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+291,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U])),8);
        bufp->chgIData(oldp+292,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U])),32);
        bufp->chgIData(oldp+293,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__down_out),32);
        bufp->chgCData(oldp+294,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out),8);
        bufp->chgCData(oldp+295,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__a_reg),8);
        bufp->chgCData(oldp+296,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__b_reg),8);
        bufp->chgSData(oldp+297,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg),16);
        bufp->chgIData(oldp+298,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg),32);
        bufp->chgCData(oldp+299,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[5U])),8);
        bufp->chgCData(oldp+300,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U] 
                                           >> 0x10U))),8);
        bufp->chgIData(oldp+301,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U] 
                                  >> 0x10U)),32);
        bufp->chgIData(oldp+302,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out),32);
        bufp->chgCData(oldp+303,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__right_out),8);
        bufp->chgCData(oldp+304,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__a_reg),8);
        bufp->chgCData(oldp+305,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__b_reg),8);
        bufp->chgSData(oldp+306,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg),16);
        bufp->chgIData(oldp+307,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg),32);
        bufp->chgCData(oldp+308,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+309,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U])),8);
        bufp->chgIData(oldp+310,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U])),32);
        bufp->chgIData(oldp+311,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out),32);
        bufp->chgCData(oldp+312,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out),8);
        bufp->chgCData(oldp+313,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__a_reg),8);
        bufp->chgCData(oldp+314,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__b_reg),8);
        bufp->chgSData(oldp+315,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg),16);
        bufp->chgIData(oldp+316,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg),32);
        bufp->chgCData(oldp+317,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[6U])),8);
        bufp->chgCData(oldp+318,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U] 
                                           >> 0x10U))),8);
        bufp->chgIData(oldp+319,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U] 
                                  >> 0x10U)),32);
        bufp->chgIData(oldp+320,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out),32);
        bufp->chgCData(oldp+321,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out),8);
        bufp->chgCData(oldp+322,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__a_reg),8);
        bufp->chgCData(oldp+323,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__b_reg),8);
        bufp->chgSData(oldp+324,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg),16);
        bufp->chgIData(oldp+325,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg),32);
        bufp->chgCData(oldp+326,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+327,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U])),8);
        bufp->chgIData(oldp+328,((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U])),32);
        bufp->chgIData(oldp+329,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out),32);
        bufp->chgCData(oldp+330,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out),8);
        bufp->chgCData(oldp+331,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__a_reg),8);
        bufp->chgCData(oldp+332,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__b_reg),8);
        bufp->chgSData(oldp+333,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg),16);
        bufp->chgIData(oldp+334,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg),32);
        bufp->chgCData(oldp+335,((0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[7U])),8);
        bufp->chgCData(oldp+336,((0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U] 
                                           >> 0x10U))),8);
        bufp->chgIData(oldp+337,((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U] 
                                  >> 0x10U)),32);
        bufp->chgIData(oldp+338,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__down_out),32);
        bufp->chgCData(oldp+339,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__right_out),8);
        bufp->chgCData(oldp+340,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__a_reg),8);
        bufp->chgCData(oldp+341,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__b_reg),8);
        bufp->chgSData(oldp+342,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg),16);
        bufp->chgIData(oldp+343,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg),32);
        bufp->chgCData(oldp+344,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__current_state),5);
        bufp->chgCData(oldp+345,(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__next_state),5);
        bufp->chgBit(oldp+346,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re));
        bufp->chgBit(oldp+347,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we));
        bufp->chgCData(oldp+348,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state),5);
        bufp->chgCData(oldp+349,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state),5);
        bufp->chgIData(oldp+350,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0U]),32);
        bufp->chgIData(oldp+351,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [1U]),32);
        bufp->chgIData(oldp+352,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [2U]),32);
        bufp->chgIData(oldp+353,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [3U]),32);
        bufp->chgIData(oldp+354,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [4U]),32);
        bufp->chgIData(oldp+355,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [5U]),32);
        bufp->chgIData(oldp+356,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [6U]),32);
        bufp->chgIData(oldp+357,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [7U]),32);
        bufp->chgIData(oldp+358,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [8U]),32);
        bufp->chgIData(oldp+359,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [9U]),32);
        bufp->chgIData(oldp+360,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0xaU]),32);
        bufp->chgIData(oldp+361,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0xbU]),32);
        bufp->chgIData(oldp+362,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0xcU]),32);
        bufp->chgIData(oldp+363,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0xdU]),32);
        bufp->chgIData(oldp+364,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0xeU]),32);
        bufp->chgIData(oldp+365,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0xfU]),32);
        bufp->chgIData(oldp+366,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x10U]),32);
        bufp->chgIData(oldp+367,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x11U]),32);
        bufp->chgIData(oldp+368,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x12U]),32);
        bufp->chgIData(oldp+369,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x13U]),32);
        bufp->chgIData(oldp+370,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x14U]),32);
        bufp->chgIData(oldp+371,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x15U]),32);
        bufp->chgIData(oldp+372,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x16U]),32);
        bufp->chgIData(oldp+373,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x17U]),32);
        bufp->chgIData(oldp+374,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x18U]),32);
        bufp->chgIData(oldp+375,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x19U]),32);
        bufp->chgIData(oldp+376,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x1aU]),32);
        bufp->chgIData(oldp+377,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x1bU]),32);
        bufp->chgIData(oldp+378,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x1cU]),32);
        bufp->chgIData(oldp+379,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x1dU]),32);
        bufp->chgIData(oldp+380,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x1eU]),32);
        bufp->chgIData(oldp+381,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
                                 [0x1fU]),32);
        bufp->chgCData(oldp+382,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr),2);
        bufp->chgCData(oldp+383,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr),2);
        bufp->chgCData(oldp+384,(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count),4);
    }
    bufp->chgBit(oldp+385,(vlSelf->tb_tpu_top__DOT__clk));
    bufp->chgWData(oldp+386,(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out),128);
    bufp->chgCData(oldp+390,(vlSelf->tb_tpu_top__DOT__dut__DOT__next_state),5);
}

void Vtb_tpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root__trace_cleanup\n"); );
    // Init
    Vtb_tpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tpu_top___024root*>(voidSelf);
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
