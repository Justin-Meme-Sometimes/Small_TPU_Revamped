// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtpu_top.h for the primary calling header

#include "Vtpu_top__pch.h"
#include "Vtpu_top___024root.h"

VL_INLINE_OPT void Vtpu_top___024root___ico_sequent__TOP__0(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->tpu_top__DOT__dma__DOT__weight_we_in_single = 0U;
    if (((1U == (IData)(vlSelf->tpu_top__DOT__bank)) 
         & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_ready)))) {
        vlSelf->tpu_top__DOT__dma__DOT__weight_we_in_single 
            = vlSelf->u_in;
    }
    vlSelf->tpu_top__DOT__dma__DOT__bias_we_in_single = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_we_in_single = 0U;
    if ((1U & (~ ((1U == (IData)(vlSelf->tpu_top__DOT__bank)) 
                  & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_ready)))))) {
        if (((2U == (IData)(vlSelf->tpu_top__DOT__bank)) 
             & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_ready)))) {
            vlSelf->tpu_top__DOT__dma__DOT__bias_we_in_single 
                = vlSelf->u_in;
        }
        if ((1U & (~ ((2U == (IData)(vlSelf->tpu_top__DOT__bank)) 
                      & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_ready)))))) {
            if (((3U == (IData)(vlSelf->tpu_top__DOT__bank)) 
                 & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_ready)))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_we_in_single 
                    = vlSelf->u_in;
            }
        }
    }
}

void Vtpu_top___024root___eval_ico(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtpu_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtpu_top___024root___eval_triggers__ico(Vtpu_top___024root* vlSelf);

bool Vtpu_top___024root___eval_phase__ico(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtpu_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtpu_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtpu_top___024root___eval_act(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_act\n"); );
}

extern const VlWide<32>/*1023:0*/ Vtpu_top__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<64>/*2047:0*/ Vtpu_top__ConstPool__CONST_h6be9aa18_0;
extern const VlUnpacked<CData/*4:0*/, 64> Vtpu_top__ConstPool__TABLE_h4a3fe364_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtpu_top__ConstPool__TABLE_hd9b35755_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtpu_top__ConstPool__TABLE_hc2151b60_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtpu_top__ConstPool__TABLE_h993098a3_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtpu_top__ConstPool__TABLE_hf3da0886_0;
extern const VlUnpacked<CData/*4:0*/, 128> Vtpu_top__ConstPool__TABLE_h73872590_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtpu_top__ConstPool__TABLE_h95214b9c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtpu_top__ConstPool__TABLE_he5d58018_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtpu_top__ConstPool__TABLE_h26d33955_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtpu_top__ConstPool__TABLE_hfc07e341_0;

VL_INLINE_OPT void Vtpu_top___024root___nba_sequent__TOP__0(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tpu_top__DOT__start;
    tpu_top__DOT__start = 0;
    IData/*31:0*/ __Vilp;
    CData/*0:0*/ tpu_top__DOT__start_read_fsm;
    tpu_top__DOT__start_read_fsm = 0;
    CData/*0:0*/ tpu_top__DOT__weight_fsm_start;
    tpu_top__DOT__weight_fsm_start = 0;
    CData/*0:0*/ tpu_top__DOT__activation_fsm_start;
    tpu_top__DOT__activation_fsm_start = 0;
    CData/*0:0*/ tpu_top__DOT__bias_fsm_start;
    tpu_top__DOT__bias_fsm_start = 0;
    CData/*0:0*/ tpu_top__DOT__drain_state_start;
    tpu_top__DOT__drain_state_start = 0;
    CData/*0:0*/ tpu_top__DOT__weight_data_valid;
    tpu_top__DOT__weight_data_valid = 0;
    CData/*0:0*/ tpu_top__DOT__compute_state;
    tpu_top__DOT__compute_state = 0;
    CData/*0:0*/ tpu_top__DOT____VdfgExtracted_hf6a6c9db__0;
    tpu_top__DOT____VdfgExtracted_hf6a6c9db__0 = 0;
    CData/*0:0*/ tpu_top__DOT____VdfgExtracted_h621a341a__0;
    tpu_top__DOT____VdfgExtracted_h621a341a__0 = 0;
    CData/*0:0*/ tpu_top__DOT__dma__DOT__activations_busy;
    tpu_top__DOT__dma__DOT__activations_busy = 0;
    CData/*0:0*/ tpu_top__DOT__dma__DOT__weights_busy;
    tpu_top__DOT__dma__DOT__weights_busy = 0;
    CData/*0:0*/ tpu_top__DOT__dma__DOT__bias_busy;
    tpu_top__DOT__dma__DOT__bias_busy = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vdly__tpu_top__DOT__prefill_count;
    __Vdly__tpu_top__DOT__prefill_count = 0;
    SData/*8:0*/ __Vdly__tpu_top__DOT__preload_count;
    __Vdly__tpu_top__DOT__preload_count = 0;
    SData/*8:0*/ __Vdly__tpu_top__DOT__compute_count;
    __Vdly__tpu_top__DOT__compute_count = 0;
    SData/*8:0*/ __Vdly__tpu_top__DOT__drain_count;
    __Vdly__tpu_top__DOT__drain_count = 0;
    SData/*8:0*/ __Vdly__tpu_top__DOT__funcs_count;
    __Vdly__tpu_top__DOT__funcs_count = 0;
    SData/*8:0*/ __Vdly__tpu_top__DOT__tile_count;
    __Vdly__tpu_top__DOT__tile_count = 0;
    CData/*4:0*/ __Vdlyvdim0__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0;
    __Vdlyvdim0__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0;
    __Vdlyvval__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0;
    __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 0;
    CData/*1:0*/ __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
    __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr = 0;
    CData/*4:0*/ __Vdlyvdim0__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1;
    __Vdlyvdim0__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1;
    __Vdlyvval__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1;
    __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v2;
    __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v2 = 0;
    CData/*1:0*/ __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr;
    __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr = 0;
    CData/*3:0*/ __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count;
    __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr;
    __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr;
    __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg = 0;
    IData/*31:0*/ __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr = 0;
    SData/*8:0*/ __Vdly__tpu_top__DOT__dma__DOT__act_re_count;
    __Vdly__tpu_top__DOT__dma__DOT__act_re_count = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr = 0;
    SData/*8:0*/ __Vdly__tpu_top__DOT__dma__DOT__read_count;
    __Vdly__tpu_top__DOT__dma__DOT__read_count = 0;
    SData/*8:0*/ __Vdly__tpu_top__DOT__dma__DOT__act_we_count;
    __Vdly__tpu_top__DOT__dma__DOT__act_we_count = 0;
    // Body
    __Vdly__tpu_top__DOT__dma__DOT__act_re_count = vlSelf->tpu_top__DOT__dma__DOT__act_re_count;
    __Vdly__tpu_top__DOT__prefill_count = vlSelf->tpu_top__DOT__prefill_count;
    __Vdly__tpu_top__DOT__dma__DOT__read_count = vlSelf->tpu_top__DOT__dma__DOT__read_count;
    __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr 
        = vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__preload_count = vlSelf->tpu_top__DOT__preload_count;
    __Vdly__tpu_top__DOT__drain_count = vlSelf->tpu_top__DOT__drain_count;
    __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr 
        = vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr;
    __Vdly__tpu_top__DOT__funcs_count = vlSelf->tpu_top__DOT__funcs_count;
    __Vdly__tpu_top__DOT__compute_count = vlSelf->tpu_top__DOT__compute_count;
    __Vdly__tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr 
        = vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__act_we_count = vlSelf->tpu_top__DOT__dma__DOT__act_we_count;
    __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr 
        = vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr 
        = vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr 
        = vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr 
        = vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr;
    __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count 
        = vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count;
    __Vdly__tpu_top__DOT__tile_count = vlSelf->tpu_top__DOT__tile_count;
    __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr 
        = vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr;
    __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr 
        = vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr;
    __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr 
        = vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr;
    __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr 
        = vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
    __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 0U;
    __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 0U;
    __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v2 = 0U;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
    __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr 
        = vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr;
    __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr 
        = vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr;
    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__o_bank_reg 
        = ((IData)(vlSelf->rst_n) && (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active));
    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__o_bank_reg 
        = ((IData)(vlSelf->rst_n) && (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active));
    if (vlSelf->rst_n) {
        if (vlSelf->tpu_top__DOT__dma__DOT__act_clr_counter) {
            __Vdly__tpu_top__DOT__dma__DOT__act_re_count = 0U;
        } else if (vlSelf->tpu_top__DOT__dma__DOT__act_en_counter) {
            __Vdly__tpu_top__DOT__dma__DOT__act_re_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_re_count)));
        }
        vlSelf->tpu_top__DOT__dma__DOT__act_re_count 
            = __Vdly__tpu_top__DOT__dma__DOT__act_re_count;
        if (vlSelf->tpu_top__DOT__prefill_clr) {
            __Vdly__tpu_top__DOT__prefill_count = 0U;
        } else if (vlSelf->tpu_top__DOT__prefill_en) {
            __Vdly__tpu_top__DOT__prefill_count = (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tpu_top__DOT__prefill_count)));
        }
        vlSelf->tpu_top__DOT__prefill_count = __Vdly__tpu_top__DOT__prefill_count;
        if (vlSelf->tpu_top__DOT__dma__DOT__clr_counter) {
            __Vdly__tpu_top__DOT__dma__DOT__read_count = 0U;
        } else if (vlSelf->tpu_top__DOT__dma__DOT__en_counter) {
            __Vdly__tpu_top__DOT__dma__DOT__read_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__dma__DOT__read_count)));
        }
        vlSelf->tpu_top__DOT__dma__DOT__read_count 
            = __Vdly__tpu_top__DOT__dma__DOT__read_count;
        if (vlSelf->tpu_top__DOT__preload_clr) {
            __Vdly__tpu_top__DOT__preload_count = 0U;
        } else if (vlSelf->tpu_top__DOT__preload_en) {
            __Vdly__tpu_top__DOT__preload_count = (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tpu_top__DOT__preload_count)));
        }
        vlSelf->tpu_top__DOT__preload_count = __Vdly__tpu_top__DOT__preload_count;
        if (vlSelf->tpu_top__DOT__drain_clr) {
            __Vdly__tpu_top__DOT__drain_count = 0U;
        } else if (vlSelf->tpu_top__DOT__drain_en) {
            __Vdly__tpu_top__DOT__drain_count = (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->tpu_top__DOT__drain_count)));
        }
        vlSelf->tpu_top__DOT__drain_count = __Vdly__tpu_top__DOT__drain_count;
        if (((((IData)(vlSelf->tpu_top__DOT__w_l__DOT__fifo_we) 
               & (IData)(vlSelf->tpu_top__DOT__w_l__DOT__fifo_re)) 
              & (0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count))) 
             & (4U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)))) {
            __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr)));
            __Vdlyvval__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 
                = vlSelf->tpu_top__DOT__weight_bank_out;
            __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 1U;
            __Vdlyvdim0__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 
                = vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
            __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr)));
        } else {
            if (((IData)(vlSelf->tpu_top__DOT__w_l__DOT__fifo_re) 
                 & (0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)))) {
                __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr)));
            }
            if ((1U & (~ ((IData)(vlSelf->tpu_top__DOT__w_l__DOT__fifo_re) 
                          & (0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)))))) {
                if (((IData)(vlSelf->tpu_top__DOT__w_l__DOT__fifo_we) 
                     & (4U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)))) {
                    __Vdlyvval__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 
                        = vlSelf->tpu_top__DOT__weight_bank_out;
                    __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 1U;
                    __Vdlyvdim0__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 
                        = vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
                    __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr)));
                }
            }
        }
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr 
            = __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr;
        if (vlSelf->tpu_top__DOT__func_clr) {
            __Vdly__tpu_top__DOT__funcs_count = 0U;
        } else if (vlSelf->tpu_top__DOT__func_en) {
            __Vdly__tpu_top__DOT__funcs_count = (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->tpu_top__DOT__funcs_count)));
        }
        vlSelf->tpu_top__DOT__funcs_count = __Vdly__tpu_top__DOT__funcs_count;
        if (vlSelf->tpu_top__DOT__compute_clr) {
            __Vdly__tpu_top__DOT__compute_count = 0U;
        } else if (vlSelf->tpu_top__DOT__compute_en) {
            __Vdly__tpu_top__DOT__compute_count = (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tpu_top__DOT__compute_count)));
        }
        vlSelf->tpu_top__DOT__compute_count = __Vdly__tpu_top__DOT__compute_count;
        if (vlSelf->tpu_top__DOT__dma__DOT__act_we_clr_counter) {
            __Vdly__tpu_top__DOT__dma__DOT__act_we_count = 0U;
        } else if (vlSelf->tpu_top__DOT__dma__DOT__act_we_en_counter) {
            __Vdly__tpu_top__DOT__dma__DOT__act_we_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we_count)));
        }
        vlSelf->tpu_top__DOT__dma__DOT__act_we_count 
            = __Vdly__tpu_top__DOT__dma__DOT__act_we_count;
        if ((1U & (~ ((((IData)(vlSelf->tpu_top__DOT__w_l__DOT__fifo_we) 
                        & (IData)(vlSelf->tpu_top__DOT__w_l__DOT__fifo_re)) 
                       & (~ (IData)(vlSelf->tpu_top__DOT__weight_fifo_empty))) 
                      & (~ (IData)(vlSelf->tpu_top__DOT__weight_fifo_full)))))) {
            if (((IData)(vlSelf->tpu_top__DOT__w_l__DOT__fifo_re) 
                 & (~ (IData)(vlSelf->tpu_top__DOT__weight_fifo_empty)))) {
                __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count 
                    = (0xfU & ((IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count) 
                               - (IData)(1U)));
            } else if (((IData)(vlSelf->tpu_top__DOT__w_l__DOT__fifo_we) 
                        & (~ (IData)(vlSelf->tpu_top__DOT__weight_fifo_full)))) {
                __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)));
            }
        }
        if (vlSelf->tpu_top__DOT__tile_clr) {
            __Vdly__tpu_top__DOT__tile_count = 0U;
        } else if (vlSelf->tpu_top__DOT__tile_done) {
            __Vdly__tpu_top__DOT__tile_count = (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->tpu_top__DOT__tile_count)));
        }
        vlSelf->tpu_top__DOT__tile_count = __Vdly__tpu_top__DOT__tile_count;
    } else {
        __Vdly__tpu_top__DOT__dma__DOT__act_re_count = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__act_re_count 
            = __Vdly__tpu_top__DOT__dma__DOT__act_re_count;
        __Vdly__tpu_top__DOT__prefill_count = 0U;
        vlSelf->tpu_top__DOT__prefill_count = __Vdly__tpu_top__DOT__prefill_count;
        __Vdly__tpu_top__DOT__dma__DOT__read_count = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__read_count 
            = __Vdly__tpu_top__DOT__dma__DOT__read_count;
        __Vdly__tpu_top__DOT__preload_count = 0U;
        vlSelf->tpu_top__DOT__preload_count = __Vdly__tpu_top__DOT__preload_count;
        __Vdly__tpu_top__DOT__drain_count = 0U;
        vlSelf->tpu_top__DOT__drain_count = __Vdly__tpu_top__DOT__drain_count;
        __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr 
            = __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr;
        __Vdly__tpu_top__DOT__funcs_count = 0U;
        vlSelf->tpu_top__DOT__funcs_count = __Vdly__tpu_top__DOT__funcs_count;
        __Vdly__tpu_top__DOT__compute_count = 0U;
        vlSelf->tpu_top__DOT__compute_count = __Vdly__tpu_top__DOT__compute_count;
        __Vdly__tpu_top__DOT__dma__DOT__act_we_count = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__act_we_count 
            = __Vdly__tpu_top__DOT__dma__DOT__act_we_count;
        __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count = 0U;
        __Vdly__tpu_top__DOT__tile_count = 0U;
        vlSelf->tpu_top__DOT__tile_count = __Vdly__tpu_top__DOT__tile_count;
        __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr = 0U;
        __Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v2 = 1U;
    }
    vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr 
        = __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
    if (__Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0) {
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[__Vdlyvdim0__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0] 
            = __Vdlyvval__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v0;
    }
    if (__Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1) {
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[__Vdlyvdim0__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1] 
            = __Vdlyvval__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v1;
    }
    if (__Vdlyvset__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q__v2) {
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[1U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[2U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[3U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[4U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[5U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[6U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[7U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[8U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[9U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0xaU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0xbU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0xcU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0xdU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0xeU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0xfU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x10U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x11U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x12U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x13U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x14U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x15U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x16U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x17U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x18U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x19U] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x1aU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x1bU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x1cU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x1dU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x1eU] = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[0x1fU] = 0U;
    }
    vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count 
        = __Vdly__tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count;
    if (vlSelf->rst_n) {
        vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state 
            = vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__next_state;
        vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state 
            = vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__next_state;
        vlSelf->tpu_top__DOT__sys_array__DOT__v_fsm_1__DOT__current_state 
            = vlSelf->tpu_top__DOT__sys_array__DOT__v_fsm_1__DOT__next_state;
        vlSelf->tpu_top__DOT__sys_array__DOT__e_fsm_1__DOT__current_state 
            = vlSelf->tpu_top__DOT__sys_array__DOT__e_fsm_1__DOT__next_state;
        if (vlSelf->tpu_top__DOT__tile_clr) {
            vlSelf->tpu_top__DOT__activation_bank_out_valid = 0U;
            __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr = 0U;
        } else {
            if (vlSelf->tpu_top__DOT__dma__DOT__act_we) {
                if (((0x80U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr)) 
                     & (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we))) {
                    vlSelf->tpu_top__DOT__activation_bank_out_valid = 0U;
                }
            } else {
                vlSelf->tpu_top__DOT__activation_bank_out_valid 
                    = ((IData)(vlSelf->tpu_top__DOT__dma__DOT__act_re) 
                       && (1U & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_empty))));
            }
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we)))) {
                if (vlSelf->tpu_top__DOT__dma__DOT__act_re) {
                    if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_empty)))) {
                        vlSelf->tpu_top__DOT__activation_bank_out 
                            = ((0xffffff00U & vlSelf->tpu_top__DOT__activation_bank_out) 
                               | (0xffU & (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr), 3U)))
                                             ? 0U : 
                                            (vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x3ffU 
                                                  & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr), 3U))))) 
                                           | (vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[
                                              (0x1fU 
                                               & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr), 3U) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr), 3U))))));
                        vlSelf->tpu_top__DOT__activation_bank_out 
                            = ((0xffff00ffU & vlSelf->tpu_top__DOT__activation_bank_out) 
                               | (0xff00U & ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(10,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U)))
                                                ? 0U
                                                : (
                                                   vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x3ffU 
                                                      & VL_SHIFTL_III(10,32,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U))))) 
                                              | (vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[
                                                 (0x1fU 
                                                  & (VL_SHIFTL_III(10,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U)))) 
                                             << 8U)));
                        vlSelf->tpu_top__DOT__activation_bank_out 
                            = ((0xff00ffffU & vlSelf->tpu_top__DOT__activation_bank_out) 
                               | (0xff0000U & ((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U))))) 
                                                | (vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(10,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U)))) 
                                               << 0x10U)));
                        vlSelf->tpu_top__DOT__activation_bank_out 
                            = ((0xffffffU & vlSelf->tpu_top__DOT__activation_bank_out) 
                               | ((((0U == (0x1fU & 
                                            VL_SHIFTL_III(10,32,32, 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U)))
                                     ? 0U : (vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x3ffU 
                                                  & VL_SHIFTL_III(10,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U))))) 
                                   | (vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[
                                      (0x1fU & (VL_SHIFTL_III(10,32,32, 
                                                              ((IData)(3U) 
                                                               + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U) 
                                                >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                                ((IData)(3U) 
                                                                 + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)), 3U)))) 
                                  << 0x18U));
                        __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr 
                            = (0x3ffU & ((IData)(4U) 
                                         + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr)));
                    }
                } else {
                    vlSelf->tpu_top__DOT__activation_bank_out = 0U;
                }
            }
        }
        vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state 
            = vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state;
        vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state 
            = vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state;
        vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state 
            = vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state;
        if (vlSelf->tpu_top__DOT__dma__DOT__weight_clr) {
            vlSelf->tpu_top__DOT__weight_bank_out_valid = 0U;
        } else if (vlSelf->tpu_top__DOT__dma__DOT__weight_we) {
            if (((0x100U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr)) 
                 & (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_we))) {
                vlSelf->tpu_top__DOT__weight_bank_out_valid = 0U;
            }
        } else {
            vlSelf->tpu_top__DOT__weight_bank_out_valid 
                = ((IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_re) 
                   && (1U & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_empty))));
        }
        vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state 
            = vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state;
        vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state 
            = vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state;
        if (vlSelf->tpu_top__DOT__a_buff__DOT__clr_b) {
            vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_b = 0U;
            __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr = 0U;
        } else {
            if (vlSelf->tpu_top__DOT__a_buff__DOT__we_b) {
                if (((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_b) 
                     & (0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr)))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_b = 0U;
                }
            } else {
                vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_b 
                    = ((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__re_b) 
                       && (1U & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_empty))));
            }
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_b)))) {
                if (vlSelf->tpu_top__DOT__a_buff__DOT__re_b) {
                    if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_empty)))) {
                        vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b 
                            = ((0xffffff00U & vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b) 
                               | (0xffU & (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr), 3U)))
                                             ? 0U : 
                                            (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr), 3U))))) 
                                           | (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                              (3U & 
                                               (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr), 3U) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr), 3U))))));
                        vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b 
                            = ((0xffff00ffU & vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b) 
                               | (0xff00U & ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U)))
                                                ? 0U
                                                : (
                                                   vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U))))) 
                                              | (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                                 (3U 
                                                  & (VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U)))) 
                                             << 8U)));
                        vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b 
                            = ((0xff00ffffU & vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b) 
                               | (0xff0000U & ((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U))))) 
                                                | (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                                   (3U 
                                                    & (VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U)))) 
                                               << 0x10U)));
                        vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b 
                            = ((0xffffffU & vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b) 
                               | ((((0U == (0x1fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U)))
                                     ? 0U : (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U))))) 
                                   | (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                      (3U & (VL_SHIFTL_III(7,32,32, 
                                                           ((IData)(3U) 
                                                            + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U) 
                                             >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                                ((IData)(3U) 
                                                                 + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)), 3U)))) 
                                  << 0x18U));
                        __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr 
                            = (0x3ffU & ((IData)(4U) 
                                         + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr)));
                    }
                } else {
                    vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b = 0U;
                }
            }
        }
        if (vlSelf->tpu_top__DOT__a_buff__DOT__clr_a) {
            vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_a = 0U;
            __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr = 0U;
        } else {
            if (vlSelf->tpu_top__DOT__a_buff__DOT__we_a) {
                if (((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_a) 
                     & (0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr)))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_a = 0U;
                }
            } else {
                vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_a 
                    = ((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__re_a) 
                       && (1U & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_empty))));
            }
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_a)))) {
                if (vlSelf->tpu_top__DOT__a_buff__DOT__re_a) {
                    if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_empty)))) {
                        vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a 
                            = ((0xffffff00U & vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a) 
                               | (0xffU & (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr), 3U)))
                                             ? 0U : 
                                            (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr), 3U))))) 
                                           | (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                              (3U & 
                                               (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr), 3U) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr), 3U))))));
                        vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a 
                            = ((0xffff00ffU & vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a) 
                               | (0xff00U & ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U)))
                                                ? 0U
                                                : (
                                                   vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U))))) 
                                              | (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                                 (3U 
                                                  & (VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U)))) 
                                             << 8U)));
                        vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a 
                            = ((0xff00ffffU & vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a) 
                               | (0xff0000U & ((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U))))) 
                                                | (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                                   (3U 
                                                    & (VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U)))) 
                                               << 0x10U)));
                        vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a 
                            = ((0xffffffU & vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a) 
                               | ((((0U == (0x1fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U)))
                                     ? 0U : (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U))))) 
                                   | (vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                      (3U & (VL_SHIFTL_III(7,32,32, 
                                                           ((IData)(3U) 
                                                            + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U) 
                                             >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                                ((IData)(3U) 
                                                                 + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)), 3U)))) 
                                  << 0x18U));
                        __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr 
                            = (0x3ffU & ((IData)(4U) 
                                         + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr)));
                    }
                } else {
                    vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a = 0U;
                }
            }
        }
        vlSelf->tpu_top__DOT__w_l__DOT__current_state 
            = vlSelf->tpu_top__DOT__w_l__DOT__next_state;
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr 
            = __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr;
        if ((2U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
            if ((4U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                if ((5U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                    vlSelf->tpu_top__DOT__bank = 1U;
                } else if ((6U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                    vlSelf->tpu_top__DOT__bank = 3U;
                } else if ((7U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                    vlSelf->tpu_top__DOT__bank = 2U;
                }
            }
            if ((4U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                vlSelf->uio_out = (0U == (IData)(vlSelf->tpu_top__DOT__current_state));
            }
        }
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr 
            = __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr 
            = __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr;
        if (vlSelf->tpu_top__DOT__tile_done) {
            if ((1U & ((~ (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__h_en_0)) 
                       & (~ (IData)(vlSelf->tpu_top__DOT__drain_state))))) {
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg = 0U;
            }
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__down_out_drain = 0U;
            if ((1U & ((~ (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__h_en_1)) 
                       & (~ (IData)(vlSelf->tpu_top__DOT__drain_state))))) {
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg = 0U;
            }
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__down_out_drain = 0U;
            if ((1U & ((~ (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__h_en_2)) 
                       & (~ (IData)(vlSelf->tpu_top__DOT__drain_state))))) {
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg = 0U;
            }
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__down_out_drain = 0U;
            if ((1U & ((~ (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__h_en_3)) 
                       & (~ (IData)(vlSelf->tpu_top__DOT__drain_state))))) {
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg = 0U;
                __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg = 0U;
            }
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__down_out_drain = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__down_out_drain = 0U;
        } else if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__pe_preload_en)))) {
            if (vlSelf->tpu_top__DOT__drain_state) {
                if (vlSelf->tpu_top__DOT__sys_array__DOT__v_en_0) {
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
                } else {
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
                }
                if (vlSelf->tpu_top__DOT__sys_array__DOT__v_en_2) {
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_0__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg);
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_1__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg);
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_2__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg);
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_3__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg);
                } else {
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
                }
                if (vlSelf->tpu_top__DOT__sys_array__DOT__v_en_1) {
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_0__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg);
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_1__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg);
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_2__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg);
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_3__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg);
                } else {
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
                }
                if (vlSelf->tpu_top__DOT__sys_array__DOT__v_en_3) {
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_0__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg);
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_1__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg);
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_2__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg);
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_3__accum_in 
                           + vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg);
                } else {
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__down_out_drain 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
                }
            } else {
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_0) {
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__down_out_drain = 0U;
                }
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_1) {
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__down_out_drain = 0U;
                }
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_2) {
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__down_out_drain = 0U;
                }
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_3) {
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__down_out_drain = 0U;
                    __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
                           + (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__product_reg));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__down_out_drain = 0U;
                }
            }
        }
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
        if (vlSelf->tpu_top__DOT__dma__DOT__result_clr) {
            __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr = 0U;
        } else if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__result_we)))) {
            if (vlSelf->tpu_top__DOT__dma__DOT__result_re) {
                if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_empty)))) {
                    vlSelf->tpu_top__DOT__dma__DOT__result_re_out 
                        = ((0xffffff00U & vlSelf->tpu_top__DOT__dma__DOT__result_re_out) 
                           | (0xffU & (((0U == (0x1fU 
                                                & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr), 3U)))
                                         ? 0U : (vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x7ffU 
                                                    & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr), 3U))))) 
                                       | (vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff[
                                          (0x3fU & 
                                           (VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr), 3U) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr), 3U))))));
                    vlSelf->tpu_top__DOT__dma__DOT__result_re_out 
                        = ((0xffff00ffU & vlSelf->tpu_top__DOT__dma__DOT__result_re_out) 
                           | (0xff00U & ((((0U == (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U)))
                                            ? 0U : 
                                           (vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff[
                                            (((IData)(7U) 
                                              + (0x7ffU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U))))) 
                                          | (vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff[
                                             (0x3fU 
                                              & (VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U)))) 
                                         << 8U)));
                    vlSelf->tpu_top__DOT__dma__DOT__result_re_out 
                        = ((0xff00ffffU & vlSelf->tpu_top__DOT__dma__DOT__result_re_out) 
                           | (0xff0000U & ((((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(2U) 
                                                                + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U)))
                                              ? 0U : 
                                             (vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff[
                                              (((IData)(7U) 
                                                + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U))))) 
                                            | (vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff[
                                               (0x3fU 
                                                & (VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U)))) 
                                           << 0x10U)));
                    vlSelf->tpu_top__DOT__dma__DOT__result_re_out 
                        = ((0xffffffU & vlSelf->tpu_top__DOT__dma__DOT__result_re_out) 
                           | ((((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(3U) 
                                                               + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U)))
                                 ? 0U : (vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff[
                                         (((IData)(7U) 
                                           + (0x7ffU 
                                              & VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(3U) 
                                                               + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(11,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U))))) 
                               | (vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff[
                                  (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U) 
                                            >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)), 3U)))) 
                              << 0x18U));
                    __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr 
                        = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr)));
                }
            } else {
                vlSelf->tpu_top__DOT__dma__DOT__result_re_out = 0U;
            }
        }
    } else {
        vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__v_fsm_1__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__e_fsm_1__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__w_l__DOT__current_state = 0U;
        __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr 
            = __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr;
        vlSelf->tpu_top__DOT__bank = 0U;
        __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr 
            = __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr;
        __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr 
            = __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr;
        vlSelf->uio_out = 0U;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
        __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
            = __Vdly__tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
        __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr = 0U;
    }
    vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr 
        = __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr;
    tpu_top__DOT____VdfgExtracted_hf6a6c9db__0 = ((8U 
                                                   != (IData)(vlSelf->tpu_top__DOT__tile_count)) 
                                                  & (3U 
                                                     == (IData)(vlSelf->tpu_top__DOT__funcs_count)));
    tpu_top__DOT____VdfgExtracted_h621a341a__0 = ((3U 
                                                   == (IData)(vlSelf->tpu_top__DOT__funcs_count)) 
                                                  & (8U 
                                                     == (IData)(vlSelf->tpu_top__DOT__tile_count)));
    vlSelf->tpu_top__DOT__weight_fifo_full = (4U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tpu_top__DOT__weight_fifo_empty = (0U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tpu_top__DOT__dma__DOT__act_en_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_clr_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_re = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state))) {
            vlSelf->tpu_top__DOT__dma__DOT__act_en_counter = 1U;
            if ((4U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_re_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_clr_counter = 1U;
            }
            if ((4U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_re_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_re = 1U;
            }
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__en_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__clr_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__result_re = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_we_en_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_we_clr_counter = 0U;
    tpu_top__DOT__dma__DOT__activations_busy = 0U;
    vlSelf->u_out = (0xffU & vlSelf->tpu_top__DOT__dma__DOT__result_re_out);
    if (vlSelf->rst_n) {
        if (vlSelf->tpu_top__DOT__dma__DOT__weight_clr) {
            __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr = 0U;
        } else if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_we)))) {
            if (vlSelf->tpu_top__DOT__dma__DOT__weight_re) {
                if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_empty)))) {
                    vlSelf->tpu_top__DOT__weight_bank_out 
                        = ((0xffffff00U & vlSelf->tpu_top__DOT__weight_bank_out) 
                           | (0xffU & (((0U == (0x1fU 
                                                & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U)))
                                         ? 0U : (vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x7ffU 
                                                    & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U))))) 
                                       | (vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff[
                                          (0x3fU & 
                                           (VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U))))));
                    vlSelf->tpu_top__DOT__weight_bank_out 
                        = ((0xffff00ffU & vlSelf->tpu_top__DOT__weight_bank_out) 
                           | (0xff00U & ((((0U == (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))
                                            ? 0U : 
                                           (vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff[
                                            (((IData)(7U) 
                                              + (0x7ffU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))))) 
                                          | (vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff[
                                             (0x3fU 
                                              & (VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))) 
                                         << 8U)));
                    vlSelf->tpu_top__DOT__weight_bank_out 
                        = ((0xff00ffffU & vlSelf->tpu_top__DOT__weight_bank_out) 
                           | (0xff0000U & ((((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(2U) 
                                                                + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))
                                              ? 0U : 
                                             (vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff[
                                              (((IData)(7U) 
                                                + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))))) 
                                            | (vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff[
                                               (0x3fU 
                                                & (VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(2U) 
                                                                  + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))) 
                                           << 0x10U)));
                    vlSelf->tpu_top__DOT__weight_bank_out 
                        = ((0xffffffU & vlSelf->tpu_top__DOT__weight_bank_out) 
                           | ((((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(3U) 
                                                               + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))
                                 ? 0U : (vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff[
                                         (((IData)(7U) 
                                           + (0x7ffU 
                                              & VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(3U) 
                                                               + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(11,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))))) 
                               | (vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff[
                                  (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U) 
                                            >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))) 
                              << 0x18U));
                    __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr 
                        = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr)));
                }
            } else {
                vlSelf->tpu_top__DOT__weight_bank_out = 0U;
            }
        }
        vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr 
            = __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr;
        if (vlSelf->tpu_top__DOT__tile_clr) {
            __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr = 0U;
        } else if (vlSelf->tpu_top__DOT__dma__DOT__act_we) {
            if (((~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_full)) 
                 & (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we))) {
                VL_ASSIGNSEL_WI(1024,8,(0x3ffU & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr), 3U)), vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff, vlSelf->tpu_top__DOT__dma__DOT__act_we_in_single);
                __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr)));
            }
        }
    } else {
        __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr 
            = __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr;
        __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[1U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[2U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[3U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[4U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[5U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[6U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[7U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[8U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[9U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0xaU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0xbU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0xcU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0xdU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0xeU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0xfU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x10U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x11U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x12U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x13U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x14U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x15U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x16U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x17U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x18U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x19U] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x1aU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x1bU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x1cU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x1dU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x1eU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff[0x1fU] 
            = Vtpu_top__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    vlSelf->tpu_top__DOT__dma__DOT__act_we = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
            vlSelf->tpu_top__DOT__dma__DOT__act_we_en_counter = 1U;
            if ((0x10U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_we_clr_counter = 1U;
            }
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we_count))) {
                tpu_top__DOT__dma__DOT__activations_busy = 1U;
                vlSelf->tpu_top__DOT__dma__DOT__act_we = 1U;
            }
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr 
        = __Vdly__tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr;
    if (vlSelf->rst_n) {
        if (vlSelf->tpu_top__DOT__a_buff__DOT__clr_b) {
            __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr = 0U;
        } else if (vlSelf->tpu_top__DOT__a_buff__DOT__we_b) {
            if (((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_b) 
                 & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr), 3U)), vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff, 
                                (0xffU & vlSelf->tpu_top__DOT__a_buff__DOT__write_in_b));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr)), 3U)), vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff, 
                                (0xffU & (vlSelf->tpu_top__DOT__a_buff__DOT__write_in_b 
                                          >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr)), 3U)), vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff, 
                                (0xffU & (vlSelf->tpu_top__DOT__a_buff__DOT__write_in_b 
                                          >> 0x10U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr)), 3U)), vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff, 
                                (vlSelf->tpu_top__DOT__a_buff__DOT__write_in_b 
                                 >> 0x18U));
                __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr)));
            }
        }
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr 
            = __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr;
        if (vlSelf->tpu_top__DOT__a_buff__DOT__clr_a) {
            __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr = 0U;
        } else if (vlSelf->tpu_top__DOT__a_buff__DOT__we_a) {
            if (((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_a) 
                 & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr), 3U)), vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff, 
                                (0xffU & vlSelf->tpu_top__DOT__a_buff__DOT__write_in_a));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr)), 3U)), vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff, 
                                (0xffU & (vlSelf->tpu_top__DOT__a_buff__DOT__write_in_a 
                                          >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr)), 3U)), vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff, 
                                (0xffU & (vlSelf->tpu_top__DOT__a_buff__DOT__write_in_a 
                                          >> 0x10U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr)), 3U)), vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff, 
                                (vlSelf->tpu_top__DOT__a_buff__DOT__write_in_a 
                                 >> 0x18U));
                __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr)));
            }
        }
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr 
            = __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr;
        vlSelf->tpu_top__DOT__current_state = vlSelf->tpu_top__DOT__next_state;
        if (vlSelf->tpu_top__DOT__tile_done) {
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__h_en_3)) 
                       & (~ (IData)(vlSelf->tpu_top__DOT__drain_state))))) {
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__product_reg = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__pe_preload_en)))) {
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__drain_state)))) {
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_3) {
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__b_reg)));
                }
            }
        }
        if (vlSelf->tpu_top__DOT__dma__DOT__result_clr) {
            __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr = 0U;
        } else if (vlSelf->tpu_top__DOT__result_we) {
            if (((IData)(vlSelf->tpu_top__DOT__requant_out_valid) 
                 & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_full)))) {
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr), 3U)), vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff, 
                                (0xffU & vlSelf->tpu_top__DOT____Vcellout__req__out));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr)), 3U)), vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff, 
                                (0xffU & (vlSelf->tpu_top__DOT____Vcellout__req__out 
                                          >> 8U)));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(2U) 
                                                                + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr)), 3U)), vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff, 
                                (0xffU & (vlSelf->tpu_top__DOT____Vcellout__req__out 
                                          >> 0x10U)));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(3U) 
                                                                + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr)), 3U)), vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff, 
                                (vlSelf->tpu_top__DOT____Vcellout__req__out 
                                 >> 0x18U));
                __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr)));
            }
        }
    } else {
        __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[0U] = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[1U] = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[2U] = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff[3U] = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr 
            = __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr;
        __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[0U] = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[1U] = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[2U] = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff[3U] = 0U;
        vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr 
            = __Vdly__tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr;
        vlSelf->tpu_top__DOT__current_state = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__product_reg = 0U;
        __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff[__Vilp] 
                = Vtpu_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__result_clr = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state))) {
            vlSelf->tpu_top__DOT__dma__DOT__en_counter = 1U;
            if ((0x40U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__read_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__clr_counter = 1U;
                vlSelf->tpu_top__DOT__dma__DOT__result_clr = 1U;
            }
            if ((0x40U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__read_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__result_re = 1U;
            }
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr 
        = __Vdly__tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr;
    vlSelf->tpu_top__DOT__dma__DOT__act_full = (0x80U 
                                                == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__dma__DOT__act_empty = ((IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr) 
                                                 == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_full 
        = (0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_empty 
        = ((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr) 
           == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_full 
        = (0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_empty 
        = ((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr) 
           == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__tile_clr = 0U;
    vlSelf->tpu_top__DOT__compute_en = 0U;
    vlSelf->tpu_top__DOT__drain_en = 0U;
    vlSelf->tpu_top__DOT__prefill_clr = 0U;
    vlSelf->tpu_top__DOT__preload_clr = 0U;
    vlSelf->tpu_top__DOT__compute_clr = 0U;
    vlSelf->tpu_top__DOT__func_clr = 0U;
    vlSelf->tpu_top__DOT__prefill_en = 0U;
    vlSelf->tpu_top__DOT__preload_en = 0U;
    vlSelf->tpu_top__DOT__func_en = 0U;
    vlSelf->tpu_top__DOT__drain_clr = 0U;
    vlSelf->tpu_top__DOT__result_we = 0U;
    vlSelf->tpu_top__DOT__w_l__DOT__fifo_we = 0U;
    tpu_top__DOT__drain_state_start = 0U;
    tpu_top__DOT__compute_state = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__result_full = (0x100U 
                                                   == (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__dma__DOT__result_empty = 
        ((IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr) 
         == (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__requant_out_valid = ((IData)(vlSelf->rst_n) 
                                               && (((IData)(vlSelf->tpu_top__DOT__relu_out_valid) 
                                                    & ((IData)(vlSelf->tpu_top__DOT__drain_state) 
                                                       | (IData)(vlSelf->tpu_top__DOT__accum_state))) 
                                                   && (IData)(vlSelf->tpu_top__DOT__relu_out_valid)));
    vlSelf->tpu_top__DOT____Vcellout__req__out = ((0xffffff00U 
                                                   & vlSelf->tpu_top__DOT____Vcellout__req__out) 
                                                  | ((IData)(vlSelf->rst_n)
                                                      ? 
                                                     (((IData)(vlSelf->tpu_top__DOT__relu_out_valid) 
                                                       & ((IData)(vlSelf->tpu_top__DOT__drain_state) 
                                                          | (IData)(vlSelf->tpu_top__DOT__accum_state)))
                                                       ? 
                                                      (VL_LTS_III(32, 0x7fU, 
                                                                  vlSelf->tpu_top__DOT__req__DOT__shift_buffer[0U])
                                                        ? 0x7fU
                                                        : 
                                                       (VL_GTS_III(32, 0xffffff80U, 
                                                                   vlSelf->tpu_top__DOT__req__DOT__shift_buffer[0U])
                                                         ? 0x80U
                                                         : 
                                                        (0xffU 
                                                         & vlSelf->tpu_top__DOT__req__DOT__shift_buffer[0U])))
                                                       : 0U)
                                                      : 0U));
    vlSelf->tpu_top__DOT____Vcellout__req__out = ((0xffff00ffU 
                                                   & vlSelf->tpu_top__DOT____Vcellout__req__out) 
                                                  | (((IData)(vlSelf->rst_n)
                                                       ? 
                                                      (((IData)(vlSelf->tpu_top__DOT__relu_out_valid) 
                                                        & ((IData)(vlSelf->tpu_top__DOT__drain_state) 
                                                           | (IData)(vlSelf->tpu_top__DOT__accum_state)))
                                                        ? 
                                                       (VL_LTS_III(32, 0x7fU, 
                                                                   vlSelf->tpu_top__DOT__req__DOT__shift_buffer[1U])
                                                         ? 0x7fU
                                                         : 
                                                        (VL_GTS_III(32, 0xffffff80U, 
                                                                    vlSelf->tpu_top__DOT__req__DOT__shift_buffer[1U])
                                                          ? 0x80U
                                                          : 
                                                         (0xffU 
                                                          & vlSelf->tpu_top__DOT__req__DOT__shift_buffer[1U])))
                                                        : 0U)
                                                       : 0U) 
                                                     << 8U));
    vlSelf->tpu_top__DOT____Vcellout__req__out = ((0xff00ffffU 
                                                   & vlSelf->tpu_top__DOT____Vcellout__req__out) 
                                                  | (((IData)(vlSelf->rst_n)
                                                       ? 
                                                      (((IData)(vlSelf->tpu_top__DOT__relu_out_valid) 
                                                        & ((IData)(vlSelf->tpu_top__DOT__drain_state) 
                                                           | (IData)(vlSelf->tpu_top__DOT__accum_state)))
                                                        ? 
                                                       (VL_LTS_III(32, 0x7fU, 
                                                                   vlSelf->tpu_top__DOT__req__DOT__shift_buffer[2U])
                                                         ? 0x7fU
                                                         : 
                                                        (VL_GTS_III(32, 0xffffff80U, 
                                                                    vlSelf->tpu_top__DOT__req__DOT__shift_buffer[2U])
                                                          ? 0x80U
                                                          : 
                                                         (0xffU 
                                                          & vlSelf->tpu_top__DOT__req__DOT__shift_buffer[2U])))
                                                        : 0U)
                                                       : 0U) 
                                                     << 0x10U));
    vlSelf->tpu_top__DOT____Vcellout__req__out = ((0xffffffU 
                                                   & vlSelf->tpu_top__DOT____Vcellout__req__out) 
                                                  | (((IData)(vlSelf->rst_n)
                                                       ? 
                                                      (((IData)(vlSelf->tpu_top__DOT__relu_out_valid) 
                                                        & ((IData)(vlSelf->tpu_top__DOT__drain_state) 
                                                           | (IData)(vlSelf->tpu_top__DOT__accum_state)))
                                                        ? 
                                                       (VL_LTS_III(32, 0x7fU, 
                                                                   vlSelf->tpu_top__DOT__req__DOT__shift_buffer[3U])
                                                         ? 0x7fU
                                                         : 
                                                        (VL_GTS_III(32, 0xffffff80U, 
                                                                    vlSelf->tpu_top__DOT__req__DOT__shift_buffer[3U])
                                                          ? 0x80U
                                                          : 
                                                         (0xffU 
                                                          & vlSelf->tpu_top__DOT__req__DOT__shift_buffer[3U])))
                                                        : 0U)
                                                       : 0U) 
                                                     << 0x18U));
    if (vlSelf->rst_n) {
        if (vlSelf->tpu_top__DOT__dma__DOT__weight_clr) {
            __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr = 0U;
        } else if (vlSelf->tpu_top__DOT__dma__DOT__weight_we) {
            if (((~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_full)) 
                 & (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_we))) {
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr), 3U)), vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff, vlSelf->tpu_top__DOT__dma__DOT__weight_we_in_single);
                __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr)));
            }
        }
        if (vlSelf->tpu_top__DOT__tile_done) {
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__h_en_2)) 
                       & (~ (IData)(vlSelf->tpu_top__DOT__drain_state))))) {
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__product_reg = 0U;
            }
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__h_en_1)) 
                       & (~ (IData)(vlSelf->tpu_top__DOT__drain_state))))) {
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__product_reg = 0U;
            }
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__product_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__h_en_0)) 
                       & (~ (IData)(vlSelf->tpu_top__DOT__drain_state))))) {
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__product_reg = 0U;
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__product_reg = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__pe_preload_en)))) {
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__drain_state)))) {
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_3) {
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out;
                }
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_2) {
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out;
                }
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_1) {
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__a_reg 
                        = vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out;
                }
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_0) {
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__b_reg)));
                    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out 
                        = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__a_reg;
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__product_reg 
                        = (0xffffU & ((IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__a_reg) 
                                      * (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__b_reg)));
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__tile_done)))) {
            if (vlSelf->tpu_top__DOT__pe_preload_en) {
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__b_reg 
                    = (vlSelf->tpu_top__DOT__weight_data_out 
                       >> 0x18U);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_3__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_3__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_3__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__b_reg 
                    = (0xffU & (vlSelf->tpu_top__DOT__weight_data_out 
                                >> 0x10U));
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_2__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_2__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_2__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__b_reg 
                    = (0xffU & (vlSelf->tpu_top__DOT__weight_data_out 
                                >> 8U));
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_1__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_1__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_1__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__weight_data_out);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_0__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_0__accum_in);
                vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__b_reg 
                    = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_0__accum_in);
            }
        }
        if (vlSelf->tpu_top__DOT__tile_done) {
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__a_reg = 0U;
            vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__a_reg = 0U;
        } else if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__pe_preload_en)))) {
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__drain_state)))) {
                if (vlSelf->tpu_top__DOT__sys_array__DOT__h_en_0) {
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__a_reg 
                        = (0xffU & vlSelf->tpu_top__DOT__sys_array__DOT__val_act_in);
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__a_reg 
                        = (0xffU & (vlSelf->tpu_top__DOT__sys_array__DOT__val_act_in 
                                    >> 0x10U));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__a_reg 
                        = (0xffU & (vlSelf->tpu_top__DOT__sys_array__DOT__val_act_in 
                                    >> 8U));
                    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__a_reg 
                        = (vlSelf->tpu_top__DOT__sys_array__DOT__val_act_in 
                           >> 0x18U);
                }
            }
        }
        if (((IData)(vlSelf->tpu_top__DOT__relu_out_valid) 
             & ((IData)(vlSelf->tpu_top__DOT__drain_state) 
                | (IData)(vlSelf->tpu_top__DOT__accum_state)))) {
            vlSelf->tpu_top__DOT__req__DOT__shift_buffer[0U] 
                = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_top__DOT__relu_out[0U], (IData)(vlSelf->tpu_top__DOT__requant_value));
            vlSelf->tpu_top__DOT__req__DOT__shift_buffer[1U] 
                = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_top__DOT__relu_out[1U], (IData)(vlSelf->tpu_top__DOT__requant_value));
            vlSelf->tpu_top__DOT__req__DOT__shift_buffer[2U] 
                = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_top__DOT__relu_out[2U], (IData)(vlSelf->tpu_top__DOT__requant_value));
            vlSelf->tpu_top__DOT__req__DOT__shift_buffer[3U] 
                = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_top__DOT__relu_out[3U], (IData)(vlSelf->tpu_top__DOT__requant_value));
        } else {
            vlSelf->tpu_top__DOT__req__DOT__shift_buffer[0U] = 0U;
            vlSelf->tpu_top__DOT__req__DOT__shift_buffer[1U] = 0U;
            vlSelf->tpu_top__DOT__req__DOT__shift_buffer[2U] = 0U;
            vlSelf->tpu_top__DOT__req__DOT__shift_buffer[3U] = 0U;
        }
        if ((2U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
            vlSelf->tpu_top__DOT__requant_value = vlSelf->u_in;
        }
        if (((IData)(vlSelf->tpu_top__DOT__product_biased_valid) 
             & ((IData)(vlSelf->tpu_top__DOT__drain_state) 
                | (IData)(vlSelf->tpu_top__DOT__accum_state)))) {
            vlSelf->tpu_top__DOT__relu_out[0U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->tpu_top__DOT__product_biased[0U])
                                                   ? 0U
                                                   : 
                                                  vlSelf->tpu_top__DOT__product_biased[0U]);
            vlSelf->tpu_top__DOT__relu_out[1U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->tpu_top__DOT__product_biased[1U])
                                                   ? 0U
                                                   : 
                                                  vlSelf->tpu_top__DOT__product_biased[1U]);
            vlSelf->tpu_top__DOT__relu_out[2U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->tpu_top__DOT__product_biased[2U])
                                                   ? 0U
                                                   : 
                                                  vlSelf->tpu_top__DOT__product_biased[2U]);
            vlSelf->tpu_top__DOT__relu_out[3U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->tpu_top__DOT__product_biased[3U])
                                                   ? 0U
                                                   : 
                                                  vlSelf->tpu_top__DOT__product_biased[3U]);
        } else {
            vlSelf->tpu_top__DOT__relu_out[0U] = 0U;
            vlSelf->tpu_top__DOT__relu_out[1U] = 0U;
            vlSelf->tpu_top__DOT__relu_out[2U] = 0U;
            vlSelf->tpu_top__DOT__relu_out[3U] = 0U;
        }
        vlSelf->tpu_top__DOT__opcode_reg = vlSelf->uio_in;
        if (vlSelf->tpu_top__DOT__drain_state) {
            vlSelf->tpu_top__DOT__product_biased[0U] 
                = (vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[0U] 
                   + vlSelf->tpu_top__DOT__product_out[0U]);
            vlSelf->tpu_top__DOT__product_biased[1U] 
                = (vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[1U] 
                   + vlSelf->tpu_top__DOT__product_out[1U]);
            vlSelf->tpu_top__DOT__product_biased[2U] 
                = (vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[2U] 
                   + vlSelf->tpu_top__DOT__product_out[2U]);
            vlSelf->tpu_top__DOT__product_biased[3U] 
                = (vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[3U] 
                   + vlSelf->tpu_top__DOT__product_out[3U]);
        }
        if (vlSelf->tpu_top__DOT__preload_state) {
            vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[0U] 
                = vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff[0U];
            vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[1U] 
                = vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff[1U];
            vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[2U] 
                = vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff[2U];
            vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[3U] 
                = vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff[3U];
        }
        if (vlSelf->tpu_top__DOT__dma__DOT__bias_clr) {
            __Vdly__tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr = 0U;
        } else if (vlSelf->tpu_top__DOT__dma__DOT__bias_we) {
            if (((~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_full)) 
                 & (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_we))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr), 3U)), vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff, vlSelf->tpu_top__DOT__dma__DOT__bias_we_in_single);
                __Vdly__tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr)));
            }
        }
        if (vlSelf->tpu_top__DOT__systolic_act_in_valid) {
            vlSelf->tpu_top__DOT__sys_array__DOT__val_act_in 
                = vlSelf->tpu_top__DOT__systolic_act_in;
        }
    } else {
        __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff[__Vilp] 
                = Vtpu_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__req__DOT__shift_buffer[0U] = 0U;
        vlSelf->tpu_top__DOT__req__DOT__shift_buffer[1U] = 0U;
        vlSelf->tpu_top__DOT__req__DOT__shift_buffer[2U] = 0U;
        vlSelf->tpu_top__DOT__req__DOT__shift_buffer[3U] = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__requant_value = 0U;
        vlSelf->tpu_top__DOT__relu_out[0U] = 0U;
        vlSelf->tpu_top__DOT__relu_out[1U] = 0U;
        vlSelf->tpu_top__DOT__relu_out[2U] = 0U;
        vlSelf->tpu_top__DOT__relu_out[3U] = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__opcode_reg = 0U;
        vlSelf->tpu_top__DOT__product_biased[0U] = 0U;
        vlSelf->tpu_top__DOT__product_biased[1U] = 0U;
        vlSelf->tpu_top__DOT__product_biased[2U] = 0U;
        vlSelf->tpu_top__DOT__product_biased[3U] = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[0U] = 0U;
        vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[1U] = 0U;
        vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[2U] = 0U;
        vlSelf->tpu_top__DOT__b_add__DOT__bias_reg[3U] = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__product_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__product_reg = 0U;
        __Vdly__tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff[0U] = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff[1U] = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff[2U] = 0U;
        vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff[3U] = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__b_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__a_reg = 0U;
        vlSelf->tpu_top__DOT__sys_array__DOT__val_act_in = 0U;
    }
    vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr 
        = __Vdly__tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                    if ((5U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                        if ((6U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                            if ((7U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                                vlSelf->tpu_top__DOT__tile_clr = 1U;
                            }
                        }
                        if ((6U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                            if ((1U & (~ (IData)(tpu_top__DOT____VdfgExtracted_hf6a6c9db__0)))) {
                                if ((1U & (~ (IData)(tpu_top__DOT____VdfgExtracted_h621a341a__0)))) {
                                    vlSelf->tpu_top__DOT__func_en = 1U;
                                    vlSelf->tpu_top__DOT__drain_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((5U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                        if ((6U != (IData)(vlSelf->tpu_top__DOT__drain_count))) {
                            vlSelf->tpu_top__DOT__drain_en = 1U;
                            vlSelf->tpu_top__DOT__compute_clr = 1U;
                            vlSelf->tpu_top__DOT__result_we = 1U;
                        }
                    } else if ((6U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                        if ((1U & (~ (IData)(tpu_top__DOT____VdfgExtracted_hf6a6c9db__0)))) {
                            if ((1U & (~ (IData)(tpu_top__DOT____VdfgExtracted_h621a341a__0)))) {
                                vlSelf->tpu_top__DOT__result_we = 1U;
                            }
                        }
                    }
                }
                if ((4U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                    if ((7U != (IData)(vlSelf->tpu_top__DOT__compute_count))) {
                        vlSelf->tpu_top__DOT__compute_en = 1U;
                        vlSelf->tpu_top__DOT__preload_clr = 1U;
                    }
                    if ((7U == (IData)(vlSelf->tpu_top__DOT__compute_count))) {
                        tpu_top__DOT__drain_state_start = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                if ((3U != (IData)(vlSelf->tpu_top__DOT__preload_count))) {
                    vlSelf->tpu_top__DOT__prefill_clr = 1U;
                    vlSelf->tpu_top__DOT__func_clr = 1U;
                    vlSelf->tpu_top__DOT__preload_en = 1U;
                }
            }
        }
        if ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__prefill_count))) {
                vlSelf->tpu_top__DOT__prefill_en = 1U;
            }
        }
    }
    __Vtableidx2 = (((IData)(tpu_top__DOT__drain_state_start) 
                     << 5U) | (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__v_fsm_1__DOT__current_state));
    vlSelf->tpu_top__DOT__sys_array__DOT__v_fsm_1__DOT__next_state 
        = Vtpu_top__ConstPool__TABLE_h4a3fe364_0[__Vtableidx2];
    vlSelf->tpu_top__DOT__sys_array__DOT__v_en_3 = 
        Vtpu_top__ConstPool__TABLE_hd9b35755_0[__Vtableidx2];
    vlSelf->tpu_top__DOT__sys_array__DOT__v_en_2 = 
        Vtpu_top__ConstPool__TABLE_hc2151b60_0[__Vtableidx2];
    vlSelf->tpu_top__DOT__sys_array__DOT__v_en_1 = 
        Vtpu_top__ConstPool__TABLE_h993098a3_0[__Vtableidx2];
    vlSelf->tpu_top__DOT__sys_array__DOT__v_en_0 = 
        Vtpu_top__ConstPool__TABLE_hf3da0886_0[__Vtableidx2];
    vlSelf->tpu_top__DOT__dma__DOT__weight_full = (0x100U 
                                                   == (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__dma__DOT__weight_we = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__weight_empty = 
        ((IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr) 
         == (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr));
    tpu_top__DOT__dma__DOT__weights_busy = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
            if ((0x100U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__dma__DOT__weight_we = 1U;
                tpu_top__DOT__dma__DOT__weights_busy = 1U;
            }
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__weight_re = ((~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_we)) 
                                                 & ((~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_empty)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->tpu_top__DOT__current_state))));
    vlSelf->tpu_top__DOT__dma__DOT__b_ready = ((IData)(tpu_top__DOT__dma__DOT__activations_busy) 
                                               | (IData)(tpu_top__DOT__dma__DOT__weights_busy));
    vlSelf->tpu_top__DOT__relu_out_valid = ((IData)(vlSelf->rst_n) 
                                            && ((IData)(vlSelf->tpu_top__DOT__product_biased_valid) 
                                                & ((IData)(vlSelf->tpu_top__DOT__drain_state) 
                                                   | (IData)(vlSelf->tpu_top__DOT__accum_state))));
    vlSelf->tpu_top__DOT__accum_state = 0U;
    vlSelf->tpu_top__DOT__product_biased_valid = ((IData)(vlSelf->rst_n) 
                                                  && (IData)(vlSelf->tpu_top__DOT__drain_state));
    tpu_top__DOT__start_read_fsm = 0U;
    tpu_top__DOT__activation_fsm_start = 0U;
    tpu_top__DOT__bias_fsm_start = 0U;
    tpu_top__DOT__weight_fsm_start = 0U;
    if ((1U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
        if ((3U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
            tpu_top__DOT__start_read_fsm = 1U;
        }
        if ((3U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
            if ((5U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                if ((6U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                    tpu_top__DOT__activation_fsm_start = 1U;
                }
                if ((6U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                    if ((7U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                        tpu_top__DOT__bias_fsm_start = 1U;
                    }
                }
            }
            if ((5U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                tpu_top__DOT__weight_fsm_start = 1U;
            }
        }
    }
    tpu_top__DOT__start = 0U;
    if ((1U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
        if ((0U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
            tpu_top__DOT__start = 1U;
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__next_state 
            = ((IData)(tpu_top__DOT__start_read_fsm)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__next_state 
            = ((0x40U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__read_count))
                ? 0U : 1U);
    }
    vlSelf->tpu_top__DOT__next_state = vlSelf->tpu_top__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((IData)(tpu_top__DOT__start)
                                             ? 2U : 0U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((0x10U 
                                             == (IData)(vlSelf->tpu_top__DOT__prefill_count))
                                             ? 3U : 2U);
    } else if ((3U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((3U == (IData)(vlSelf->tpu_top__DOT__preload_count))
                                             ? 4U : 3U);
    } else if ((4U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((7U == (IData)(vlSelf->tpu_top__DOT__compute_count))
                                             ? 5U : 4U);
    } else if ((5U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((6U == (IData)(vlSelf->tpu_top__DOT__drain_count))
                                             ? 6U : 5U);
    } else if ((6U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((IData)(tpu_top__DOT____VdfgExtracted_hf6a6c9db__0)
                                             ? 3U : 
                                            ((IData)(tpu_top__DOT____VdfgExtracted_h621a341a__0)
                                              ? 7U : 6U));
    } else if ((7U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = 0U;
    }
    vlSelf->tpu_top__DOT__preload_state = 0U;
    vlSelf->tpu_top__DOT__w_l__DOT__fifo_re = 0U;
    vlSelf->tpu_top__DOT__w_l__DOT__next_state = vlSelf->tpu_top__DOT__w_l__DOT__current_state;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                if ((4U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                    tpu_top__DOT__compute_state = 1U;
                }
                if ((4U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                    if ((5U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                        if ((6U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                            vlSelf->tpu_top__DOT__accum_state = 1U;
                        }
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                vlSelf->tpu_top__DOT__preload_state = 1U;
            }
        }
    }
    if ((0U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
        vlSelf->tpu_top__DOT__w_l__DOT__next_state 
            = (((2U == (IData)(vlSelf->tpu_top__DOT__current_state)) 
                | (8U == (IData)(vlSelf->tpu_top__DOT__tile_count)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
        vlSelf->tpu_top__DOT__w_l__DOT__next_state 
            = (((4U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                & (2U == (IData)(vlSelf->tpu_top__DOT__current_state)))
                ? 1U : 2U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
        vlSelf->tpu_top__DOT__w_l__DOT__next_state 
            = (((0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                & (IData)(vlSelf->tpu_top__DOT__preload_state))
                ? 2U : ((0U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count))
                         ? 0U : 2U));
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 0U;
    tpu_top__DOT__weight_data_valid = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
            if (((4U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                 & (2U == (IData)(vlSelf->tpu_top__DOT__current_state)))) {
                if (vlSelf->tpu_top__DOT__weight_bank_out_valid) {
                    vlSelf->tpu_top__DOT__w_l__DOT__fifo_we = 1U;
                }
            }
        }
        if ((1U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
                if (((0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                     & (IData)(vlSelf->tpu_top__DOT__preload_state))) {
                    vlSelf->tpu_top__DOT__w_l__DOT__fifo_re = 1U;
                    tpu_top__DOT__weight_data_valid = 1U;
                }
            }
        }
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_a = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__write_in_a = 0U;
    if (((((((((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state)))) {
        if ((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 1U;
            }
        } else if ((1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 1U;
            }
        } else if ((2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__preload_state)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 1U;
            }
        } else if ((3U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((4U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_a) 
         & (IData)(vlSelf->tpu_top__DOT__activation_bank_out_valid))) {
        vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_a = 1U;
        vlSelf->tpu_top__DOT__a_buff__DOT__write_in_a 
            = vlSelf->tpu_top__DOT__activation_bank_out;
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_b = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__write_in_b = 0U;
    if (((((((((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state)))) {
        if ((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 1U;
            }
        } else if ((1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 1U;
            }
        } else if ((2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__preload_state)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 1U;
            }
        } else if ((3U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((4U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_b) 
         & (IData)(vlSelf->tpu_top__DOT__activation_bank_out_valid))) {
        vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_b = 1U;
        vlSelf->tpu_top__DOT__a_buff__DOT__write_in_b 
            = vlSelf->tpu_top__DOT__activation_bank_out;
    }
    vlSelf->tpu_top__DOT__dma__DOT__bias_clr = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr 
        = __Vdly__tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr;
    vlSelf->tpu_top__DOT__dma__DOT__bias_full = (0x10U 
                                                 == (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__dma__DOT__bias_we = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state 
            = (((IData)(tpu_top__DOT__bias_fsm_start) 
                & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_ready)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state = 0U;
    }
    tpu_top__DOT__dma__DOT__bias_busy = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
                vlSelf->tpu_top__DOT__dma__DOT__bias_clr = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__dma__DOT__bias_we = 1U;
                tpu_top__DOT__dma__DOT__bias_busy = 1U;
            }
        }
    }
    vlSelf->tpu_top__DOT__weight_data_out = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count))) {
        vlSelf->tpu_top__DOT__weight_data_out = vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q
            [vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__getPtr];
    }
    vlSelf->tpu_top__DOT__tile_done = 0U;
    vlSelf->tpu_top__DOT__pe_preload_en = ((IData)(vlSelf->tpu_top__DOT__preload_state) 
                                           & (IData)(tpu_top__DOT__weight_data_valid));
    vlSelf->tpu_top__DOT__drain_state = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                if ((4U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                    if ((7U == (IData)(vlSelf->tpu_top__DOT__compute_count))) {
                        vlSelf->tpu_top__DOT__tile_done = 1U;
                    }
                }
                if ((4U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                        vlSelf->tpu_top__DOT__drain_state = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__a_ready = ((IData)(tpu_top__DOT__dma__DOT__bias_busy) 
                                               | (IData)(tpu_top__DOT__dma__DOT__weights_busy));
    vlSelf->tpu_top__DOT__dma__DOT__w_ready = ((IData)(tpu_top__DOT__dma__DOT__activations_busy) 
                                               | (IData)(tpu_top__DOT__dma__DOT__bias_busy));
    vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__next_state 
            = (((IData)(tpu_top__DOT__start) | (IData)(vlSelf->tpu_top__DOT__tile_done))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__next_state 
            = ((4U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_re_count))
                ? 0U : 1U);
    }
    __Vtableidx1 = (((IData)(vlSelf->tpu_top__DOT__tile_done) 
                     << 6U) | (((IData)(tpu_top__DOT__compute_state) 
                                << 5U) | (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__e_fsm_1__DOT__current_state)));
    vlSelf->tpu_top__DOT__sys_array__DOT__e_fsm_1__DOT__next_state 
        = Vtpu_top__ConstPool__TABLE_h73872590_0[__Vtableidx1];
    vlSelf->tpu_top__DOT__sys_array__DOT__h_en_3 = 
        Vtpu_top__ConstPool__TABLE_h95214b9c_0[__Vtableidx1];
    vlSelf->tpu_top__DOT__sys_array__DOT__h_en_2 = 
        Vtpu_top__ConstPool__TABLE_he5d58018_0[__Vtableidx1];
    vlSelf->tpu_top__DOT__sys_array__DOT__h_en_1 = 
        Vtpu_top__ConstPool__TABLE_h26d33955_0[__Vtableidx1];
    vlSelf->tpu_top__DOT__sys_array__DOT__h_en_0 = 
        Vtpu_top__ConstPool__TABLE_hfc07e341_0[__Vtableidx1];
    vlSelf->tpu_top__DOT__a_buff__DOT__re_a = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__re_b = 0U;
    if (vlSelf->tpu_top__DOT__pe_preload_en) {
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__b_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__b_reg;
        vlSelf->tpu_top__DOT__product_out[0U] = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__b_reg;
        vlSelf->tpu_top__DOT__product_out[1U] = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__b_reg;
    } else if (vlSelf->tpu_top__DOT__drain_state) {
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
        vlSelf->tpu_top__DOT__product_out[0U] = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__product_out[1U] = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
    } else {
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__product_out[0U] = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__down_out_drain;
        vlSelf->tpu_top__DOT__product_out[1U] = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__down_out_drain;
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state 
        = vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state;
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__clr_a = 0U;
    if (((((((((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                        if ((((~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_empty)) 
                              & ((IData)(tpu_top__DOT__compute_state) 
                                 | (IData)(vlSelf->tpu_top__DOT__drain_state))) 
                             & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__o_bank_reg)))) {
                            vlSelf->tpu_top__DOT__a_buff__DOT__re_a = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state 
                = ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state 
                = ((IData)(vlSelf->tpu_top__DOT__preload_state)
                    ? 3U : 2U);
        } else if ((3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((((~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_empty)) 
                  & ((IData)(tpu_top__DOT__compute_state) 
                     | (IData)(vlSelf->tpu_top__DOT__drain_state))) 
                 & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__o_bank_reg)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 3U;
                vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active = 1U;
            } else if ((((8U != (IData)(vlSelf->tpu_top__DOT__tile_count)) 
                         & (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__o_bank_reg)) 
                        & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__clr_a = 1U;
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 5U;
            } else if ((8U == (IData)(vlSelf->tpu_top__DOT__tile_count))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 7U;
            }
        } else if ((4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if (tpu_top__DOT__compute_state) {
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 5U;
                vlSelf->tpu_top__DOT__a_buff__DOT__clr_a = 1U;
            } else {
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 4U;
            }
        } else if ((5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((((IData)(tpu_top__DOT__compute_state) 
                  | (IData)(vlSelf->tpu_top__DOT__drain_state)) 
                 & (0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 6U;
                vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active = 1U;
            } else if ((0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 5U;
            }
        } else if ((6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 3U;
            vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active = 1U;
        } else {
            vlSelf->tpu_top__DOT__a_buff__DOT__clr_a = 1U;
            vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 0U;
        }
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state 
        = vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state;
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__clr_b = 0U;
    if (((((((((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                        if ((((~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_empty)) 
                              & ((IData)(tpu_top__DOT__compute_state) 
                                 | (IData)(vlSelf->tpu_top__DOT__drain_state))) 
                             & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__o_bank_reg)))) {
                            vlSelf->tpu_top__DOT__a_buff__DOT__re_b = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state 
                = ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))
                    ? 4U : 0U);
        } else if ((1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state 
                = ((IData)(vlSelf->tpu_top__DOT__preload_state)
                    ? 3U : 2U);
        } else if ((3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((((~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_empty)) 
                  & ((IData)(tpu_top__DOT__compute_state) 
                     | (IData)(vlSelf->tpu_top__DOT__drain_state))) 
                 & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__o_bank_reg)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 3U;
                vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active = 1U;
            } else if ((((8U != (IData)(vlSelf->tpu_top__DOT__tile_count)) 
                         & (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__o_bank_reg)) 
                        & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__clr_b = 1U;
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 5U;
            } else if ((8U == (IData)(vlSelf->tpu_top__DOT__tile_count))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 7U;
            }
        } else if ((4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if (tpu_top__DOT__compute_state) {
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 5U;
                vlSelf->tpu_top__DOT__a_buff__DOT__clr_b = 1U;
            } else {
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 4U;
            }
        } else if ((5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((((IData)(tpu_top__DOT__compute_state) 
                  | (IData)(vlSelf->tpu_top__DOT__drain_state)) 
                 & (0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 6U;
                vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active = 1U;
            } else if ((0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 5U;
            }
        } else if ((6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 3U;
            vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active = 1U;
        } else {
            vlSelf->tpu_top__DOT__a_buff__DOT__clr_b = 1U;
            vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 0U;
        }
    }
    vlSelf->tpu_top__DOT__product_out[2U] = (IData)(
                                                    (((QData)((IData)(
                                                                      ((IData)(vlSelf->tpu_top__DOT__pe_preload_en)
                                                                        ? (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__b_reg)
                                                                        : 
                                                                       ((IData)(vlSelf->tpu_top__DOT__drain_state)
                                                                         ? vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg
                                                                         : vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__down_out_drain)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((IData)(vlSelf->tpu_top__DOT__pe_preload_en)
                                                                         ? (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__b_reg)
                                                                         : 
                                                                        ((IData)(vlSelf->tpu_top__DOT__drain_state)
                                                                          ? vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg
                                                                          : vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__down_out_drain))))));
    vlSelf->tpu_top__DOT__product_out[3U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       ((IData)(vlSelf->tpu_top__DOT__pe_preload_en)
                                                                         ? (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__b_reg)
                                                                         : 
                                                                        ((IData)(vlSelf->tpu_top__DOT__drain_state)
                                                                          ? vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg
                                                                          : vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__down_out_drain)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->tpu_top__DOT__pe_preload_en)
                                                                          ? (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__b_reg)
                                                                          : 
                                                                         ((IData)(vlSelf->tpu_top__DOT__drain_state)
                                                                           ? vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg
                                                                           : vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__down_out_drain))))) 
                                                     >> 0x20U));
    vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state 
            = (((IData)(tpu_top__DOT__activation_fsm_start) 
                & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_ready)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we_count))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state = 0U;
    }
    vlSelf->tpu_top__DOT__dma__DOT__weight_we_in_single = 0U;
    if (((1U == (IData)(vlSelf->tpu_top__DOT__bank)) 
         & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_ready)))) {
        vlSelf->tpu_top__DOT__dma__DOT__weight_we_in_single 
            = vlSelf->u_in;
    }
    vlSelf->tpu_top__DOT__dma__DOT__weight_clr = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__bias_we_in_single = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        if (((IData)(tpu_top__DOT__weight_fsm_start) 
             & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_ready)))) {
            vlSelf->tpu_top__DOT__dma__DOT__weight_clr = 1U;
            vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state = 1U;
        } else {
            vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state 
            = ((0x100U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state = 0U;
    }
    vlSelf->tpu_top__DOT__dma__DOT__act_we_in_single = 0U;
    if ((1U & (~ ((1U == (IData)(vlSelf->tpu_top__DOT__bank)) 
                  & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_ready)))))) {
        if (((2U == (IData)(vlSelf->tpu_top__DOT__bank)) 
             & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_ready)))) {
            vlSelf->tpu_top__DOT__dma__DOT__bias_we_in_single 
                = vlSelf->u_in;
        }
        if ((1U & (~ ((2U == (IData)(vlSelf->tpu_top__DOT__bank)) 
                      & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_ready)))))) {
            if (((3U == (IData)(vlSelf->tpu_top__DOT__bank)) 
                 & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_ready)))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_we_in_single 
                    = vlSelf->u_in;
            }
        }
    }
    vlSelf->tpu_top__DOT__systolic_act_in_valid = 0U;
    vlSelf->tpu_top__DOT__systolic_act_in = 0U;
    if (vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_a) {
        vlSelf->tpu_top__DOT__systolic_act_in_valid = 1U;
        vlSelf->tpu_top__DOT__systolic_act_in = vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a;
    } else if (vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_b) {
        vlSelf->tpu_top__DOT__systolic_act_in_valid = 1U;
        vlSelf->tpu_top__DOT__systolic_act_in = vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b;
    }
}

void Vtpu_top___024root___eval_nba(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtpu_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtpu_top___024root___eval_triggers__act(Vtpu_top___024root* vlSelf);

bool Vtpu_top___024root___eval_phase__act(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtpu_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtpu_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtpu_top___024root___eval_phase__nba(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtpu_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_top___024root___dump_triggers__ico(Vtpu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_top___024root___dump_triggers__nba(Vtpu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_top___024root___dump_triggers__act(Vtpu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtpu_top___024root___eval(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtpu_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/tpu_top.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtpu_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtpu_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/tpu_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtpu_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/tpu_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtpu_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtpu_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtpu_top___024root___eval_debug_assertions(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
