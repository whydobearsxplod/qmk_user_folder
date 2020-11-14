#include QMK_KEYBOARD_H
#include "quantum.h"
#include "artsey.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ARTSEY_BASE] = LAYOUT_artsey_wrapper(
  _ARTS_,
  _EYIO_
  ),

  [_ARTSEY_NAV] = LAYOUT_artsey_wrapper(
  _NAV1_,
  _NAV2_
  ),

  [_ARTSEY_BRAC] = LAYOUT_artsey_wrapper(
  _BRAC1_,
  _BRAC2_
  ),

  [_ARTSEY_NUM] = LAYOUT_artsey_wrapper(
  _NUM1_,
  _NUM2_
  ),

  [_ARTSEY_SYM] = LAYOUT_artsey_wrapper(
  _SYM1_,
  _SYM2_
  ),

  [_ARTSEY_MOU] = LAYOUT_artsey_wrapper(
  _MOU1_,
  _MOU2_
  ),

};