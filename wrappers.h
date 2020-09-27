#pragma once
#include "whydobearsxplod.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// clang-format off
#define LAYOUT_jd40_wrapper(...)                  LAYOUT_kc(__VA_ARGS__)
#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_omega_wrapper(...)                  LAYOUT_s_30(__VA_ARGS__)
#define LAYOUT_gnapkin_wrapper(...)                  LAYOUT_gnapkin(__VA_ARGS__)
#define LAYOUT_xlant_wrapper(...)                  LAYOUT_xlant(__VA_ARGS__)
#define LAYOUT_u33_wrapper(...)                  LAYOUT_33_big_space(__VA_ARGS__)
#define LAYOUT_gherkin_wrapper(...)                  LAYOUT_ortho_3x10(__VA_ARGS__)

/* Num/Symbol Layer */
#define __________________NUM_1____________________       KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0
#define __________________NUM_2____________________       KC_TRNS, DYN_REC_START1, DYN_MACRO_PLAY1, KC_F, KC_G, KC_SCLN, KC_MINS, KC_EQL, KC_QUOT, KC_NO
#define __________________NUM_3____________________       KC_TRNS, DYN_REC_START2, DYN_MACRO_PLAY2, DYN_REC_STOP, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC

/* F-key layer */
#define ___________________FKEY1___________________       KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10

/* Nav */
#define ___________________NAV1____________________       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP
#define ___________________NAV2____________________       KC_TRNS, KC_TRNS, KC_BSPC, KC_DEL, LOCK_SHIFT, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN


/* No */
#define ___________________NO______________________       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

#define ___________________TRNS____________________       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 

