#include QMK_KEYBOARD_H

#include "baobaozi.h"

/* Re-pass though to allow templates to be used */
#define LAYOUT_wrapper(...) LAYOUT_3x5_3(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_COLMK_L_________________,          _________________ROW_TOP_COLMK_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_COLMK_L_________________,          _________________ROW_MID_COLMK_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_COLMK_L_________________,          _________________ROW_BOT_COLMK_R_________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                __T_L3___,__T_L2___,__T_L1___,          __T_R1___,__T_R2___,__T_R3___
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_NAV] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_NAV_L___________________,          _________________ROW_TOP_NAV_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_NAV_L___________________,          _________________ROW_MID_NAV_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_NAV_L___________________,          _________________ROW_BOT_NAV_R___________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,KC_F     ,KC_ENT
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_SYM] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_SYM_L___________________,          _________________ROW_TOP_SYM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_SYM_L___________________,          _________________ROW_MID_SYM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_SYM_L___________________,          _________________ROW_BOT_SYM_R___________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,_______  ,_______
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_NUM] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_NUM_L___________________,          _________________ROW_TOP_NUM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_NUM_L___________________,          _________________ROW_MID_NUM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_NUM_L___________________,          _________________ROW_BOT_NUM_R___________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,KC_0     ,KC_DOT
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_CUR] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_CUR_L___________________,          _________________ROW_TOP_CUR_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_CUR_L___________________,          _________________ROW_MID_CUR_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_CUR_L___________________,          _________________ROW_BOT_CUR_R___________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,_______  ,_______
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_FNC] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_FNC_L___________________,          _________________ROW_TOP_FNC_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_FNC_L___________________,          _________________ROW_MID_FNC_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_FNC_L___________________,          _________________ROW_BOT_FNC_R___________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,_______  ,_______
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_KB] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_KB_L____________________,          _________________ROW_TOP_KB_R____________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_KB_L____________________,          _________________ROW_MID_KB_R____________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_KB_L____________________,          _________________ROW_BOT_KB_R____________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,_______  ,_______
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),
};
