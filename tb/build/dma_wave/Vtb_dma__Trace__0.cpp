// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_dma__Syms.h"


void Vtb_dma___024root__trace_chg_0_sub_0(Vtb_dma___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_dma___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root__trace_chg_0\n"); );
    // Init
    Vtb_dma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dma___024root*>(voidSelf);
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_dma___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_dma___024root__trace_chg_0_sub_0(Vtb_dma___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_dma__DOT__errors),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_dma__DOT__checks),32);
        bufp->chgBit(oldp+2,(vlSelf->tb_dma__DOT__rst_n));
        bufp->chgCData(oldp+3,(vlSelf->tb_dma__DOT__u_in),8);
        bufp->chgBit(oldp+4,(vlSelf->tb_dma__DOT__bias_fsm_start));
        bufp->chgBit(oldp+5,(vlSelf->tb_dma__DOT__activation_fsm_start));
        bufp->chgBit(oldp+6,(vlSelf->tb_dma__DOT__weight_fsm_start));
        bufp->chgBit(oldp+7,(vlSelf->tb_dma__DOT__tile_done));
        bufp->chgIData(oldp+8,(vlSelf->tb_dma__DOT__computed_bank_in),32);
        bufp->chgBit(oldp+9,(vlSelf->tb_dma__DOT__computed_bank_in_valid));
        bufp->chgBit(oldp+10,(vlSelf->tb_dma__DOT__start_read_fsm));
        bufp->chgCData(oldp+11,(vlSelf->tb_dma__DOT__bank),4);
        bufp->chgBit(oldp+12,(vlSelf->tb_dma__DOT__result_we));
        bufp->chgCData(oldp+13,(vlSelf->tb_dma__DOT__bias_data[0]),8);
        bufp->chgCData(oldp+14,(vlSelf->tb_dma__DOT__bias_data[1]),8);
        bufp->chgCData(oldp+15,(vlSelf->tb_dma__DOT__bias_data[2]),8);
        bufp->chgCData(oldp+16,(vlSelf->tb_dma__DOT__bias_data[3]),8);
        bufp->chgCData(oldp+17,(vlSelf->tb_dma__DOT__bias_data[4]),8);
        bufp->chgCData(oldp+18,(vlSelf->tb_dma__DOT__bias_data[5]),8);
        bufp->chgCData(oldp+19,(vlSelf->tb_dma__DOT__bias_data[6]),8);
        bufp->chgCData(oldp+20,(vlSelf->tb_dma__DOT__bias_data[7]),8);
        bufp->chgCData(oldp+21,(vlSelf->tb_dma__DOT__bias_data[8]),8);
        bufp->chgCData(oldp+22,(vlSelf->tb_dma__DOT__bias_data[9]),8);
        bufp->chgCData(oldp+23,(vlSelf->tb_dma__DOT__bias_data[10]),8);
        bufp->chgCData(oldp+24,(vlSelf->tb_dma__DOT__bias_data[11]),8);
        bufp->chgCData(oldp+25,(vlSelf->tb_dma__DOT__bias_data[12]),8);
        bufp->chgCData(oldp+26,(vlSelf->tb_dma__DOT__bias_data[13]),8);
        bufp->chgCData(oldp+27,(vlSelf->tb_dma__DOT__bias_data[14]),8);
        bufp->chgCData(oldp+28,(vlSelf->tb_dma__DOT__bias_data[15]),8);
        bufp->chgCData(oldp+29,(vlSelf->tb_dma__DOT__act_data[0]),8);
        bufp->chgCData(oldp+30,(vlSelf->tb_dma__DOT__act_data[1]),8);
        bufp->chgCData(oldp+31,(vlSelf->tb_dma__DOT__act_data[2]),8);
        bufp->chgCData(oldp+32,(vlSelf->tb_dma__DOT__act_data[3]),8);
        bufp->chgCData(oldp+33,(vlSelf->tb_dma__DOT__act_data[4]),8);
        bufp->chgCData(oldp+34,(vlSelf->tb_dma__DOT__act_data[5]),8);
        bufp->chgCData(oldp+35,(vlSelf->tb_dma__DOT__act_data[6]),8);
        bufp->chgCData(oldp+36,(vlSelf->tb_dma__DOT__act_data[7]),8);
        bufp->chgCData(oldp+37,(vlSelf->tb_dma__DOT__act_data[8]),8);
        bufp->chgCData(oldp+38,(vlSelf->tb_dma__DOT__act_data[9]),8);
        bufp->chgCData(oldp+39,(vlSelf->tb_dma__DOT__act_data[10]),8);
        bufp->chgCData(oldp+40,(vlSelf->tb_dma__DOT__act_data[11]),8);
        bufp->chgCData(oldp+41,(vlSelf->tb_dma__DOT__act_data[12]),8);
        bufp->chgCData(oldp+42,(vlSelf->tb_dma__DOT__act_data[13]),8);
        bufp->chgCData(oldp+43,(vlSelf->tb_dma__DOT__act_data[14]),8);
        bufp->chgCData(oldp+44,(vlSelf->tb_dma__DOT__act_data[15]),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+45,(vlSelf->tb_dma__DOT__dut__DOT__weight_we_in_single),8);
        bufp->chgCData(oldp+46,(vlSelf->tb_dma__DOT__dut__DOT__bias_we_in_single),8);
        bufp->chgCData(oldp+47,(vlSelf->tb_dma__DOT__dut__DOT__act_we_in_single),8);
        bufp->chgBit(oldp+48,(vlSelf->tb_dma__DOT__dut__DOT__weight_clr));
        bufp->chgBit(oldp+49,(vlSelf->tb_dma__DOT__dut__DOT__act_clr));
        bufp->chgCData(oldp+50,(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state),6);
        bufp->chgCData(oldp+51,(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state),6);
        bufp->chgCData(oldp+52,(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state),6);
        bufp->chgCData(oldp+53,(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+54,((0xffU & vlSelf->tb_dma__DOT__dut__DOT__result_re_out)),8);
        bufp->chgIData(oldp+55,(vlSelf->tb_dma__DOT__weight_bank_out),32);
        bufp->chgBit(oldp+56,(vlSelf->tb_dma__DOT__weight_bank_out_valid));
        __Vtemp_1[0U] = vlSelf->tb_dma__DOT____Vcellout__dut__activation_bank_out;
        __Vtemp_1[1U] = 0U;
        __Vtemp_1[2U] = 0U;
        __Vtemp_1[3U] = 0U;
        bufp->chgWData(oldp+57,(__Vtemp_1),128);
        bufp->chgBit(oldp+61,(vlSelf->tb_dma__DOT__activation_bank_out_valid));
        bufp->chgWData(oldp+62,(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff),128);
        bufp->chgBit(oldp+66,(((~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_full_prev)) 
                               & (0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr)))));
        bufp->chgIData(oldp+67,(vlSelf->tb_dma__DOT____Vcellout__dut__activation_bank_out),32);
        bufp->chgBit(oldp+68,(vlSelf->tb_dma__DOT__dut__DOT__activations_busy));
        bufp->chgBit(oldp+69,(vlSelf->tb_dma__DOT__dut__DOT__weights_busy));
        bufp->chgBit(oldp+70,(vlSelf->tb_dma__DOT__dut__DOT__bias_busy));
        bufp->chgBit(oldp+71,(vlSelf->tb_dma__DOT__dut__DOT__en_counter));
        bufp->chgBit(oldp+72,(vlSelf->tb_dma__DOT__dut__DOT__clr_counter));
        bufp->chgBit(oldp+73,(vlSelf->tb_dma__DOT__dut__DOT__a_ready));
        bufp->chgBit(oldp+74,(vlSelf->tb_dma__DOT__dut__DOT__b_ready));
        bufp->chgBit(oldp+75,(vlSelf->tb_dma__DOT__dut__DOT__w_ready));
        bufp->chgBit(oldp+76,(vlSelf->tb_dma__DOT__dut__DOT__weight_we));
        bufp->chgBit(oldp+77,(vlSelf->tb_dma__DOT__dut__DOT__weight_re));
        bufp->chgBit(oldp+78,((0x100U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr))));
        bufp->chgBit(oldp+79,(vlSelf->tb_dma__DOT__dut__DOT__weight_empty));
        bufp->chgBit(oldp+80,(vlSelf->tb_dma__DOT__dut__DOT__act_we));
        bufp->chgBit(oldp+81,(vlSelf->tb_dma__DOT__dut__DOT__act_re));
        bufp->chgBit(oldp+82,((0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr))));
        bufp->chgBit(oldp+83,(vlSelf->tb_dma__DOT__dut__DOT__act_empty));
        bufp->chgBit(oldp+84,(vlSelf->tb_dma__DOT__dut__DOT__act_full_prev));
        bufp->chgBit(oldp+85,(vlSelf->tb_dma__DOT__dut__DOT__bias_we));
        bufp->chgBit(oldp+86,(vlSelf->tb_dma__DOT__dut__DOT__bias_clr));
        bufp->chgBit(oldp+87,((0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr))));
        bufp->chgBit(oldp+88,(((IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__rd_ptr) 
                               == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr))));
        bufp->chgBit(oldp+89,(vlSelf->tb_dma__DOT__dut__DOT__bias_full_prev));
        bufp->chgBit(oldp+90,(vlSelf->tb_dma__DOT__dut__DOT__result_re));
        bufp->chgBit(oldp+91,(vlSelf->tb_dma__DOT__dut__DOT__result_clr));
        bufp->chgIData(oldp+92,(vlSelf->tb_dma__DOT__dut__DOT__result_re_out),32);
        bufp->chgBit(oldp+93,((0x100U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr))));
        bufp->chgBit(oldp+94,(vlSelf->tb_dma__DOT__dut__DOT__result_empty));
        bufp->chgBit(oldp+95,(vlSelf->tb_dma__DOT__dut__DOT__result_re_valid));
        bufp->chgSData(oldp+96,(vlSelf->tb_dma__DOT__dut__DOT__read_count),9);
        bufp->chgBit(oldp+97,((0x40U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__read_count))));
        bufp->chgCData(oldp+98,(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state),6);
        bufp->chgWData(oldp+99,(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff),128);
        bufp->chgSData(oldp+103,(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr),10);
        bufp->chgSData(oldp+104,(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__rd_ptr),10);
        bufp->chgCData(oldp+105,(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state),6);
        bufp->chgBit(oldp+106,(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__re_valid));
        bufp->chgSData(oldp+107,(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr),10);
        bufp->chgSData(oldp+108,(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__rd_ptr),10);
        bufp->chgCData(oldp+109,(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state),6);
        __Vtemp_2[0U] = vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[0U];
        __Vtemp_2[1U] = vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[1U];
        __Vtemp_2[2U] = vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[2U];
        __Vtemp_2[3U] = vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[3U];
        bufp->chgWData(oldp+110,(__Vtemp_2),128);
        bufp->chgWData(oldp+114,(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff),2048);
        bufp->chgSData(oldp+178,(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr),10);
        bufp->chgSData(oldp+179,(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr),10);
        bufp->chgCData(oldp+180,(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state),6);
        __Vtemp_3[0U] = vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[0U];
        __Vtemp_3[1U] = vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[1U];
        __Vtemp_3[2U] = vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[2U];
        __Vtemp_3[3U] = vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[3U];
        bufp->chgWData(oldp+181,(__Vtemp_3),128);
        bufp->chgWData(oldp+185,(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff),2048);
        bufp->chgSData(oldp+249,(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr),10);
        bufp->chgSData(oldp+250,(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr),10);
    }
    bufp->chgBit(oldp+251,(vlSelf->tb_dma__DOT__clk));
}

void Vtb_dma___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root__trace_cleanup\n"); );
    // Init
    Vtb_dma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dma___024root*>(voidSelf);
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
