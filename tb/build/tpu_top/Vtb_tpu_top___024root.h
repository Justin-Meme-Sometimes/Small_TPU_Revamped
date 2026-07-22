// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_tpu_top.h for the primary calling header

#ifndef VERILATED_VTB_TPU_TOP___024ROOT_H_
#define VERILATED_VTB_TPU_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_tpu_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tpu_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_tpu_top__DOT__clk;
        CData/*0:0*/ tb_tpu_top__DOT__rst_n;
        CData/*0:0*/ tb_tpu_top__DOT__start;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__preload_state;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__weight_fifo_full;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__weight_fifo_empty;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__weight_data_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__weight_bank_out;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__drain_state;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__tile_done;
        VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT__activation_bank_out;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__systolic_act_in_valid;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__relu_out_valid;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__accum_state;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__requant_out_valid;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__current_state;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__next_state;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__prefill_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__prefill_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__preload_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__preload_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__compute_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__compute_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__drain_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__drain_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__func_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__func_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__tile_clr;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__prefill_count;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__preload_count;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__compute_count;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__drain_count;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__funcs_count;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__tile_count;
        VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state;
        CData/*1:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
        CData/*1:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr;
        CData/*3:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_a;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_a;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_empty;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_full;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active;
        VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a;
        VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_b;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_b;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_b;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_b;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_empty;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_full;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active;
        VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b;
        VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b;
    };
    struct {
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg;
        VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff;
        VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_0;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_1;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_2;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_3;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_0;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_1;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_2;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_3;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__right_out;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__current_state;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__next_state;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__current_state;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__next_state;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__a_reg;
    };
    struct {
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__a_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__b_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__preload_state_d;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tpu_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tpu_top__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count;
        SData/*9:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count;
        VlWide<16>/*511:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out;
        VlWide<16>/*511:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg;
        SData/*15:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg;
        IData/*31:0*/ tb_tpu_top__DOT__errors;
        IData/*31:0*/ tb_tpu_top__DOT__checks;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__down_out;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
    };
    struct {
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count;
        VlWide<4>/*114:0*/ __VdfgTmp_hfccefdc9__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hee1e3e53__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_tpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tpu_top___024root(Vtb_tpu_top__Syms* symsp, const char* v__name);
    ~Vtb_tpu_top___024root();
    VL_UNCOPYABLE(Vtb_tpu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
