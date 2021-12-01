// https://github.com/filterpaper/qmk_userspace/blob/main/word/caps_word.c
// Copyright 2022 @filterpaper
// SPDX-License-Identifier: GPL-2.0+
// Lean caps word code using caps lock

#include QMK_KEYBOARD_H

#include "baobaozi.h"

bool process_caps_word(uint16_t keycode, keyrecord_t *record) {
    // Return if caps lock is inactive
    if (!host_keyboard_led_state().caps_lock) {
        return true;
    }

#ifndef NO_ACTION_ONESHOT
    // Return if one-shots are active
    if (
        (QK_ONE_SHOT_MOD <= keycode && keycode <= QK_ONE_SHOT_MOD_MAX)
        || keycode == MA(F21)
        || keycode == MC(F21)
    ) {
        return true;
    }
#endif

#ifndef NO_ACTION_TAPPING
    if ((QK_MOD_TAP <= keycode && keycode <= QK_MOD_TAP_MAX)
#   ifndef NO_ACTION_LAYER
        || (QK_LAYER_TAP <= keycode && keycode <= QK_LAYER_MOD_MAX)
#   endif
    ) {
        if (!record->tap.count) {
            return true;
        }
        // Get base keycode from tap hold key
        keycode &= 0xff;
    }
#endif

    // Deactivate caps lock for unmatched keycodes
    if (
        (!(KC_A <= keycode && keycode <= KC_0)
            && keycode != KC_BSPC
            && keycode != KC_MINS
            && keycode != KC_UNDS
            && keycode != KC_QUOT)
        || (get_mods() & ~MOD_MASK_SHIFT)
    ) {
        tap_code(KC_CAPS);
    }
    return true;
}
