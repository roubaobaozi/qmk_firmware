#pragma once
#include "baobaozi.h"

typedef struct {
    bool is_press_action;
    int state;
} tap;

// Define a type for as many tap dance states as you need
enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD = 2,
    DOUBLE_TAP = 3,
    DOUBLE_HOLD = 4,
    TRIPLE_TAP = 5,
    TRIPLE_HOLD = 6,
    // QUADRUPLE_HOLD = 7,
    // QUADRUPLE_TAP = 8,
};

// Tap dance config shared between my keyboards
enum tap_dance_declarations {
    // Tap dances
    // SRST = 0, // Our custom tap dance key; add any other tap dance keys to this enum
    // SEEP,
    // SQUO,
    // DQUO,
    // ENEM,
    // RFSH,
    // CPST = 0,
    // XPST,
    // CORX,
    // LYRS = 0,
    // F212,
    // BORP,
    // FORN,
    // SEND,
    // SEQU,
    // SEEX,
    // APPR,
    // BRCO,
    // BRCC,
    // GUISFT,
    // AAPO,
};

// Do I actually need this here?
void safe_reset(qk_tap_dance_state_t*, void*);
void safe_eep_rst(qk_tap_dance_state_t*, void*);
// void ql_finished_turn_on_layers(qk_tap_dance_state_t*, void*);
// void ql_reset_turn_off_layers(qk_tap_dance_state_t*, void*);
// void ql_guisft_on(qk_tap_dance_state_t*, void*);
// void ql_guisft_off(qk_tap_dance_state_t*, void*);
// void sentence_end_tap(qk_tap_dance_state_t*, void*);
// void sentence_end_fin(qk_tap_dance_state_t*, void*);
// void alt_apo(qk_tap_dance_state_t*, void*);
// void alt_apo_finish(qk_tap_dance_state_t*, void*);
void tap_dance_process_keycode(uint16_t);
