/* Copyright 2021 Hanachi
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

enum custom_layers {
    _QWERTY,
    _GAME,
    _FN1,
    _FN2,
    _FN3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY]=LAYOUT(   //QWERTY
	KC_ESC	,	KC_1	,	KC_2	,	KC_3	,	KC_4	,	KC_5	,					KC_6	,	KC_7	,	KC_8	,	KC_9	,	KC_0	,	KC_MINS	,	KC_EQL	,	KC_GRV	,	KC_BSLS	,
	KC_TAB	,	KC_Q	,	KC_W	,	KC_E	,	KC_R	,	KC_T	,					KC_Y	,	KC_U	,	KC_I	,	KC_O	,	KC_P	,	KC_LBRC	,	KC_RBRC	,			KC_BSPC	,
	KC_LCTL	,	KC_A	,	KC_S	,	KC_D	,	KC_F	,	KC_G	,					KC_H	,	KC_J	,	KC_K	,	KC_L	,	KC_SCLN	,	KC_QUOT	,					KC_ENT	,
	KC_LSFT	,	KC_Z	,	KC_X	,	KC_C	,	KC_V	,	KC_B	,	KC_DEL	,	KC_LGUI	,	KC_N	,	KC_M	,	KC_COMM	,	KC_DOT	,	KC_SLSH	,							KC_RSFT	,
							LT(_FN1,KC_LEFT)	,	ALT_T(KC_RIGHT)	,	LT(_FN1, KC_SPC)	,	CTL_T(KC_F13)	,	LSFT_T(KC_ENT)	,	LT(_FN2, KC_BSPC)	,	ALT_T(KC_DOWN)	,	LT(_FN3, KC_UP)
),
[_GAME]=LAYOUT(    // GAME MODE
	KC_ESC	,	KC_1	,	KC_2	,	KC_3	,	KC_4	,	KC_5	,					KC_6	,	KC_7	,	KC_8	,	KC_9	,	KC_0	,	KC_MINS	,	KC_EQL	,	KC_GRV	,	KC_BSLS	,
	KC_TAB	,	KC_Q	,	KC_W	,	KC_E	,	KC_R	,	KC_T	,					KC_Y	,	KC_U	,	KC_I	,	KC_O	,	KC_P	,	KC_LBRC	,	KC_RBRC	,			KC_BSPC	,
	KC_LCTL	,	KC_A	,	KC_S	,	KC_D	,	KC_F	,	KC_G	,					KC_H	,	KC_J	,	KC_K	,	KC_L	,	KC_SCLN	,	KC_QUOT	,					KC_ENT	,
	KC_LSFT	,	KC_Z	,	KC_X	,	KC_C	,	KC_V	,	KC_B	,	KC_DEL	,	KC_LGUI	,	KC_N	,	KC_M	,	KC_COMM	,	KC_DOT	,	KC_SLSH	,							KC_RSFT	,
							LT(_FN1,KC_LEFT)	,	ALT_T(KC_RIGHT)	,	KC_SPC	,	KC_LCTL	,	KC_ENT	,	LT(_FN2, KC_BSPC)	,	ALT_T(KC_DOWN)	,	LT(_FN3, KC_UP)
),
[_FN1]=LAYOUT(    // FN1 (Num pad)
	_______	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,					KC_KP_SLASH	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	KC_MINS	,	KC_EQL	,	XXXXXXX	,	TG(_FN1)	,
	_______	,	KC_PGDN	,	KC_UP	,	KC_PGUP	,	XXXXXXX	,	XXXXXXX	,					KC_KP_ASTERISK	,	KC_P7	,	KC_P8	,	KC_P9	,	XXXXXXX	,	KC_LPRN	,	KC_RPRN	,			_______	,
	_______	,	KC_LEFT	,	KC_DOWN	,	KC_RIGHT	,	XXXXXXX	,	XXXXXXX	,					KC_KP_MINUS	,	KC_P4	,	KC_P5	,	KC_P6	,	KC_COMM	,	KC_QUOT	,					KC_KP_ENTER	,
	_______	,	KC_HOME	,	KC_DOWN	,	KC_END	,	C(LWIN(KC_LEFT))	,	C(LWIN(KC_RIGHT))	,	_______	,	KC_NLCK	,	KC_KP_PLUS	,	KC_P1	,	KC_P2	,	KC_P3	,	KC_KP_DOT	,							_______	,
							TO(_QWERTY)	,	_______	,	_______	,	_______	,	_______	,	_______	,	KC_P0	,	_______
),
[_FN2]=LAYOUT(    //FN2 (additional keys)
	_______	,	KC_F1	,	KC_F2	,	KC_F3	,	KC_F4	,	KC_F5	,					KC_F6	,	KC_F7	,	KC_F8	,	KC_F9	,	KC_F10	,	KC_F11	,	KC_F12	,	KC_INS	,	A(KC_PSCR)	,
	_______	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,					XXXXXXX	,	KC_PGDN	,	KC_UP	,	KC_PGUP	,	XXXXXXX	,	C(LWIN(KC_LEFT))	,	C(LWIN(KC_RIGHT))	,			KC_PSCR	,
	KC_CAPS	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,					XXXXXXX	,	KC_LEFT	,	KC_DOWN	,	KC_RIGHT	,	XXXXXXX	,	XXXXXXX	,					_______	,
	_______	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	_______	,	XXXXXXX	,	XXXXXXX	,	KC_HOME	,	KC_DOWN	,	KC_END	,	XXXXXXX	,							_______	,
							TO(_FN1)	,	_______	,	_______	,	_______	,	_______	,	_______	,	_______	,	_______
),
[_FN3]=LAYOUT(  //FN3 (System utilz)
	RESET	,	RGB_TOG	,	RGB_MOD	,	RGB_RMOD	,	XXXXXXX	,	XXXXXXX	,					XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,
	EEP_RST	,	XXXXXXX	,	RGB_VAD	,	RGB_VAI	,	KC_ASON	,	KC_ASOFF	,					XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,			XXXXXXX	,
	XXXXXXX	,	XXXXXXX	,	RGB_SAD	,	RGB_SAI	,	KC_ASUP	,	KC_ASDN	,					XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,					XXXXXXX	,
	XXXXXXX	,	XXXXXXX	,	RGB_HUD	,	RGB_HUI	,	KC_ASRP	,	XXXXXXX	,	DF(_QWERTY)	,	DF(_GAME)	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,	XXXXXXX	,							XXXXXXX	,
							_______	,	_______	,	_______	,	_______	,	_______	,	_______	,	_______	,	_______
)

};
int layer = _QWERTY;

/*
  MOUSE PURUPURU
*/
#define INTERVAL_SEC  (100)

void mouse_prupuru(void) {
    report_mouse_t mouse_report = {0};
    mouse_report.x =   1;
    host_mouse_send(&mouse_report);
    mouse_report.x =  -1 ;
    host_mouse_send(&mouse_report);
}
bool mouse_delta = true;
uint16_t last_timer_c;
int interval_sec = 0;

void matrix_scan_user() {
    if (mouse_delta) {
        if ( timer_elapsed(last_timer_c) > 1000) {
            interval_sec++;
            last_timer_c = timer_read();
        }
        if (interval_sec  > INTERVAL_SEC) {
            mouse_prupuru();
            interval_sec = 0;
        }
    }
}
/* end of mouse purupuru
*/

static bool lang_key_pressed = false;
static bool lang_mode = false;
static uint16_t lang_pressed_time = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
    case KC_LANG9:
        if (record->event.pressed)
        {
            lang_pressed_time = record->event.time;
            lang_key_pressed = true;
        }
        else
        {
            if (lang_key_pressed && (TIMER_DIFF_16(record->event.time, lang_pressed_time) <= TAPPING_TERM))
            {
                // TAPPING_TERM以下でリリースされたら単発キーとして処理
                tap_code(KC_SPC);
                lang_mode = false;
            }
            else if (lang_mode)
            {
                // IME ON状態ならモードを直接入力に
                tap_code(KC_F15); // 入力中の文字列がある場合は変換
                tap_code(KC_F16); // 変換中の文字列を確定
                tap_code(KC_F17); // IMEをOFF
                lang_mode = false;
            }
            lang_key_pressed = false;
        }
        return false;
        break;
    case KC_LANG8:
        if (record->event.pressed)
        {
            lang_pressed_time = record->event.time;
            lang_key_pressed = true;
        }
        else
        {
            if (lang_key_pressed && (TIMER_DIFF_16(record->event.time, lang_pressed_time) <= TAPPING_TERM))
            {
                // TAPPING_TERM以下でリリースされたら単発キーとして処理
                tap_code(KC_BSPC);
                lang_mode = false;
            }
            else if (lang_mode)
            {
                // IME ON状態ならモードを直接入力に
                tap_code(KC_F15); // 入力中の文字列がある場合は変換
                tap_code(KC_F16); // 変換中の文字列を確定
                tap_code(KC_F17); // IMEをOFF
                lang_mode = false;
            }
            lang_key_pressed = false;
        }
        return false;
        break;
    default:
        // LANGキーが押されている間に他のキーが押されたら
        if (lang_key_pressed) {
            tap_code(KC_F14); // IME ON
            lang_mode = true;
        }
        lang_key_pressed = false;
    }
    return true;
}


const rgblight_segment_t PROGMEM rgb_numpad_layer[] = RGBLIGHT_LAYER_SEGMENTS(
   {0, 64, RGB_BLACK},
   {32, 4, HSV_PURPLE},
   {50, 1, HSV_PURPLE},
   {37, 4, HSV_RED},
   {42, 3, HSV_RED},
   {42, 3, HSV_RED},
   {47, 3, HSV_RED}
);
const rgblight_segment_t PROGMEM rgb_caps_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 1, HSV_RED}
);
const rgblight_segment_t PROGMEM rgb_numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {29, 1, HSV_GREEN}
);
const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_numpad_layer,
    rgb_caps_layer,
    rgb_numlock_layer
);

layer_state_t layer_state_set_user(layer_state_t state) {
    layer = get_highest_layer(state);
    rgblight_set_layer_state(0, layer_state_cmp(state, _FN1));
    return state;
}

bool led_update_user(led_t led_state) {
    if (layer == _FN1) {
        rgblight_set_layer_state(2, host_keyboard_led_state().caps_lock);
    } else {
        rgblight_set_layer_state(2, false);
    }
    rgblight_set_layer_state(1, host_keyboard_led_state().caps_lock);
    return true;
}

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL);

#ifdef CONSOLE_ENABLE
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RGB_TEST);
    debug_enable = true;
    debug_matrix = true;
#endif
}

#ifdef VIRTSER_ENABLE
void virtser_recv(const uint8_t ch) {
    uprintf("recv  %u\n", ch);
    rgblight_set_layer_state(0, ch == 'a');
}
#endif
