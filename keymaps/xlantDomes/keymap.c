
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "whydobearsxplod.h"


#define MATRIX_MASKED
const matrix_row_t matrix_mask[MATRIX_ROWS] =
{
//  1098765432109876543210987654321

  0b00000000011101111111111,
  0b00000000011101111111111,
  0b00000000011101111111111,
  0b00000000011101111111111,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_xlant_wrapper(
KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,     KC_P, KC_NO, KC_7,KC_8,KC_9,
   LT(_NAV,KC_A),  KC_S,  KC_D,  KC_F,   KC_G,   KC_H,  KC_J,   KC_K,  KC_L, KC_QUOT, KC_NO,KC_4,KC_5,KC_6,
   MT(MOD_LSFT, KC_Z),   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMMA, KC_DOT,KC_SLSH, KC_NO,KC_1,KC_2,KC_3,
  KC_LCTL, KC_LALT, LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_SPACE), KC_LGUI, KC_SLSH, KC_NO,  KC_0, KC_DOT, KC_ENT
  ),

  [_NUM_SYM] = LAYOUT_xlant_wrapper(
    __________________NUM_1____________________, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    __________________NUM_2____________________, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    __________________NUM_3____________________, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS,      KC_TRNS,        KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,      KC_TRNS,        KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,      KC_TRNS,        KC_TRNS

  ),

  [_NAV] = LAYOUT_xlant_wrapper(
___________________NAV1____________________, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
___________________NAV2____________________, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS,      KC_TRNS,        KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,      KC_TRNS,        KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,      RESET,        RESET
  ),

};
