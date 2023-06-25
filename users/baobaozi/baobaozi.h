#pragma once
#include QMK_KEYBOARD_H

#include "version.h"
#include "eeprom.h"
#include "quantum.h"
#include "layout_abbrs.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum userspace_layers {
    // KC_MAKE = SAFE_RANGE,
    // NEW_SAFE_RANGE,  // use "NEW_SAFE_RANGE" for keymap specific codes
    _COLEMAK = 0,
    _QWERTY,
    // _XIN,
    _NAV,
#if defined(TEST_SYN)
    _SYN,
#else
    _SYM,
    _NUM,
#endif
    _CUR,
    _FNC,
    _KB,
};

#if defined(TAP_DANCE_ENABLE)
#    include "tap_dances.h"
#endif  // TAP_DANCE_ENABLE

// #if defined(COMBO_ENABLE)
// #    include "combos.c"
// #endif

#if defined(UNICODEMAP_ENABLE) || defined(UNICODE_ENABLE)
#    include "unicode.h"
#endif

// Init macro keycodes, define what they do in <name>.c
enum custom_keys {
// enum custom_keycodes {
    MJSPL = SAFE_RANGE,
    MURLS,
    MFATA,
    MFNXT,
    // MURL,
    // MRPTR,
};

#ifdef LEADER_ENABLE
LEADER_EXTERNS();
#endif
