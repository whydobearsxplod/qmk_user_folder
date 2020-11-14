#pragma once
#include "artsey.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// clang-format off
#define LAYOUT_artsey_wrapper(...)                  LAYOUT(__VA_ARGS__)

/* ARTSEYIO */
#define _ARTS_       ARTSEY_A, ARTSEY_R, ARTSEY_T, ARTSEY_S
#define _EYIO_       ARTSEY_E, ARTSEY_Y, ARTSEY_I, ARTSEY_O
#define _NUM1_       ARTSEY_1, ARTSEY_2, ARTSEY_3, KC_NO
#define _NUM2_       ARTSEY_4, ARTSEY_5, ARTSEY_6, KC_NO
#define _SYM1_       KC_NO,KC_BSLS,KC_SCOLON,KC_GRAVE
#define _SYM2_       KC_NO,KC_MINUS,KC_EQUAL,KC_NO
#define _MOU1_       KC_MS_BTN1,KC_MS_UP,KC_MS_BTN2,KC_PGUP
#define _MOU2_       KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_PGDN
#define _BRAC1_      KC_NO,KC_LPRN,KC_RPRN,KC_LCBR
#define _BRAC2_      KC_NO,KC_LBRACKET,KC_RBRACKET,KC_RCBR
#define _NAV1_       KC_HOME,KC_UP,KC_END,KC_NO
#define _NAV2_       KC_LEFT,KC_DOWN,KC_RIGHT,KC_NO