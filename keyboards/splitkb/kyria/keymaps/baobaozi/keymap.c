#include QMK_KEYBOARD_H

#include "baobaozi.h"

    /* Re-pass though to allow templates to be used */
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐                                         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            KC_TAB   ,_________________ROW_TOP_COLMK_L_________________,                                          _________________ROW_TOP_COLMK_R_________________,KC_BSPC  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            LTN(GRV) ,_________________ROW_MID_COLMK_L_________________,                                          _________________ROW_MID_COLMK_R_________________,LTN(ENT) ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┬─────────┐ ┌─────────┬─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_LSFT  ,_________________ROW_BOT_COLMK_L_________________,TGNAV    ,TGCLMK   ,  TGQWER   ,TGCUR    ,_________________ROW_BOT_COLMK_R_________________,KC_RSFT  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          KC_BTN1  ,__T_L3___,__T_L2___,__T_L1___,__T_L3___,  __T_R3___,__T_R1___,__T_R2___,__T_R3___,KC_BTN2
                                      // └─────────┴─────────┴─────────┴─────────┴─────────┘ └─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_QWERTY] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐                                         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_QWERT_L_________________,                                          _________________ROW_TOP_QWERT_R_________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_QWERT_L_________________,                                          _________________ROW_MID_QWERT_R_________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┬─────────┐ ┌─────────┬─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_QWERT_L_________________,_______  ,_______  ,  _______  ,_______  ,_________________ROW_BOT_QWERT_R_________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,_______  ,  _______  ,_______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┴─────────┘ └─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_NAV] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐                                         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_NAV_L___________________,                                          _________________ROW_TOP_NAV_R___________________,KC_DEL   ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_NAV_L___________________,                                          _________________ROW_MID_NAV_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┬─────────┐ ┌─────────┬─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_NAV_L___________________,_______  ,_______  ,  _______  ,_______  ,_________________ROW_BOT_NAV_R___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,_______  ,  KC_ENT   ,_______  ,KC_F     ,KC_ENT   ,_______
                                      // └─────────┴─────────┴─────────┴─────────┴─────────┘ └─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_SYM] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐                                         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_SYM_L___________________,                                          _________________ROW_TOP_SYM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_SYM_L___________________,                                          _________________ROW_MID_SYM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┬─────────┐ ┌─────────┬─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_SYM_L___________________,_______  ,_______  ,  _______  ,_______  ,_________________ROW_BOT_SYM_R___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,_______  ,  _______  ,_______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┴─────────┘ └─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_NUM] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐                                         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_NUM_L___________________,                                          _________________ROW_TOP_NUM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_NUM_L___________________,                                          _________________ROW_MID_NUM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┬─────────┐ ┌─────────┬─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_NUM_L___________________,_______  ,_______  ,  _______  ,_______  ,_________________ROW_BOT_NUM_R___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,_______  ,  KC_DOT   ,_______  ,KC_0     ,KC_DOT   ,_______
                                      // └─────────┴─────────┴─────────┴─────────┴─────────┘ └─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_CUR] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐                                         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_CUR_L___________________,                                          _________________ROW_TOP_CUR_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_CUR_L___________________,                                          _________________ROW_MID_CUR_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┬─────────┐ ┌─────────┬─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_CUR_L___________________,_______  ,_______  ,  _______  ,_______  ,_________________ROW_BOT_CUR_R___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,_______  ,  _______  ,_______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┴─────────┘ └─────────┴─────────┴─────────┴─────────┴─────────┘
    ),

    [_KB] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐                                         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_KB_L____________________,                                          _________________ROW_TOP_KB_R____________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_KB_L____________________,                                          _________________ROW_MID_KB_R____________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┬─────────┐ ┌─────────┬─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_KB_L____________________,_______  ,_______  ,  _______  ,_______  ,_________________ROW_BOT_KB_R____________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,_______  ,  _______  ,_______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┴─────────┘ └─────────┴─────────┴─────────┴─────────┴─────────┘
    ),
};

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

#if defined(OLED_ENABLE)
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_180;
}

static void render_kyria_logo(void) {
    static const char PROGMEM kyria_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
        0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    };
    oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
}

static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}

static void render_status(void) {
    // QMK Logo and version information
    render_qmk_logo();
    oled_write_P(PSTR("Kyria rev1.0\n\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adjust\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
    uint8_t led_usb_state = host_keyboard_leds();
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_NUM_LOCK) ? PSTR("NUMLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_CAPS_LOCK) ? PSTR("CAPLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_SCROLL_LOCK) ? PSTR("SCRLCK ") : PSTR("       "), false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status(); // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_kyria_logo();
    }
}
#endif

#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Volume control
        if (clockwise) {
            // reversed on this keyboard for some reason?
            tap_code(KC_MS_L);
        } else {
            tap_code(KC_MS_R);
        }
    } else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
            // reversed on this keyboard for some reason?
            tap_code(KC_MS_U);
        } else {
            tap_code(KC_MS_D);
        }
    }

    return false;
}
#endif
