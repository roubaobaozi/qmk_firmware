#include QMK_KEYBOARD_H

#include "baobaozi.h"

/* Re-pass though to allow templates to be used */
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

#define _DAC__NO_ _______ // dirty dactyl keymap with extra keys that don’t exist

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_COLMK_L_________________,          _________________ROW_TOP_COLMK_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_COLMK_L_________________,          _________________ROW_MID_COLMK_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_COLMK_L_________________,          _________________ROW_BOT_COLMK_R_________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                      _DAC__NO_,__T_L2___,                                                  __T_R2___,_DAC__NO_,
                                          __T_L1___,__T_L3___,          __T_R3___,__T_R1___,
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
                            //  closest  ,middle   ,farthest ,         farthest  ,middle   ,closest
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_,
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_
    ),

    [_QWERTY] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_QWERT_L_________________,          _________________ROW_TOP_QWERT_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_QWERT_L_________________,          _________________ROW_MID_QWERT_R_________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_QWERT_L_________________,          _________________ROW_BOT_QWERT_R_________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                      _DAC__NO_,__T_L2___,                                                  __T_R2___,_DAC__NO_,
                                          __T_L1___,__T_L3___,          __T_R3___,__T_R1___,
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
                            //  closest  ,middle   ,farthest ,         farthest  ,middle   ,closest
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_,
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_
    ),

    [_NAV] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_NAV_L___________________,          _________________ROW_TOP_NAV_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_NAV_L___________________,          _________________ROW_MID_NAV_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_NAV_L___________________,          _________________ROW_BOT_NAV_R___________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                      _DAC__NO_,_______  ,                                                  KC_F     ,_DAC__NO_,
                                          _______  ,_______  ,          KC_ENT   ,_______  ,
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
                            //  closest  ,middle   ,farthest ,         farthest  ,middle   ,closest
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_,
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_
    ),

    [_SYM] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_SYM_L___________________,          _________________ROW_TOP_SYM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_SYM_L___________________,          _________________ROW_MID_SYM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_SYM_L___________________,          _________________ROW_BOT_SYM_R___________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                      _DAC__NO_,_______  ,                                                  _______  ,_DAC__NO_,
                                          _______  ,_______  ,          _______  ,_______  ,
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
                            //  closest  ,middle   ,farthest ,         farthest  ,middle   ,closest
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_,
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_
    ),

    [_NUM] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_NUM_L___________________,          _________________ROW_TOP_NUM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_NUM_L___________________,          _________________ROW_MID_NUM_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_NUM_L___________________,          _________________ROW_BOT_NUM_R___________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                      _DAC__NO_,_______  ,                                                  KC_0     ,_DAC__NO_,
                                          _______  ,_______  ,          KC_DOT   ,_______  ,
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
                            //  closest  ,middle   ,farthest ,         farthest  ,middle   ,closest
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_,
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_
    ),

    [_CUR] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_CUR_L___________________,          _________________ROW_TOP_CUR_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_CUR_L___________________,          _________________ROW_MID_CUR_R___________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_CUR_L___________________,          _________________ROW_BOT_CUR_R___________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                      _DAC__NO_,_______  ,                                                  _______  ,_DAC__NO_,
                                          _______  ,_______  ,          _______  ,_______  ,
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
                            //  closest  ,middle   ,farthest ,         farthest  ,middle   ,closest
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_,
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_
    ),

    [_KB] = LAYOUT_wrapper(
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
            _________________ROW_TOP_KB_L____________________,          _________________ROW_TOP_KB_R____________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_MID_KB_L____________________,          _________________ROW_MID_KB_R____________________,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
            _________________ROW_BOT_KB_L____________________,          _________________ROW_BOT_KB_R____________________,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                      _DAC__NO_,_______  ,                                                  _______  ,_DAC__NO_,
                                          _______  ,_______  ,          _______  ,_______  ,
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
                            //  closest  ,middle   ,farthest ,         farthest  ,middle   ,closest
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_,
                                          _DAC__NO_,_DAC__NO_,          _DAC__NO_,_DAC__NO_
    ),
};

// void persistent_default_layer_set(uint16_t default_layer) {
//   eeconfig_update_default_layer(default_layer);
//   default_layer_set(default_layer);
// }
