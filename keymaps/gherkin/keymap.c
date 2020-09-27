
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "tominabox1.h"



#define MATRIX_MASKED
const matrix_row_t matrix_mask[MATRIX_ROWS] =
{
  0b111111,
  0b111111,
  0b111111,
  0b111111,
  0b111111,
};





const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_gherkin_wrapper(
KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,     KC_P, 
   LT(_NAV,KC_A),  KC_S,  KC_D,  KC_F,   KC_G,   KC_H,  KC_J,   KC_K,  KC_L, KC_QUOT, 
   MT(MOD_LSFT, KC_Z),   MT(MOD_LCTL,KC_X),   MT(MOD_LALT,KC_C),   KC_V,   KC_B,   LT(_NUM_SYM,KC_N),   KC_M, KC_COMMA, KC_DOT,MT(MOD_LGUI,KC_SLSH)
  ),

  [_NUM_SYM] = LAYOUT_gherkin_wrapper(
    __________________NUM_1____________________, 
    __________________NUM_2____________________, 
    __________________NUM_3____________________, KC_TRNS

  ),

  [_NAV] = LAYOUT_gherkin_wrapper(
___________________NAV1____________________, 
___________________NAV2____________________, 
KC_TRNS, CUT, COPY, LCTL(KC_V), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,RESET
  ),

};
