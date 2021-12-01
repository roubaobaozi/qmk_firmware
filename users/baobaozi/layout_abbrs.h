#pragma once

#include "quantum.h"
#include "baobaozi.h"

// Shortcuts to make keymap more readable
// Layer change abbrs
#define TGQWER TG(_QWERTY)
#define TGCLMK TG(_COLEMAK)
#define TGNAV TG(_NAV)
#define TGCUR TG(_CUR)
// #define TGXIN TG(_XIN)
// #define LMNAV MO(_NAV)

// Layer tap abbrs
#define LTN(kc) LT(_NAV, KC_##kc)
#define LTS(kc) LT(_SYM, KC_##kc)
#if defined(BILATERAL_COMBINATIONS2)
#define LT0(kc) LT(_NSY, KC_##kc)
#else
#define LT0(kc) LT(_NUM, KC_##kc)
#endif
#define LTK(kc) LT(_KB, KC_##kc)
#define LTC(kc) LT(_CUR, KC_##kc)
#define LTE(kb) LT(_EMO, KC_##kc)

// Mod abbrs
#define AA(kc) A(KC_##kc)
#define AC(kc) C(KC_##kc)
#define AG(kc) G(KC_##kc)
#define AS(kc) S(KC_##kc)
#define AAG(kc) A(G(KC_##kc))
#define AAS(kc) A(S(KC_##kc))
#define AAC(kc) A(C(KC_##kc))
#define ACG(kc) C(G(KC_##kc))
#define ASG(kc) S(G(KC_##kc))
#define ALL(kc) C(S(G(KC_##kc)))

// Mod tap abbrs
#define MG(kc) LGUI_T(KC_##kc)
#define MA(kc) LALT_T(KC_##kc)
#define MC(kc) LCTL_T(KC_##kc)
#define MS(kc) LSFT_T(KC_##kc)

// One shot abbrs
#define OS(mod) OSM(MOD_##mod)

// #if (!defined(LAYOUT) && defined(KEYMAP))
// #    define LAYOUT KEYMAP
// #endif

// Thumb mod keys
// #ifdef ARSTNEIO_ENABLE
// #    define __T_L1___ TD(GUISFT)
// #else
// #    define __T_L1___ MG(QUOT)
// #endif
// Just leave ARSTNEIO with my own thumb key lol, theirs is shit
#if defined(BILATERAL_COMBINATIONS2)
#define __T_L1___ LTN(QUOT)
#define __T_L2___ LT0(MINS)
// Right thumbs
#define __T_R1___ MG(SPC)
#define __T_R2___ OS(LSFT)
#else
#define __T_L1___ MG(QUOT)
#define __T_L2___ MA(MINS)
// Right thumbs
#define __T_R1___ MG(SPC)
#define __T_R2___ MC(F21)
#endif

// left thumb space?
// #define __T_L1___ MG(SPC)
// #define __T_L2___ MA(F21) // one shot shift on tap + alt on hold
#define __T_L3___ MC(GRV) // MC(F22) = key repeater on tap + ctrl on hold
// If there's an extra left thumb key:
#define __T_L4___ LTK(CAPS)

// left thumb space?
// #define __T_R1___ MG(QUOT)
// #define __T_R2___ MC(MINS)
#define __T_R3___ LTK(ESC)
// If there's an extra right thumb key, I prefer it between 2 and 3:
#define __T_R2B__ MA(TAB)

// Row abbrs
#define _________________ROW_5_NOTHING___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
#define _________________ROW_5_TRNSPRNT__________________ _______  ,_______  ,_______  ,_______  ,_______
#define _________________ROW_NUMBERS_L___________________ KC_1     ,KC_2     ,KC_3     ,KC_4     ,KC_5
#define _________________ROW_NUMBERS_R___________________ KC_6     ,KC_7     ,KC_8     ,KC_9     ,KC_0
// Colemak
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_COLMK_L_________________ LTN(Q)   ,LTS(W)   ,KC_F     ,KC_P     ,KC_G
// #if defined(BILATERAL_COMBINATIONS)                      // ──────────────── HOME ROW MODS ────────────────
// #define _________________ROW_MID_COLMK_L_________________ MC(A)    ,MA(R)    ,MG(S)    ,MS(T)    ,KC_D
// #else                                                    // ──────────────── HOME ROW MODS ────────────────
#define _________________ROW_MID_COLMK_L_________________ KC_A     ,KC_R     ,KC_S     ,KC_T     ,KC_D
// #endif
#if defined(BILATERAL_COMBINATIONS2)                      // ──────────────── BOTT ROW MODS ────────────────
#define _________________ROW_BOT_COLMK_L_________________ KC_Z     ,MC(X)    ,MA(C)    ,MG(V)    ,KC_B
#else                                                    // ──────────────── BOTT ROW MODS ────────────────
#define _________________ROW_BOT_COLMK_L_________________ MS(Z)    ,LT0(X)   ,KC_C     ,KC_V     ,KC_B
#endif
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘

// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_COLMK_R_________________ KC_J     ,KC_L     ,KC_U     ,KC_Y     ,KC_SCLN
// #if defined(BILATERAL_COMBINATIONS)                      // ──────────────── HOME ROW MODS ────────────────
// #define _________________ROW_MID_COLMK_R_________________ KC_H     ,MS(N)    ,MG(E)    ,MA(I)    ,MC(O)
// #else                                                    // ──────────────── HOME ROW MODS ────────────────
#define _________________ROW_MID_COLMK_R_________________ KC_H     ,KC_N     ,KC_E     ,KC_I     ,KC_O
// #endif
#if defined(BILATERAL_COMBINATIONS2)                      // ──────────────── BOTT ROW MODS ────────────────
#define _________________ROW_BOT_COLMK_R_________________ KC_K     ,MS(M)    ,MG(COMM) ,MA(DOT)  ,MC(SLSH)
#else                                                    // ──────────────── BOTT ROW MODS ────────────────
#define _________________ROW_BOT_COLMK_R_________________ KC_K     ,KC_M     ,KC_COMM  ,KC_DOT   ,MS(SLSH)
#endif
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// QWERTY (is pretty shit and i forgot how to use it so i will probably delete it later)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── E ───┬─── R ───┬─── T ───┐
#define _________________ROW_TOP_QWERT_L_________________ LTN(Q)   ,LTS(W)   ,KC_E     ,KC_R     ,KC_T
#define _________________ROW_MID_QWERT_L_________________ KC_A     ,KC_S     ,KC_D     ,KC_F     ,KC_G
#define _________________ROW_BOT_QWERT_L_________________ MS(Z)    ,LT0(X)   ,KC_C     ,KC_V     ,KC_B
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── Y ───┬─── U ───┬─── I ───┬─── O ───┬─── P ───┐
#define _________________ROW_TOP_QWERT_R_________________ KC_Y     ,KC_U     ,KC_I     ,KC_O     ,KC_P
#define _________________ROW_MID_QWERT_R_________________ KC_H     ,KC_J     ,KC_K     ,KC_L     ,KC_SCLN
#define _________________ROW_BOT_QWERT_R_________________ KC_N     ,KC_M     ,KC_COMM  ,KC_DOT   ,MS(SLSH)
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// XIN
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── E ───┬─── R ───┬─── T ───┐
#define _________________ROW_TOP_XIN_L___________________ LTN(J)   ,LTS(L)   ,KC_O     ,KC_U     ,KC_SLSH
#define _________________ROW_MID_XIN_L___________________ KC_Y     ,KC_H     ,KC_E     ,KC_I     ,KC_COMM
#define _________________ROW_BOT_XIN_L___________________ MS(Z)    ,LT0(Q)   ,KC_MINS  ,KC_DOT   ,KC_SCLN
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── Y ───┬─── U ───┬─── I ───┬─── O ───┬─── P ───┐
#define _________________ROW_TOP_XIN_R___________________ KC_V     ,KC_G     ,KC_F     ,KC_P     ,KC_W
#define _________________ROW_MID_XIN_R___________________ KC_D     ,KC_T     ,KC_S     ,KC_N     ,KC_R
#define _________________ROW_BOT_XIN_R___________________ KC_K     ,KC_M     ,KC_C     ,KC_B     ,MS(X)
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// NAV (all media and navigation related stuff)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_NAV_L___________________ TGNAV    ,OS(LSFT) ,KC_VOLU  ,AG(R)    ,KC_CAPS
#define _________________ROW_MID_NAV_L___________________ _______  ,KC_MPRV  ,KC_VOLD  ,KC_MPLY  ,KC_MNXT
#define _________________ROW_BOT_NAV_L___________________ OS(LSFT) ,ASG(BSPC),ACG(Q)   ,KC_S     ,ASG(M)
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_NAV_R___________________ KC_F     ,AA(LEFT) ,KC_PGUP  ,KC_PGDN  ,AA(RGHT)
#define _________________ROW_MID_NAV_R___________________ KC_BSPC  ,KC_LEFT  ,KC_UP    ,KC_DOWN  ,KC_RGHT
#define _________________ROW_BOT_NAV_R___________________ ASG(K)   ,AG(LEFT) ,AG(UP)   ,AG(DOWN) ,AG(RGHT)
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// SYM (my most commonly required coding symbols)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_SYM_L___________________ XXXXXXX  ,_______  ,OS(LSFT) ,AA(RBRC) ,AA(LBRC)
#define _________________ROW_MID_SYM_L___________________ XXXXXXX  ,XXXXXXX  ,KC_PPLS  ,MURLS    ,AG(K)
#define _________________ROW_BOT_SYM_L___________________ OS(LSFT) ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_SYM_R___________________ KC_BSLS  ,KC_RBRC  ,KC_RPRN  ,AA(MINS) ,KC_SCLN
#define _________________ROW_MID_SYM_R___________________ KC_BSPC  ,KC_LPRN  ,KC_LBRC  ,KC_MINS  ,KC_EQL
// #define _________________ROW_TOP_SYM_R___________________ KC_BSLS  ,KC_GRV   ,KC_LBRC  ,AA(MINS) ,KC_SCLN
// #define _________________ROW_MID_SYM_R___________________ KC_BSPC  ,KC_LPRN  ,KC_LCBR  ,KC_MINS  ,KC_EQL
#define _________________ROW_BOT_SYM_R___________________ MJSPL    ,KC_EXLM  ,KC_LT    ,KC_GT    ,KC_SLSH
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// NUM (numpad layer, i kept them as regular numrow keys instead of numpad keys, so i can get the other symbols i use less often)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_NUM_L___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,KC_LBRC  ,KC_RBRC
#define _________________ROW_MID_NUM_L___________________ XXXXXXX  ,XXXXXXX  ,KC_EQL   ,KC_SLSH  ,KC_COMM
#define _________________ROW_BOT_NUM_L___________________ KC_PENT  ,_______  ,OS(LSFT) ,KC_LT    ,KC_GT     // ALL(NO) where KC_PENT is, for mod masking numpad as functionkeypad
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_NUM_R___________________ KC_PMNS  ,KC_7     ,KC_8     ,KC_9     ,KC_PPLS
#define _________________ROW_MID_NUM_R___________________ KC_BSPC  ,KC_4     ,KC_5     ,KC_6     ,KC_0
#define _________________ROW_BOT_NUM_R___________________ KC_PAST  ,KC_1     ,KC_2     ,KC_3     ,KC_DOT
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// [WIP] NSY (numbers and symbols together accessed via thumb key)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_NSY_L___________________ KC_EXLM  ,KC_MINS  ,KC_PPLS  ,KC_EQL   ,AG(K)
#define _________________ROW_MID_NSY_L___________________ KC_1     ,MC(2)    ,MA(3)    ,MG(4)    ,KC_5
#define _________________ROW_BOT_NSY_L___________________ XXXXXXX  ,AA(MINS) ,KC_BSLS  ,KC_ASTR  ,XXXXXXX
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_NSY_R___________________ KC_GT    ,KC_LBRC  ,KC_LCBR  ,KC_LPRN  ,KC_SCLN
#define _________________ROW_MID_NSY_R___________________ KC_6     ,MG(7)    ,MA(8)    ,MC(9)    ,KC_0
#define _________________ROW_BOT_NSY_R___________________ MJSPL    ,KC_LT    ,KC_COMM  ,KC_DOT   ,KC_SLSH
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// CUR (mouse layer)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_CUR_L___________________ TGCUR    ,KC_ACL2  ,KC_ACL1  ,KC_ACL0  ,XXXXXXX
#define _________________ROW_MID_CUR_L___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
#define _________________ROW_BOT_CUR_L___________________ OS(LSFT) ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_CUR_R___________________ KC_PGUP  ,KC_BTN1  ,KC_PGUP  ,KC_PGDN  ,KC_BTN2
#define _________________ROW_MID_CUR_R___________________ KC_BSPC  ,KC_MS_L  ,KC_MS_U  ,KC_MS_D  ,KC_MS_R
#define _________________ROW_BOT_CUR_R___________________ KC_PGDN  ,KC_WH_R  ,KC_WH_D  ,KC_WH_U  ,KC_WH_L // reversed Up/Down because of Apple’s Natural style scrolling
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// KB (keyboard actions and misc)
#define _________________ROW_NUM_KB_L____________________ KC_F1    ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F5
#define _________________ROW_NUM_KB_R____________________ KC_F6    ,KC_F7    ,KC_F8    ,KC_F9    ,KC_F10
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_KB_L____________________ EEP_RST  ,RGB_MOD  ,RGB_HUI  ,RGB_SAI  ,RGB_VAI
#define _________________ROW_MID_KB_L____________________ RGB_M_SW ,RGB_TOG  ,RGB_HUD  ,RGB_SAD  ,RGB_VAD
#define _________________ROW_BOT_KB_L____________________ ASG(3)   ,ASG(4)   ,ALL(3)   ,ALL(4)   ,DEBUG
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐ // 140 bytes for a layer dedicated to f-row sucks
#define _________________ROW_TOP_KB_R____________________ KC_F1    ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F5
#define _________________ROW_MID_KB_R____________________ KC_F11   ,KC_F12   ,ASG(Y)   ,ASG(SPC) ,KC_F6
#define _________________ROW_BOT_KB_R____________________ RGB_M_SW ,AG(F2)   ,KC_PAUS  ,KC_SLCK  ,RESET
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// // EMO (emoji layer)
// // LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
// #define _________________ROW_TOP_EMO_L___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
// #define _________________ROW_MID_EMO_L___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
// #define _________________ROW_BOT_EMO_L___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
// //                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// // RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
// #define _________________ROW_TOP_EMO_R___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
// #define _________________ROW_MID_EMO_R___________________ KC_BSPC  ,X(PERTH) ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
// #define _________________ROW_BOT_EMO_R___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
// //                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
