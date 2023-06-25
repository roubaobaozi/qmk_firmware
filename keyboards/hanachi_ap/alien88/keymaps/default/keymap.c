/* Copyright 2023 Hanachi-ap
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
enum layer_names {
    _BASE,
    _L1,
    _L2,
    _L3,
    _L4,
    _L5,
    _L6,
    _L7,
    _L8,
    _FN,
    _SYS,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_93_ansi( // BASIC
           KC_ESC,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  KC_MPRV, KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL, KC_PGUP, 
  KC_MPLY, KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,     KC_PGDN,   
  KC_MNXT, KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                 KC_ENT,      KC_HOME,   
  KC_VOLU, KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                 KC_UP,       KC_END,
  KC_VOLD, KC_LCTL,   KC_LGUI, KC_LALT,         LCTL_T(KC_SPC),              LSFT_T(KC_SPC),         KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT, KC_DOWN,     KC_RIGHT ,
                                                     KC_LSFT,  MO(_FN),
                                               KC_NO, KC_WH_L,KC_BTN3,KC_WH_R,KC_NO
    ),
[_L1] = LAYOUT_93_ansi( // GAMING 
           KC_ESC,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  KC_MPRV, KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL, KC_PGUP, 
  KC_MPLY, KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,     KC_PGDN,   
  KC_MNXT, KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                 KC_ENT,      KC_HOME,   
  KC_VOLU, KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                 KC_UP,       KC_END,
  KC_VOLD, KC_LCTL,   KC_LGUI, KC_LALT,         LCTL_T(KC_SPC),              LSFT_T(KC_SPC),         KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT, KC_DOWN,     KC_RIGHT ,
                                                     KC_LSFT,  MO(_FN),
                                               KC_NO, KC_WH_L,KC_BTN3,KC_WH_R,KC_NO
    ),

[_L2] = LAYOUT_93_ansi(   
           KC_ESC,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  KC_MPRV, KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL, KC_PGUP, 
  KC_MPLY, KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,     KC_PGDN,   
  KC_MNXT, KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                 KC_ENT,      KC_HOME,   
  KC_VOLU, KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                 KC_UP,       KC_END,
  KC_VOLD, KC_LCTL,   KC_LGUI, KC_LALT,         LCTL_T(KC_SPC),              LSFT_T(KC_SPC),         KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT, KC_DOWN,     KC_RIGHT ,
                                                     KC_LSFT,  MO(_FN),
                                               KC_NO, KC_WH_L,KC_BTN3,KC_WH_R,KC_NO
    ),
[_L3] = LAYOUT_93_ansi(
           KC_ESC,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  KC_MPRV, KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL, KC_PGUP, 
  KC_MPLY, KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,     KC_PGDN,   
  KC_MNXT, KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                 KC_ENT,      KC_HOME,   
  KC_VOLU, KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                 KC_UP,       KC_END,
  KC_VOLD, KC_LCTL,   KC_LGUI, KC_LALT,         LCTL_T(KC_SPC),              LSFT_T(KC_SPC),         KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT, KC_DOWN,     KC_RIGHT ,
                                                     KC_LSFT,  MO(_FN),
                                               KC_NO, KC_WH_L,KC_BTN3,KC_WH_R,KC_NO
    ),
[_L4] = LAYOUT_93_ansi(
           KC_ESC,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  KC_MPRV, KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL, KC_PGUP, 
  KC_MPLY, KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,     KC_PGDN,   
  KC_MNXT, KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                 KC_ENT,      KC_HOME,   
  KC_VOLU, KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                 KC_UP,       KC_END,
  KC_VOLD, KC_LCTL,   KC_LGUI, KC_LALT,         LCTL_T(KC_SPC),              LSFT_T(KC_SPC),         KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT, KC_DOWN,     KC_RIGHT ,
                                                     KC_LSFT,  MO(_FN),
                                               KC_NO, KC_WH_L,KC_BTN3,KC_WH_R,KC_NO
    ),
[_L5] = LAYOUT_93_ansi(
           KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  _______,            
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_NO,        KC_NO ,                KC_NO ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
     ),
[_L6] = LAYOUT_93_ansi(
           KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  _______,            
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_NO,        KC_NO ,                KC_NO ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
     ),
[_L7] = LAYOUT_93_ansi(
           KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  _______,            
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_NO,        KC_NO ,                KC_NO ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
     ),
[_L8] = LAYOUT_93_ansi(
           KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  _______,            
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_NO,        KC_NO ,                KC_NO ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
     ),

[_FN] = LAYOUT_93_ansi(
           S(C(KC_F1)),   S(KC_F1), S(KC_F2), S(KC_F3), S(KC_F4), S(KC_F5), S(KC_F6), S(KC_F7), S(KC_F8),  S(KC_F9),  S(KC_F10),S(KC_F11),  S(KC_F12),  MO(_SYS),            
  S(C(KC_F2)),   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  S(C(KC_F3)),   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  S(C(KC_F4)),   KC_CAPS, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LEFT,  KC_DOWN,  KC_UP,     KC_RIGHT,  KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  S(C(KC_F5)),   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,  KC_END,    KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  S(C(KC_F6)),   KC_NO,   KC_NO, KC_NO,             KC_BSPC,              KC_DEL,                     KC_NO,  KC_NO,  KC_NO,  KC_NO,     KC_NO,          KC_NO ,
                                                           KC_ENT,     _______ ,
                                               KC_NO, KC_VOLD,KC_MUTE,KC_VOLU,KC_NO
    ),
[_SYS] = LAYOUT_93_ansi(
           TO(_BASE), TO(1),  TO(2),    TO(3),    TO(4),    TO(5),    TO(6),    TO(7),    TO(8),     KC_NO,     KC_NO,    KC_NO,  KC_SLEP,  _______,            
  KC_NO,   RGB_TOG, RGB_MOD,  RGB_RMOD, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   RGB_VAI,  RGB_VAD,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   RGB_SAI,  RGB_SAD,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   RGB_HUI,  RGB_HUD,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  QK_BOOT, KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_CAPS,        KC_NUM ,                KC_SCRL ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
    )

};


#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM layer_0[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {1,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {2,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {3,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {4,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {5,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_6[] = RGBLIGHT_LAYER_SEGMENTS(
    {6,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_7[] = RGBLIGHT_LAYER_SEGMENTS(
    {7,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_8[] = RGBLIGHT_LAYER_SEGMENTS(
    {8,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM rgb_caps_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {88, 1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM rgb_numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {89, 1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM rgb_scllock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {90, 1, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer_0,
    layer_1,
    layer_2,
    layer_3,
    layer_4,
    layer_5,
    layer_6,
    layer_7,
    layer_8,
    rgb_caps_layer,
    rgb_numlock_layer,
    rgb_scllock_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
//    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    rgblight_set_layer_state(1, layer_state_cmp(state, _L1));
    rgblight_set_layer_state(2, layer_state_cmp(state, _L2));
    rgblight_set_layer_state(3, layer_state_cmp(state, _L3));
    rgblight_set_layer_state(4, layer_state_cmp(state, _L4));
    rgblight_set_layer_state(5, layer_state_cmp(state, _L5));
    rgblight_set_layer_state(6, layer_state_cmp(state, _L6));
    rgblight_set_layer_state(7, layer_state_cmp(state, _L7));
    rgblight_set_layer_state(8, layer_state_cmp(state, _L8));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(9, IS_HOST_LED_ON(USB_LED_CAPS_LOCK));
    rgblight_set_layer_state(10, IS_HOST_LED_ON(USB_LED_NUM_LOCK));
    rgblight_set_layer_state(11, IS_HOST_LED_ON(USB_LED_SCROLL_LOCK));

    return true;
}
#endif

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
// Key Matrix to LED Index
  { NO_LED, 0,  1,  2,  3,  4,  5,  6,  7,     8,  9, 10, 11, 12,     13,NO_LED, NO_LED},
  { 14,    15, 16, 17, 18, 19, 20, 21, 22,    23, 24, 25, 26, 27,     28, 29,    NO_LED},
  { 30,    31, 32, 33, 34, 35, 36, 37, 38,    39, 40, 41, 42, 43,     44, 45,    NO_LED},
  { 46,    47, 48, 49, 50, 51, 52, 53, 54,    55, 56, 57, 58, 59,     60, 61,    NO_LED},
  { 62,    63, 64, 65, 66, 67, 68, 69, 70,    71, 72, 73, 74, NO_LED, 75, 76,    NO_LED},
  { 77,    78, 79, 80, 81, 82, 83, 84, NO_LED,85, 86, 87, 88, NO_LED, 89, 90,    NO_LED},
}, {
// LED Index to Physical Position
{16, 0}, {33, 0}, {47, 0}, {60, 0}, {74, 0}, {91, 0}, {105, 0}, {119, 0}, {132, 0}, {150, 0}, {163, 0}, {177, 0}, {191, 0}, {208, 0}, 
{0, 12}, {16, 12}, {29, 12}, {43, 12}, {57, 12}, {71, 12}, {84, 12}, {98, 12}, {112, 12}, {126, 12}, {140, 12}, {153, 12}, {167, 12}, {181, 12}, {208, 12}, {224, 12}, 
{0, 22}, {19, 22}, {36, 22}, {50, 22}, {64, 22}, {78, 22}, {105, 22}, {91, 22}, {119, 22}, {133, 22}, {146, 22}, {160, 22}, {174, 22}, {195, 12}, {205, 22}, {224, 22}, 
{0, 33}, {21, 33}, {40, 33}, {54, 33}, {67, 33}, {81, 33}, {109, 33}, {95, 33}, {122, 33}, {136, 33}, {150, 33}, {164, 33}, {177, 33}, {188, 22}, {200, 33}, {224, 33}, 
{0, 43}, {24, 43}, {47, 43}, {60, 43}, {74, 43}, {88, 43}, {102, 43}, {115, 43}, {129, 43}, {143, 43}, {157, 43}, {170, 43}, {189, 43}, {208, 43}, {224, 43}, 
{0, 54}, {17, 54}, {35, 54}, {52, 54}, {81, 54}, {93, 64}, {110, 64}, {122, 54}, {150, 54}, {164, 54}, {179, 54}, {195, 54}, {208, 54}, {224, 54}, 
}, {
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,4,4
} };

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max)
{
    int is_layer = get_highest_layer(layer_state | default_layer_state);
    if (is_layer >= 1 && is_layer <=8)
    {
        rgb_matrix_set_color(is_layer, 0,100, 0);
    }
    return true;
}
#endif
