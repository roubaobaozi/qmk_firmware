// Copyright 2021 @filterpaper
// SPDX-License-Identifier: GPL-2.0+

// From: https://github.com/filterpaper/qmk_userspace/blob/main/combos.inc

// layer toggles
COMB(tgnav, TGNAV,                              LTF(SCLN), KC_O,   MC(SLSH))
// COMB(qwer,  TGQWER,                             LTN(Q),    LTS(W), KC_E,    KC_R)
COMB(qwer,  TGQWER,                             LTN(Q),    KC_W,   KC_E,    KC_R)
#if defined(MOUSEKEY_ENABLE)
// COMB(cur,   TGCUR,                              LTS(W),    KC_F,   KC_P)
COMB(cur,   TGCUR,                              KC_W,      KC_F,   KC_P)
#endif

// no bilat
COMB(tab,   KC_TAB,                             KC_M,      KC_COMM)
COMB(grv,   KC_GRV,                             KC_C,      KC_V)
COMB(ent,   KC_ENT,                             KC_COMM,   KC_DOT)
COMB(esc,   KC_ESC,                             MC(SLSH),  KC_M)
COMB(caps,  KC_CAPS,                            KC_V,      KC_M)
ACTN(clr,   clear_mods(); clear_oneshot_mods(), KC_C,      KC_COMM)
// end no bilat
// all
COMB(bspc,  KC_BSPC,                            KC_U,      KC_Y)

// send_string combo example
// SUBS(vi_quit,  ":q!",  KC_Q, KC_W)
