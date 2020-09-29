
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "whydobearsxplod.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_omega_wrapper(
    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,     KC_P,
   LT(_NAV,KC_A),  KC_S,  KC_D,  KC_F,   KC_G,   KC_H,  KC_J,   KC_K,  KC_L, KC_QUOT,
    MT(MOD_LSFT, KC_Z),  MT(MOD_LCTL,KC_X),   MT(MOD_LALT,KC_C),   LT(_NUM_SYM,KC_V),   LT(_NUM_SYM,KC_B),   LT(_NUM_SYM,KC_N),   MT(MOD_LGUI,KC_M), MT(MOD_RALT,KC_COMMA), MT(MOD_RCTL,KC_DOT), MT(MOD_RSFT,KC_SLSH)
  ),

  [_NUM_SYM] = LAYOUT_omega_wrapper(
    __________________NUM_1____________________,
    __________________NUM_2____________________,
    __________________NUM_3____________________, KC_TRNS
  ),

  [_NAV] = LAYOUT_omega_wrapper(
___________________NAV1____________________,
___________________NAV2____________________,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

};
