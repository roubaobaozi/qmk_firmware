#include QMK_KEYBOARD_H

#include "baobaozi.h"

/* Re-pass though to allow templates to be used */
#define LAYOUT_wrapper(...) LAYOUT_ortho_5x15(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_COLMK_L_________________,_________________ROW_5_NOTHING___________________,_________________ROW_TOP_COLMK_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_COLMK_L_________________,_________________ROW_5_NOTHING___________________,_________________ROW_MID_COLMK_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_COLMK_L_________________,_________________ROW_5_NOTHING___________________,_________________ROW_BOT_COLMK_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_5_NOTHING___________________,_________________ROW_5_NOTHING___________________,_________________ROW_5_NOTHING___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            XXXXXXX  ,XXXXXXX  ,__T_L3___,__T_L2___,__T_L1___,_________________ROW_5_NOTHING___________________,__T_R1___,__T_R2___,__T_R3___,XXXXXXX  ,XXXXXXX
        // └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
        //  XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,__T_L2___,__T_L1___,__T_L3___,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,__T_R3___,__T_R1___,__T_R2___,__T_R3___,XXXXXXX  ,XXXXXXX
        //                      To be honest, I preferred it as 1DFH (T2, T1, T3) but I also found I accidentally hit RT3 easily when I was
        //                      going for the spacebar, so I moved it to a less convenient spot on purpose. Maybe it’s just this keyboard.
    ),

    [_QWERTY] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_NUMBERS_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_NUMBERS_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_TOP_QWERT_L_________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_TOP_QWERT_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_QWERT_L_________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_MID_QWERT_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_QWERT_L_________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_BOT_QWERT_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    // [_FANGBIAN] = LAYOUT_wrapper(
    //     // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
    //         _________________ROW_TOP_FANGB_L_________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_TOP_FANGB_R_________________,
    //     // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //         _________________ROW_MID_FANGB_L_________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_MID_FANGB_R_________________,
    //     // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //         _________________ROW_BOT_FANGB_L_________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_BOT_FANGB_R_________________,
    //     // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //         _________________ROW_5_NOTHING___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_5_NOTHING___________________,
    //     // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //         _______  ,_______  ,_______  ,_______  ,_TFB_L1__,_______  ,_______  ,_______  ,_______  ,_______  ,_TFB_R1__,_TFB_R2__,_______  ,_______  ,_______
    //     // └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    // ),

    // [_BENRI] = LAYOUT_wrapper(
    //     // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
    //         _________________ROW_TOP_BENRI_L_________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_TOP_BENRI_R_________________,
    //     // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //         _________________ROW_MID_BENRI_L_________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_MID_BENRI_R_________________,
    //     // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //         _________________ROW_BOT_BENRI_L_________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_BOT_BENRI_R_________________,
    //     // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //         _________________ROW_5_NOTHING___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_5_NOTHING___________________,
    //     // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //         _______  ,_______  ,_______  ,_TBR_L2__,_TBR_L1__,_______  ,_______  ,_______  ,_______  ,_______  ,_TBR_R1__,_TBR_R2__,_______  ,_______  ,_______
    //     // └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    // ),

    [_NAV] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_NAV_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_TOP_NAV_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_NAV_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_MID_NAV_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_NAV_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_BOT_NAV_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_5_NOTHING___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_5_NOTHING___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,KC_F     ,KC_ENT   ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_SYM] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_SYM_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_TOP_SYM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_SYM_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_MID_SYM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_SYM_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_BOT_SYM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_5_NOTHING___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_5_NOTHING___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_NUM] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_NUM_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_TOP_NUM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_NUM_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_MID_NUM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_NUM_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_BOT_NUM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_5_NOTHING___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_5_NOTHING___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,KC_0     ,KC_DOT   ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_CUR] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_CUR_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_TOP_CUR_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_CUR_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_MID_CUR_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_CUR_L___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_BOT_CUR_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_5_NOTHING___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_5_NOTHING___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_KB] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬── XXX ──┬─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_KB_L____________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_TOP_KB_R____________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_KB_L____________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_MID_KB_R____________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_KB_L____________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_BOT_KB_R____________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_5_NOTHING___________________,_______  ,_______  ,_______  ,_______  ,_______  ,_________________ROW_5_NOTHING___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
    ),
};
