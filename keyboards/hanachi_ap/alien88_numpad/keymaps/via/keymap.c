/* Copyright 2021 QMK
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
[_BASE] = LAYOUT_4x6(
             KC_NUM,    KC_F2,      MO(_SYS), 
  KC_ESC,    KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),
[_L1] = LAYOUT_4x6(
             KC_NUM,    KC_F2,      MO(_SYS), 
  KC_ESC,    KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),
[_L2] = LAYOUT_4x6(
             KC_NUM,    KC_F2,      MO(_SYS), 
  KC_ESC,    KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),
[_L3] = LAYOUT_4x6(
             KC_NUM,    KC_F2,      MO(_SYS), 
  KC_ESC,    KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),
[_L4] = LAYOUT_4x6(
             KC_NUM,    KC_F2,      MO(_SYS), 
  KC_ESC,    KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),
[_L5] = LAYOUT_4x6(
             KC_NUM,    KC_F2,      MO(_SYS), 
  KC_ESC,    KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),
[_L6] = LAYOUT_4x6(
             KC_NUM,    KC_F2,      MO(_SYS), 
  KC_ESC,    KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),
[_L7] = LAYOUT_4x6(
             KC_NUM,    KC_F2,      MO(_SYS), 
  KC_ESC,    KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),
[_L8] = LAYOUT_4x6(
             KC_NUM,    KC_F2,      MO(_SYS), 
  KC_ESC,    KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),
[_FN] = LAYOUT_4x6(
             KC_ESC,    KC_F1,      MO(_SYS), 
  KC_NUM,   KC_DEL,    KC_BSPC,    KC_KP_SLASH,
  KC_KP_7,   KC_KP_8,   KC_KP_9,    KC_KP_ASTERISK,
  KC_KP_4,   KC_KP_5,   KC_KP_6,    KC_KP_MINUS,
  KC_KP_1,   KC_KP_2,   KC_KP_3,    KC_KP_PLUS,
  KC_KP_0,   KC_KP_DOT, KC_COMMA,   KC_KP_ENTER
    ),

[_SYS] = LAYOUT_4x6(
           RGB_MOD, RGB_VAI,    _______, 
  RGB_TOG, RGB_RMOD,RGB_VAD, RGB_SAI,
  TO(7),   TO(8),   KC_NO,   RGB_SAD,
  TO(4),   TO(5),   TO(6),   RGB_VAI,
  TO(1),   TO(2),   TO(3),   RGB_VAD,
  TO(_BASE), KC_NO, QK_BOOT, KC_NO
    ),
};

#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM layer_0[] = RGBLIGHT_LAYER_SEGMENTS(
    {18,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {15,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {16,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {17,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {11,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {12,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_6[] = RGBLIGHT_LAYER_SEGMENTS(
    {13,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_7[] = RGBLIGHT_LAYER_SEGMENTS(
    {7,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_8[] = RGBLIGHT_LAYER_SEGMENTS(
    {8,   1, HSV_GREEN}
);

const rgblight_segment_t PROGMEM rgb_numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_GREEN}
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
    rgb_numlock_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;

//    debug_enable = true;
//    debug_matrix = true;
    // debug_keyboard=true;
    // debug_mouse=true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
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
    rgblight_set_layer_state(9, led_state.num_lock);
    return true;
}
#endif

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = { {
// Key Matrix to LED Index
  {      0,  1,  2 },
  {  3,  4,  5,  6 },
  {  7,  8,  9, 10 }, 
  { 11, 12, 13, 14 },
  { 15, 16, 17, 18 },
  { 19, 20, 21, 22 },
}, {
// LED Index to Physical Position
          {74, 0},  {149, 0}, {223, 0}, 
{0, 14}, {74, 14}, {149, 14}, {223, 14}, 
{0, 27}, {74, 27}, {149, 27}, {223, 27}, 
{0, 39}, {74, 39}, {149, 39}, {224, 39}, 
{0, 52}, {74, 52}, {149, 52}, {223, 52}, 
{0, 64}, {74, 64}, {149, 64}, {223, 64}
}, {
    4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4
} };

int layer_indicator[] =    {19, 15, 16, 17, 11, 12, 13, 7, 8, 9};

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max)
{
    int is_layer = get_highest_layer(layer_state | default_layer_state);
    if (is_layer >= 1 && is_layer <= 9)
    {
        rgb_matrix_set_color(layer_indicator[is_layer], 0,100, 0);
    }
}
#endif
