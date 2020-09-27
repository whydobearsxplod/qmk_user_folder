
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "whydobearsxplod.h"

bool is_shift_lock_active = false; 

#define MATRIX_MASKED
const matrix_row_t matrix_mask[MATRIX_ROWS] =
{
  0b1111111111,
  0b1111111111,
  0b1111111111,
  0b1111111111,
};


// Macro Declarations
enum {
    LOCK_SHIFT = 0,
    // ..., the rest of your macros
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LOCK_SHIFT:
      if (record->event.pressed) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        }         
      } 
      break;

    case COPY:
      if (record->event.pressed) {
             SEND_STRING(SS_LCTL("c"));
        if (is_shift_lock_active) {
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        }
      } 
      break;
    case CUT:
      if (record->event.pressed) {
             SEND_STRING(SS_LCTL("x"));
         if (is_shift_lock_active) {
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        }
      } 
      break;
      
    case DOMATH:
        if (record->event.pressed) {
             SEND_STRING(SS_LALT("emsa")); 
        } else {
        }
        break;
	
  }
  return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_u33_wrapper(
KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,     KC_P, 
   LT(_NAV,KC_A),  KC_S,  KC_D,  KC_F,   KC_G,   KC_H,  KC_J,   KC_K,  KC_L, KC_QUOT, 
   MT(MOD_LSFT, KC_Z),   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMMA, KC_DOT,MT(MOD_LGUI,KC_SLSH), 
  KC_LCTL, LT(_NUM_SYM,KC_SPACE), KC_RALT
  ),

  [_NUM_SYM] = LAYOUT_u33_wrapper(
    __________________NUM_1____________________, 
    __________________NUM_2____________________, 
    __________________NUM_3____________________, KC_TRNS,
KC_TRNS, KC_TRNS,      KC_TRNS

  ),

  [_NAV] = LAYOUT_u33_wrapper(
___________________NAV1____________________, 
___________________NAV2____________________, 
KC_TRNS, CUT, COPY, LCTL(KC_V), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,
KC_TRNS, KC_TRNS,      RESET
  ),

};
