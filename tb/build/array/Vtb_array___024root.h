// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_array.h for the primary calling header

#ifndef VERILATED_VTB_ARRAY___024ROOT_H_
#define VERILATED_VTB_ARRAY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_array__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_array___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_array__DOT__clk;
        CData/*0:0*/ tb_array__DOT__h_rst_n;
        CData/*0:0*/ tb_array__DOT__v_rst_n;
        CData/*0:0*/ tb_array__DOT__arr_rst_n;
        CData/*0:0*/ tb_array__DOT__h_start;
        CData/*0:0*/ tb_array__DOT__h_tile_done;
        CData/*0:0*/ tb_array__DOT__h_en_0;
        CData/*0:0*/ tb_array__DOT__h_en_1;
        CData/*0:0*/ tb_array__DOT__h_en_2;
        CData/*0:0*/ tb_array__DOT__h_en_3;
        CData/*0:0*/ tb_array__DOT__v_start;
        CData/*0:0*/ tb_array__DOT__v_tile_done;
        CData/*0:0*/ tb_array__DOT__v_en_0;
        CData/*0:0*/ tb_array__DOT__v_en_1;
        CData/*0:0*/ tb_array__DOT__v_en_2;
        CData/*0:0*/ tb_array__DOT__v_en_3;
        CData/*0:0*/ tb_array__DOT__arr_preload;
        CData/*0:0*/ tb_array__DOT__arr_compute_start;
        CData/*0:0*/ tb_array__DOT__arr_clr;
        CData/*0:0*/ tb_array__DOT__arr_tile_done;
        CData/*0:0*/ tb_array__DOT__arr_drain;
        IData/*31:0*/ tb_array__DOT__arr_weight;
        IData/*31:0*/ tb_array__DOT__arr_activation;
        CData/*0:0*/ tb_array__DOT__arr_output_valid;
        CData/*4:0*/ tb_array__DOT__h_dut__DOT__current_state;
        CData/*4:0*/ tb_array__DOT__h_dut__DOT__next_state;
        CData/*4:0*/ tb_array__DOT__v_dut__DOT__current_state;
        CData/*4:0*/ tb_array__DOT__v_dut__DOT__next_state;
        CData/*0:0*/ tb_array__DOT__arr_dut__DOT__h_en_0;
        CData/*0:0*/ tb_array__DOT__arr_dut__DOT__h_en_1;
        CData/*0:0*/ tb_array__DOT__arr_dut__DOT__h_en_2;
        CData/*0:0*/ tb_array__DOT__arr_dut__DOT__h_en_3;
        CData/*0:0*/ tb_array__DOT__arr_dut__DOT__v_en_0;
        CData/*0:0*/ tb_array__DOT__arr_dut__DOT__v_en_1;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__val_act_in;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__right_out;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__right_out;
        CData/*4:0*/ tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__current_state;
        CData/*4:0*/ tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__next_state;
        CData/*4:0*/ tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__current_state;
        CData/*4:0*/ tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__next_state;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__a_reg;
    };
    struct {
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__b_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__a_reg;
        CData/*7:0*/ tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__b_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_array__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_array__DOT__h_rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_array__DOT__v_rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_array__DOT__arr_rst_n__0;
        CData/*0:0*/ __VactContinue;
        VlWide<16>/*511:0*/ tb_array__DOT__arr_dut__DOT__pe_down_out;
        VlWide<16>/*511:0*/ tb_array__DOT__arr_dut__DOT__pe_right_out;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg;
        SData/*15:0*/ tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg;
        IData/*31:0*/ tb_array__DOT__errors;
        IData/*31:0*/ tb_array__DOT__checks;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out;
    };
    struct {
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__down_out;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg;
        IData/*31:0*/ tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg;
        IData/*31:0*/ __VactIterCount;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h25dd34e8__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_array__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_array___024root(Vtb_array__Syms* symsp, const char* v__name);
    ~Vtb_array___024root();
    VL_UNCOPYABLE(Vtb_array___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
