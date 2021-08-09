/* Copyright 2020 Ibnu D. Aji
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
#ifdef CONSOLE_ENABLE
#include "print.h"
#endif

// enum for combos.
enum combos {
    // left hand combinations.
    R_U_PINKY_RING,
    R_U_RING_MIDDLE,
    R_U_RING_INDEX,
    R_U_MIDDLE_INDEX,
    R_U_MIDDLE_INNER_INDEX,
    R_U_INDEX_INNER_INDEX,
    R_L_PINKY_RING,
    R_L_RING_MIDDLE,
    R_L_RING_INDEX,
    R_L_MIDDLE_INDEX,
    R_L_INDEX_INNER_INDEX,

    // right hand combinations.
    L_U_PINKY_RING,
    L_U_RING_MIDDLE,
    L_U_RING_INDEX,
    L_U_MIDDLE_INDEX,
    L_U_MIDDLE_INNER_INDEX,
    L_U_INNER_INNER_INDEX,
    L_L_PINKY_RING,
    L_L_RING_MIDDLE,
    L_L_MIDDLE_INDEX,
    L_L_RING_INDEX,
    L_L_INDEX_INNER_INDEX,

    // both hands combinations.
    B_L_MIDDLE_MIDDLE,
};

enum {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

// thumb keys.
#define TRAISE   TG(_RAISE)
#define AL_ENT   ALT_T(KC_ENT)
#define SF_BSPC  SFT_T(KC_BSPC)

// home row mods.
#define CT_S    LCTL_T(KC_S)
#define CT_I    RCTL_T(KC_I)
#define CT_LEFT LCTL_T(KC_LEFT)
#define CT_SIX  RCTL_T(KC_6)

#define SH_R    LSFT_T(KC_R)
#define SH_O    RSFT_T(KC_O)
#define SH_HASH LSFT_T(KC_HASH)
#define SH_ZERO RSFT_T(KC_0)

#define AL_T    LALT_T(KC_T)
#define AL_A    RALT_T(KC_A)
#define AL_DOWN LALT_T(KC_DOWN)
#define AL_FIVE RALT_T(KC_5)

#define GU_D   RGUI_T(KC_D)
#define GU_F   LGUI_T(KC_F)
#define GU_DLR RGUI_T(KC_DLR)
#define GU_EQL LGUI_T(KC_EQL)

// layer toggle.
#define LW_E     LT(_LOWER, KC_E)
#define RS_SPC   LT(_RAISE, KC_SPC)

// idk, man. not used, i guess.
#define ADDDD    MO(_ADJUST)

// common shortcuts for windows and linux that i use.
#define NXTTAB LCTL(KC_PGDN)
#define PRVTAB LCTL(KC_PGUP)
#define UPTAB  LCTL(LSFT(KC_PGUP))
#define DNTAB  LCTL(LSFT(KC_PGDN))
#define NXTWIN LALT(KC_TAB)
#define PRVWIN LALT(LSFT(KC_TAB))
#define CALDL  LCTL(LALT(KC_DELT))
#define TSKMGR LCTL(LSFT(KC_ESC))
#define EXPLR  LGUI(KC_E)
#define LCKGUI LGUI(KC_L)
#define CONPST LSFT(KC_INS)
#define CLSGUI LALT(KC_F4)

// left hand combinations.
const uint16_t PROGMEM lu_p_r_combo[]     = {KC_Q, KC_V, COMBO_END};
const uint16_t PROGMEM lu_r_m_combo[]     = {KC_V, KC_C, COMBO_END};
const uint16_t PROGMEM lu_r_i_combo[]     = {KC_V, KC_P, COMBO_END};
const uint16_t PROGMEM lu_m_i_combo[]     = {KC_C, KC_P, COMBO_END};
const uint16_t PROGMEM lu_m_ii_combo[]    = {KC_C, KC_B, COMBO_END};
const uint16_t PROGMEM lu_i_ii_combo[]    = {KC_P, KC_B, COMBO_END};
const uint16_t PROGMEM ll_p_r_combo[]     = {KC_QUOT, KC_G, COMBO_END};
const uint16_t PROGMEM ll_r_m_combo[]     = {KC_G, KC_J, COMBO_END};
const uint16_t PROGMEM ll_r_i_combo[]     = {KC_G, KC_K, COMBO_END};
const uint16_t PROGMEM ll_m_i_combo[]     = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM ll_i_ii_combo[]    = {KC_K, KC_X, COMBO_END};

// right hand combinations.
const uint16_t PROGMEM ru_p_r_combo[]      = {KC_SLSH, KC_Y, COMBO_END};
const uint16_t PROGMEM ru_r_m_combo[]      = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM ru_r_i_combo[]      = {KC_Y, KC_L, COMBO_END};
const uint16_t PROGMEM ru_m_i_combo[]      = {KC_U, KC_L, COMBO_END};
const uint16_t PROGMEM ru_m_ii_combo[]     = {KC_U, KC_Z, COMBO_END};
const uint16_t PROGMEM ru_i_ii_combo[]     = {KC_L, KC_Z, COMBO_END};
const uint16_t PROGMEM rl_p_r_combo[]      = {KC_DOT, KC_COMM, COMBO_END};
const uint16_t PROGMEM rl_r_m_combo[]      = {KC_COMM, KC_W, COMBO_END};
const uint16_t PROGMEM rl_r_i_combo[]      = {KC_COMM, KC_M, COMBO_END};
const uint16_t PROGMEM rl_m_i_combo[]      = {KC_W, KC_M, COMBO_END};
const uint16_t PROGMEM rl_i_ii_combo[]     = {KC_M, KC_SCLN, COMBO_END};

// both hand combinations.
const uint16_t PROGMEM bl_m_m_combo[]      = {KC_J, KC_W, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    // left hand combinations.
    [R_U_PINKY_RING]          = COMBO(lu_p_r_combo,  KC_TAB),
    [R_U_RING_MIDDLE]         = COMBO(lu_r_m_combo,  KC_QUES),
    [R_U_RING_INDEX]          = COMBO(lu_r_i_combo,  PRVTAB),
    [R_U_MIDDLE_INDEX]        = COMBO(lu_m_i_combo,  KC_UNDS),
    [R_U_MIDDLE_INNER_INDEX]  = COMBO(lu_m_ii_combo, KC_ENT),
    [R_U_INDEX_INNER_INDEX]   = COMBO(lu_i_ii_combo, KC_PIPE),
    [R_L_PINKY_RING]          = COMBO(ll_p_r_combo,  KC_ENT),
    [R_L_RING_MIDDLE]         = COMBO(ll_r_m_combo,  LCTL(KC_W)),
    [R_L_RING_INDEX]          = COMBO(ll_r_i_combo,  KC_TAB),
    [R_L_MIDDLE_INDEX]        = COMBO(ll_m_i_combo,  KC_DELT),
    [R_L_INDEX_INNER_INDEX]   = COMBO(ll_i_ii_combo, KC_TILD),

    // right hand combinations.
    [L_U_PINKY_RING]          = COMBO(ru_p_r_combo,  KC_BSPC),
    [L_U_RING_MIDDLE]         = COMBO(ru_r_m_combo,  KC_SLSH),
    [L_U_RING_INDEX]          = COMBO(ru_r_i_combo,  NXTTAB),
    [L_U_MIDDLE_INDEX]        = COMBO(ru_m_i_combo,  KC_MINS),
    [L_U_MIDDLE_INNER_INDEX]  = COMBO(ru_m_ii_combo, KC_ENT),
    [L_U_INNER_INNER_INDEX]   = COMBO(ru_i_ii_combo, KC_BSLS),
    [L_L_PINKY_RING]          = COMBO(rl_p_r_combo,  KC_BSLS),
    [L_L_RING_MIDDLE]         = COMBO(rl_r_m_combo,  KC_APP),
    [L_L_RING_INDEX]          = COMBO(rl_r_i_combo,  LSFT(KC_TAB)),
    [L_L_MIDDLE_INDEX]        = COMBO(rl_m_i_combo,  KC_DELT),
    [L_L_INDEX_INNER_INDEX]   = COMBO(rl_i_ii_combo, KC_GRV),

    // both hand combinations.
    [B_L_MIDDLE_MIDDLE]       = COMBO(bl_m_m_combo,  KC_ENT),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_split_3x5_3(
    KC_Q,   KC_V,   KC_C,   KC_P,   KC_B,       KC_Z,   KC_L,   KC_U,   KC_Y,   KC_SLSH,
    SH_R,   CT_S,   AL_T,   KC_H,   GU_D,       GU_F,   KC_N,   AL_A,   CT_I,   SH_O,
    KC_QUOT,KC_G,   KC_J,   KC_K,   KC_X,       KC_SCLN,KC_M,   KC_W,   KC_COMM,KC_DOT,
                    KC_ESC, LW_E,   SF_BSPC,    AL_ENT, RS_SPC, TRAISE

),

[_RAISE] = LAYOUT_split_3x5_3(
    KC_EXLM,KC_AT,  KC_UP,  KC_LCBR,KC_RCBR,    KC_BSLS,KC_7,   KC_8,   KC_9,   KC_ASTR ,
    KC_HASH,CT_LEFT,AL_DOWN,KC_RGHT,KC_DLR,     GU_EQL, KC_4,   AL_FIVE,CT_SIX, SH_ZERO ,
    KC_LBRC,KC_RBRC,KC_LPRN,KC_RPRN,KC_AMPR,    KC_GRV, KC_1,   KC_2,   KC_3,   KC_PLUS ,
                    _______,ADDDD  ,SF_BSPC,    _______,RS_SPC, TRAISE
),
[_LOWER] = LAYOUT_split_3x5_3(
    KC_ESC, KC_QUES,KC_UNDS,KC_F1,  KC_F2,      KC_F3,  KC_F4,  KC_MINS,KC_SLSH,KC_BSPC ,
    KC_LSFT,KC_TAB, KC_PGUP,KC_F5,  KC_F6,      KC_F7,  KC_F8,  KC_HOME,KC_LALT,KC_ENT  ,
    KC_CLCK,KC_SLCK,KC_PGDN,KC_F9,  KC_F10,     KC_F11, KC_F12, KC_END, KC_INS, KC_SLSH ,
                    ADDDD  ,_______,_______,    RS_SPC, ADDDD,  TRAISE
),
[_ADJUST] = LAYOUT_split_3x5_3(
    _______,EXPLR,  KC_UP,  PRVTAB, PRVWIN,     NXTWIN, NXTTAB, _______,_______,LCKGUI,
    TSKMGR, KC_LEFT,KC_DOWN,KC_RGHT,UPTAB,      DNTAB,  KC_ENT, KC_LGUI,_______,CALDL,
    _______,CLSGUI, _______,CONPST, RESET,      _______,_______,_______,_______,_______,
                    ADDDD,  _______,_______,    _______,RS_SPC, TRAISE
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
  if (record->event.pressed) {
    uprintf("0x%04X,%u,%u,%u\n", keycode, record->event.key.row, record->event.key.col, get_highest_layer(layer_state));
  }
#endif
// #ifdef CONSOLE_ENABLE
//     uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
// #endif
  return true;
}
