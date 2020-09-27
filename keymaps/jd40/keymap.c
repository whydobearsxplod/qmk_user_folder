
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "whydobearsxplod.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_wrapper(
    KC_ESC, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O, KC_P, KC_BSPC,	
   LT(_NAV,KC_TAB), KC_A,  KC_S,  KC_D,  KC_F,   KC_G,   KC_H,  KC_J,   KC_K,  KC_L, KC_QUOT,
    KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMMA, KC_DOT, KC_SLSH,
  KC_LCTL, KC_LGUI, KC_LALT, LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_SPACE), KC_RALT, KC_RCTRL
  ),

  [_NUM_SYM] = LAYOUT_wrapper(
    KC_TRNS,__________________NUM_1____________________,KC_TRNS,
    KC_TRNS,__________________NUM_2____________________,
    KC_TRNS,__________________NUM_3____________________,KC_TRNS,
   KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS
  ),

  [_NAV] = LAYOUT_wrapper(
KC_TRNS,___________________NAV1____________________,KC_TRNS,
KC_TRNS,___________________NAV2____________________,
KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,
KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS
  ),

};
