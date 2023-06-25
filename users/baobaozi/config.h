#pragma once

// If you don’t have a crazy amount of layers (9+), this helps save space
#define LAYER_STATE_8BIT

// disable the old style of macros, and no action function, see if it saves space
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#if !defined(NO_DEBUG) && !defined(DEBUG)
#    define NO_DEBUG
#endif // !NO_DEBUG

#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#    define NO_PRINT
#endif // !NO_PRINT

// no oneshots to save space
// #define NO_ACTION_ONESHOT
// remove any definitions of
// #undef ONESHOT_TAP_TOGGLE

// Holding and releasing a dual function key without pressing another key will result in nothing happening.
// With retro tapping enabled, releasing the key without pressing another will send the original keycode
// even if it is outside the tapping term.
// For instance, holding and releasing `LT(2, KC_SPACE)` without hitting another key will result in nothing happening.
// With this enabled, it will send `KC_SPACE` instead.

// I don’t like retro tapping because when you’re selecting multiple items with command in a mod-tap, when you let go,
// it will send the tap character, and deselect your stuff.
// #define RETRO_TAPPING
#ifdef RETRO_TAPPING
#    undef RETRO_TAPPING
#endif

// Might save some space
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// How long to hold an LT before it does the "held" rather than "tap" keY
#ifdef TAPPING_TERM
#    undef TAPPING_TERM
#endif
#define TAPPING_TERM 160
// Allow custom tapping term for just a few keys (if you reduce tapping term on mods, it’s nice imo, unless you have mod-taps)
#define TAPPING_TERM_PER_KEY

// If you're a fast typist and type an MT and then another key really quickly, instead of considering it a mod + second,
// consider it tap + second
// roll on, roll off within tapping term (⬇️ a, b, ⬆️ a, b) DON’T do mod
// As it's now the default, QMK errors if you still define it
// #define IGNORE_MOD_TAP_INTERRUPT
// #ifdef IGNORE_MOD_TAP_INTERRUPT
// #    undef IGNORE_MOD_TAP_INTERRUPT
// #endif
// #define IGNORE_MOD_TAP_INTERRUPT_PER_KEY

// if you do mod-tap plus key all within tapping term, consider it a mod
// with ignore mod tap interrupt, correctly (⬇️ a, b, ⬆️ b, a) or roll on, roll off (⬇️ a, b, ⬆️ a, b) DO mod
#define PERMISSIVE_HOLD
// or, don’t do it
// #ifdef PERMISSIVE_HOLD
// #    undef PERMISSIVE_HOLD
// #endif
#define PERMISSIVE_HOLD_PER_KEY

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_TIMEOUT 60000 // https://gist.github.com/aashreys/01cb34605a290a7cfb94a856bdabc94c
#    define RGBLIGHT_LAYERS
#    undef RGBLIGHT_EFFECT_TWINKLE // single colour pulse in and out, 1/10
#    undef RGBLIGHT_EFFECT_RAINBOW_MOOD // all same colour, slowwww fade to other colours, 3/10
#    undef RGBLIGHT_EFFECT_SNAKE // single colour rolling wave, 2/10
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL // different colours, fade to other colours, 10/10
#    undef RGBLIGHT_EFFECT_BREATHING // slowly pulses in a breathing fashion, 3/10
#    undef RGBLIGHT_EFFECT_KNIGHT // one colour that flashes back and forth, 0/10
#    undef RGBLIGHT_EFFECT_CHRISTMAS // alternating red and green, 0/10
#    undef RGBLIGHT_EFFECT_STATIC_GRADIENT // whole rainbow but doesn’t actually animate, 1/10
#    undef RGBLIGHT_EFFECT_RGB_TEST // harsh flash between different colours, 0/10
#    undef RGBLIGHT_EFFECT_ALTERNATING // single colour flashing in and out, 0/10
#    define RGBLIGHT_SLEEP
// #    define BACKLIGHT_CAPS_LOCK
#endif

// #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_EFFECT_TWINKLE // single colour pulse in and out, 1/10
// #define RGBLIGHT_EFFECT_RAINBOW_MOOD // all same colour, slowwww fade to other colours, 3/10
// #define RGBLIGHT_EFFECT_SNAKE // single colour rolling wave, 2/10
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL // different colours, fade to other colours, 10/10
// #define RGBLIGHT_EFFECT_BREATHING // slowly pulses in a breathing fashion, 3/10
// #define RGBLIGHT_EFFECT_KNIGHT // one colour that flashes back and forth, 0/10
// #define RGBLIGHT_EFFECT_CHRISTMAS // alternating red and green, 0/10
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT // whole rainbow but doesn’t actually animate, 1/10
// #define RGBLIGHT_EFFECT_RGB_TEST // harsh flash between different colours, 0/10
// #define RGBLIGHT_EFFECT_ALTERNATING // single colour flashing in and out, 0/10

/* Add combos */
// #define COMBO_COUNT 6
#define COMBO_VARIABLE_LEN
#define COMBO_TERM 30
#define COMBO_TERM_PER_COMBO
#define EXTRA_SHORT_COMBOS
#define COMBO_ONLY_FROM_LAYER 0 // only base layer combos exist

// i still don't really like home row mods lol
// however, bottom row mods are the bomb!
// #define BILATERAL_COMBINATIONS 170

// #define ARSTNEIO_ENABLE

// One shot settings
#define ONESHOT_TAP_TOGGLE 2
// #define ONESHOT_TIMEOUT 5000

// Mousekey settings
#if defined(MOUSEKEY_ENABLE)
    // https://github.com/deanbot/keymaps/blob/main/naked48/config.h
    // Set the mouse settings to a comfortable speed/accuracy trade-off,
    // assuming a screen refresh rate of 60 Htz or higher
    // The default is 50. This makes the mouse ~3 times faster and more accurate
#   undef MOUSEKEY_INTERVAL
#   define MOUSEKEY_INTERVAL 16
    // The default is 20. Since we made the mouse about 3 times faster with the previous setting,
    // give it more time to accelerate to max speed to retain precise control over short distances.
#   undef MOUSEKEY_TIME_TO_MAX
#   define MOUSEKEY_TIME_TO_MAX 40
    // The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#   undef MOUSEKEY_DELAY
#   define MOUSEKEY_DELAY 100
#   undef MOUSEKEY_MOVE_DELTA
#   define MOUSEKEY_MOVE_DELTA 25 // mine
// #   define MOUSEKEY_MOVE_DELTA 5 // spirited's is too slow
#   undef MOUSEKEY_MAX_SPEED
#   define MOUSEKEY_MAX_SPEED 5
    // It makes sense to use the same delay for the mousewheel
#   undef MOUSEKEY_WHEEL_DELAY
#   define MOUSEKEY_WHEEL_DELAY 100
    // The default is 100
#   undef MOUSEKEY_WHEEL_INTERVAL
#   define MOUSEKEY_WHEEL_INTERVAL 50
#   undef MOUSEKEY_WHEEL_MAX_SPEED
#   define MOUSEKEY_WHEEL_MAX_SPEED 6
    // The default is 40
#   undef MOUSEKEY_WHEEL_TIME_TO_MAX
#   define MOUSEKEY_WHEEL_TIME_TO_MAX 100
#endif

#define LEADER_TIMEOUT TAPPING_TERM

// Courtesy of filterpaper
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// Test out syn key
#define TEST_SYN
