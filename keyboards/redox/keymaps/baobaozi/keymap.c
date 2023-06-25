#include QMK_KEYBOARD_H

#include "baobaozi.h"

/* Re-pass though to allow templates to be used */
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs                          Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            KC_ESC   ,_________________ROW_NUMBERS_L___________________,                                           _________________ROW_NUMBERS_R___________________,KC_MPLY  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_TAB   ,_________________ROW_TOP_COLMK_L_________________,TGNAV    ,                       TGQWER   ,_________________ROW_TOP_COLMK_R_________________,KC_BSPC  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            LTN(GRV) ,_________________ROW_MID_COLMK_L_________________,XXXXXXX  ,                       XXXXXXX  ,_________________ROW_MID_COLMK_R_________________,LTN(ENT) ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            OS(LSFT) ,_________________ROW_BOT_COLMK_L_________________,KC_DEL   ,KC_ESC   ,   XXXXXXX  ,XXXXXXX  ,_________________ROW_BOT_COLMK_R_________________,OS(RSFT) ,
        // ├─────────┼─────────┼─────────┼─────────┼─────┬───┴─────┬───┼─────────┼─────────┤  ├─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
            __T_L4___,XXXXXXX  ,AAG(NO)  ,__T_L3___,      __T_L2___,    __T_L1___,__T_L3___,   __T_R3___,__T_R1___,     __T_R2___,     KC_LEFT  ,KC_UP    ,KC_DOWN  ,KC_RGHT
        // └─────────┴─────────┴─────────┴─────────┘     └─────────┘   └─────────┴─────────┘  └─────────┴─────────┘    └─────────┘    └─────────┴─────────┴─────────┴─────────┘
    ),

    [_QWERTY] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs                          Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_NUMBERS_L___________________,                                           _________________ROW_NUMBERS_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_TOP_QWERT_L_________________,_______  ,                       _______  ,_________________ROW_TOP_QWERT_R_________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_QWERT_L_________________,_______  ,                       _______  ,_________________ROW_MID_QWERT_R_________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_QWERT_L_________________,_______  ,_______  ,   _______  ,_______  ,_________________ROW_BOT_QWERT_R_________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────┬───┴─────┬───┼─────────┼─────────┤  ├─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,      _______  ,    _______  ,_______  ,   _______  ,_______  ,     _______  ,     _______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┘     └─────────┘   └─────────┴─────────┘  └─────────┴─────────┘    └─────────┘    └─────────┴─────────┴─────────┴─────────┘
    ),

    [_NAV] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs                          Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_5_NOTHING___________________,                                           _________________ROW_5_NOTHING___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_TOP_NAV_L___________________,_______  ,                       _______  ,_________________ROW_TOP_NAV_R___________________,KC_DEL   ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_NAV_L___________________,_______  ,                       _______  ,_________________ROW_MID_NAV_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_NAV_L___________________,_______  ,_______  ,   _______  ,_______  ,_________________ROW_BOT_NAV_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────┬───┴─────┬───┼─────────┼─────────┤  ├─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,      _______  ,    _______  ,_______  ,   _______  ,_______  ,     _______  ,     _______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┘     └─────────┘   └─────────┴─────────┘  └─────────┴─────────┘    └─────────┘    └─────────┴─────────┴─────────┴─────────┘
    ),

    [_SYM] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs                          Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_5_NOTHING___________________,                                           _________________ROW_5_NOTHING___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_TOP_SYM_L___________________,_______  ,                       _______  ,_________________ROW_TOP_SYM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_SYM_L___________________,_______  ,                       _______  ,_________________ROW_MID_SYM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_SYM_L___________________,_______  ,_______  ,   _______  ,_______  ,_________________ROW_BOT_SYM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────┬───┴─────┬───┼─────────┼─────────┤  ├─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,      _______  ,    _______  ,_______  ,   _______  ,_______  ,     _______  ,     _______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┘     └─────────┘   └─────────┴─────────┘  └─────────┴─────────┘    └─────────┘    └─────────┴─────────┴─────────┴─────────┘
    ),

    [_NUM] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs                          Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_5_NOTHING___________________,                                           _________________ROW_5_NOTHING___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_TOP_NUM_L___________________,_______  ,                       _______  ,_________________ROW_TOP_NUM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_NUM_L___________________,_______  ,                       _______  ,_________________ROW_MID_NUM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_NUM_L___________________,_______  ,_______  ,   _______  ,_______  ,_________________ROW_BOT_NUM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────┬───┴─────┬───┼─────────┼─────────┤  ├─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,      _______  ,    _______  ,_______  ,   _______  ,_______  ,     _______  ,     _______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┘     └─────────┘   └─────────┴─────────┘  └─────────┴─────────┘    └─────────┘    └─────────┴─────────┴─────────┴─────────┘
    ),

    [_CUR] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs                          Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_5_NOTHING___________________,                                           _________________ROW_5_NOTHING___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_TOP_CUR_L___________________,_______  ,                       _______  ,_________________ROW_TOP_CUR_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_CUR_L___________________,_______  ,                       _______  ,_________________ROW_MID_CUR_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_CUR_L___________________,_______  ,_______  ,   _______  ,_______  ,_________________ROW_BOT_CUR_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────┬───┴─────┬───┼─────────┼─────────┤  ├─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,      _______  ,    _______  ,_______  ,   _______  ,_______  ,     _______  ,     _______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┘     └─────────┘   └─────────┴─────────┘  └─────────┴─────────┘    └─────────┘    └─────────┴─────────┴─────────┴─────────┘
    ),

    [_FNC] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs                          Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_5_NOTHING___________________,                                           _________________ROW_5_NOTHING___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_TOP_FNC_L___________________,_______  ,                       _______  ,_________________ROW_TOP_FNC_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_FNC_L___________________,_______  ,                       _______  ,_________________ROW_MID_FNC_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_FNC_L___________________,_______  ,_______  ,   _______  ,_______  ,_________________ROW_BOT_FNC_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────┬───┴─────┬───┼─────────┼─────────┤  ├─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,      _______  ,    _______  ,_______  ,   _______  ,_______  ,     _______  ,     _______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┘     └─────────┘   └─────────┴─────────┘  └─────────┴─────────┘    └─────────┘    └─────────┴─────────┴─────────┴─────────┘
    ),

    [_KB] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs                          Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_5_NOTHING___________________,                                           _________________ROW_5_NOTHING___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_TOP_KB_L____________________,_______  ,                       _______  ,_________________ROW_TOP_KB_R____________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_KB_L____________________,TGQWER   ,                       TGCLMK   ,_________________ROW_MID_KB_R____________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_KB_L____________________,_______  ,_______  ,   _______  ,_______  ,_________________ROW_BOT_KB_R____________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────┬───┴─────┬───┼─────────┼─────────┤  ├─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_______  ,_______  ,_______  ,      _______  ,    _______  ,_______  ,   _______  ,_______  ,     _______  ,     _______  ,_______  ,_______  ,_______
        // └─────────┴─────────┴─────────┴─────────┘     └─────────┘   └─────────┴─────────┘  └─────────┴─────────┘    └─────────┘    └─────────┴─────────┴─────────┴─────────┘
    ),
};
