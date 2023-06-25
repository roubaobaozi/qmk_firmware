#include QMK_KEYBOARD_H

#include "baobaozi.h"

// #ifdef PROTOCOL_LUFA
//     #include "lufa.h"
//     #include "split_util.h"
// #endif
// #ifdef SSD1306OLED
//     #include "ssd1306.h"
// #endif

// #ifdef RGBLIGHT_ENABLE
// //Following line allows macro to read current RGB settings
// extern rgblight_config_t rgblight_config;
// #endif

// extern uint8_t is_master;

/* Re-pass though to allow templates to be used */
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs      Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            KC_TAB   ,_________________ROW_TOP_COLMK_L_________________,                       _________________ROW_TOP_COLMK_R_________________,KC_BSPC  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            LTN(GRV) ,_________________ROW_MID_COLMK_L_________________,                       _________________ROW_MID_COLMK_R_________________,LTN(ENT) ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            OS(LSFT) ,_________________ROW_BOT_COLMK_L_________________,                       _________________ROW_BOT_COLMK_R_________________,OS(RSFT) ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_ESC   ,_________________ROW_5_NOTHING___________________,TGNAV    ,   TGNAV    ,_________________ROW_5_NOTHING___________________,KC_MPLY  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┴─────────┤  ├─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          __T_L4___,__T_L3___,__T_L2___,__T_L1___,   __T_R1___,__T_R2___,__T_R2B__,__T_R3___
                                      // └─────────┴─────────┴─────────┴─────────┘  └─────────┴─────────┴─────────┴─────────┘
    ),

    [_QWERTY] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs      Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_QWERT_L_________________,                       _________________ROW_TOP_QWERT_R_________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_QWERT_L_________________,                       _________________ROW_MID_QWERT_R_________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_QWERT_L_________________,                       _________________ROW_BOT_QWERT_R_________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_5_NOTHING___________________,_______  ,   _______  ,_________________ROW_5_NOTHING___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┴─────────┤  ├─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,   _______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┘  └─────────┴─────────┴─────────┴─────────┘
    ),

    [_NAV] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs      Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_NAV_L___________________,                       _________________ROW_TOP_NAV_R___________________,KC_DEL   ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_NAV_L___________________,                       _________________ROW_MID_NAV_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_NAV_L___________________,                       _________________ROW_BOT_NAV_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_5_NOTHING___________________,_______  ,   _______  ,_________________ROW_5_NOTHING___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┴─────────┤  ├─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,   _______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┘  └─────────┴─────────┴─────────┴─────────┘
    ),

    [_SYM] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs      Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_SYM_L___________________,                       _________________ROW_TOP_SYM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_SYM_L___________________,                       _________________ROW_MID_SYM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_SYM_L___________________,                       _________________ROW_BOT_SYM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_5_NOTHING___________________,_______  ,   _______  ,_________________ROW_5_NOTHING___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┴─────────┤  ├─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,   _______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┘  └─────────┴─────────┴─────────┴─────────┘
    ),

    [_NUM] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs      Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_NUM_L___________________,                       _________________ROW_TOP_NUM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_NUM_L___________________,                       _________________ROW_MID_NUM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_NUM_L___________________,                       _________________ROW_BOT_NUM_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_5_NOTHING___________________,_______  ,   _______  ,_________________ROW_5_NOTHING___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┴─────────┤  ├─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,   _______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┘  └─────────┴─────────┴─────────┴─────────┘
    ),

    [_CUR] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs      Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_CUR_L___________________,                       _________________ROW_TOP_CUR_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_CUR_L___________________,                       _________________ROW_MID_CUR_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_CUR_L___________________,                       _________________ROW_BOT_CUR_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_5_NOTHING___________________,_______  ,   _______  ,_________________ROW_5_NOTHING___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┴─────────┤  ├─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,   _______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┘  └─────────┴─────────┴─────────┴─────────┘
    ),

    [_FNC] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs      Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_FNC_L___________________,                       _________________ROW_TOP_FNC_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_FNC_L___________________,                       _________________ROW_MID_FNC_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_FNC_L___________________,                       _________________ROW_BOT_FNC_R___________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_5_NOTHING___________________,_______  ,   _______  ,_________________ROW_5_NOTHING___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┴─────────┤  ├─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,   _______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┘  └─────────┴─────────┴─────────┴─────────┘
    ),

    [_KB] = LAYOUT_wrapper(
        // ┌─ Extra ─┬─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐  Thumbs      Thumbs  ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┬─ Extra ─┐
            _______  ,_________________ROW_TOP_KB_L____________________,                       _________________ROW_TOP_KB_R____________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_MID_KB_L____________________,                       _________________ROW_MID_KB_R____________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                      ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_BOT_KB_L____________________,                       _________________ROW_BOT_KB_R____________________,_______  ,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            _______  ,_________________ROW_5_NOTHING___________________,_______  ,   _______  ,_________________ROW_5_NOTHING___________________,_______  ,
        // └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┴─────────┤  ├─────────┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                          _______  ,_______  ,_______  ,_______  ,   _______  ,_______  ,_______  ,_______
                                      // └─────────┴─────────┴─────────┴─────────┘  └─────────┴─────────┴─────────┴─────────┘
    ),
};

// int RGB_current_mode;

// void matrix_init_user(void) {
//     #ifdef RGBLIGHT_ENABLE
//         RGB_current_mode = rgblight_config.mode;
//     #endif
// }

//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#if defined(OLED_ENABLE)
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master())
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    return OLED_ROTATION_270;
}

// When you add source files to SRC in rules.mk, you can use functions.
// const char *read_layer_state(void);
const char *read_logo(void);
// void set_keylog(uint16_t keycode, keyrecord_t *record);
// const char *read_keylog(void);
// const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

// static uint32_t oled_timer = 0;

// bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
//     if (record->event.pressed) {
//         oled_timer = timer_read32(); // when you type again, reset the timer to let you know inactivity
//     }

//     return true;
// }

// oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

// void render_space(void) {
//     oled_write_P(PSTR("\n"), false);
// }

void render_mod_status(uint8_t modifiers) {
    led_t led_state = host_keyboard_led_state();

    oled_write_P(modifiers & MOD_MASK_GUI ? PSTR(">cmd\n\n") : PSTR(" cmd\n\n"), false);
    oled_write_P(modifiers & MOD_MASK_ALT ? PSTR(">opt\n\n") : PSTR(" opt\n\n"), false);
    oled_write_P(modifiers & MOD_MASK_CTRL ? PSTR(">ctl\n\n") : PSTR(" ctl\n\n"), false);
    oled_write_P(modifiers & MOD_MASK_SHIFT ? PSTR(">sft\n\n") : PSTR(" sft\n\n"), false);
    oled_write_P(led_state.caps_lock ? PSTR(">cap\n") : PSTR(" cap\n"), false);
}


void render_layer_state(void) {
    if (get_highest_layer(layer_state) == _FNC) {
        // You also have access to a `default_layer_state` for when you DF … so you can tell difference between which default layer you’re on
        oled_write_P(PSTR("\n FNC\n F12\n"), false);
    } else if (get_highest_layer(layer_state) == _KB) {
        oled_write_P(PSTR("\n KB\n act\n"), false);
    } else if (get_highest_layer(layer_state) == _CUR) {
        oled_write_P(PSTR("\n CUR\n sor\n"), false);
    } else if (get_highest_layer(layer_state) == _SYM) {
        oled_write_P(PSTR("\n SYM\n !@#\n"), false);
    } else if (get_highest_layer(layer_state) == _NUM) {
        oled_write_P(PSTR("\n NUM\n 123\n"), false);
    } else if (get_highest_layer(layer_state) == _NAV) {
        oled_write_P(PSTR("\n NAV\n mov\n"), false);
    } else if (get_highest_layer(layer_state) == _QWERTY) {
        oled_write_P(PSTR("\n QWE\n sux\n"), false);
    } else {
        oled_write_P(PSTR("\n CMK\n yay\n"), false);
    }
}

void render_status_main(void) {
    // render_logo();
    // render_space();
    render_layer_state();
    // render_space();
    oled_write_P(PSTR(" ---\n\n"), false);
    render_mod_status(get_mods()|get_oneshot_mods());
}

bool oled_task_user(void) {
// void oled_task_user(void) {
    // if (timer_elapsed32(oled_timer) > 60000) {
    //     oled_off();
    //     rgblight_disable_noeeprom();

    //     return;
    // } else {
        oled_on();
        // rgblight_enable_noeeprom();

        if (is_keyboard_master()) {
            render_status_main();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
            // If you want to change the display of OLED, you need to change here
            // oled_write_ln(read_layer_state(), false);
            // oled_write_ln(read_keylog(), false);
            // oled_write_ln(read_keylogs(), false);
            //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
            //oled_write_ln(read_host_led_state(), false);
            //oled_write_ln(read_timelog(), false);
        } else {
            // render_status_main();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
            oled_write(read_logo(), false);
            oled_scroll_left();
        }
    // }

    return false;
}
#endif // OLED_DRIVER_ENABLE

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
// bool try_handle_macro(uint16_t keycode, keyrecord_t *record) {
    // if (record->event.pressed) {
// #       ifdef OLED_DRIVER_ENABLE
            // oled_timer = timer_read32();
// #       endif
    // set_timelog();
    // }

//     if (record->event.pressed) {
// #ifdef OLED_DRIVER_ENABLE
//         set_keylog(keycode, record);
// #endif
//         // set_timelog();
//     }

//   switch (keycode) {
//     case QWERTY:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_QWERTY);
//       }
//       return false;
//       break;
//     case LOWER:
//       if (record->event.pressed) {
//         layer_on(_LOWER);
//         update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_LOWER);
//         update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case RAISE:
//       if (record->event.pressed) {
//         layer_on(_RAISE);
//         update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_RAISE);
//         update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case ADJUST:
//         if (record->event.pressed) {
//           layer_on(_ADJUST);
//         } else {
//           layer_off(_ADJUST);
//         }
//         return false;
//         break;
//   }
//     return true;
// }

#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        switch(get_highest_layer(layer_state)) {
            case _COLEMAK:
            case _QWERTY:
            default:
                clockwise ? tap_code(KC_PGDN) : tap_code(KC_PGUP);
                break;
        }
    }

    return false;
}
#endif

// void keyboard_post_init_kb(void) {
//     // // set initial animation type (in that I don’t want it)
//     // rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
//     // // set the default colour
//     // rgblight_sethsv_range(HSV_CYAN, 0, RGBLED_NUM);
//     // Enable the LED layers
//     // rgblight_layers = rgb_light_layers;
//     // drashna’s fix for weird lights
//     rgblight_enable_noeeprom();
//     layer_state_set_user(0);
// }

// Setting ADJUST layer RGB back to default
// void update_tri_layer_RGB(uint8_t layer1) {
//     if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
//         layer_on(layer3);
//     } else {
//         layer_off(layer3);
//     }
// }

//SSD1306 OLED update loop,ke sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
// #ifdef OLED_DRIVER_ENABLE

// oled_rotation_t oled_init_user(oled_rotation_t rotation) {
//     if (!is_keyboard_master()) {
//         return OLED_ROTATION_180;
//     }  // flips the display 180 degrees if offhand

//     return rotation;
// }

// // When you add source files to SRC in rules.mk,
// const char *read_layer_state(void);
// const char *read_logo(void);
// void set_keylog(uint16_t keycode,keyrecord_t *record);
// const char *read_keylog(void);
// const char *read_keylogs(void);

// // const char *read_mode_icon(bool swap);
// // const char *read_host_led_state(void);
// // void set_timelog(void);
// // const char *read_timelog(void);

// void oled_task_user(void) {
//     if (is_keyboard_master()) {
//         // If you want to change the display of OLED,
//         oled_write_ln(read_layer_state(),
//         oled_write_ln(read_keylog(),
//         oled_write_ln(read_keylogs(),
//         //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui),
//         //oled_write_ln(read_host_led_state(),
//         //oled_write_ln(read_timelog(),
//     } else {
//         oled_write(read_logo(),
//     }
// }
// #endif // OLED_DRIVER_ENABLE

// bool process_record_user(uint16_t keycode,keyrecord_t *record) {
//     if (record->event.pressed) {
// #ifdef OLED_DRIVER_ENABLE
//         set_keylog(keycode,
// #endif
//         // set_timelog();
//     }
//     return true;
// }

