#pragma once
#include "quantum.h"
#include "wrappers.h"

extern keymap_config_t keymap_config;

enum layers {
  _ARTSEY_BASE,
  _ARTSEY_NAV,
  _ARTSEY_BRAC,
  _ARTSEY_NUM,
  _ARTSEY_SYM, 
  _ARTSEY_MOU,
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
  ARTSEY_A,
  ARTSEY_R,
  ARTSEY_T,
  ARTSEY_S,
  ARTSEY_E,
  ARTSEY_Y,
  ARTSEY_I,
  ARTSEY_O,
  ARTSEY_1,
  ARTSEY_2,
  ARTSEY_3,
  ARTSEY_4, 
  ARTSEY_5,
  ARTSEY_6,
  LOCK_SHIFT,
};

#define ARTSEY_A LT(_ARTSEY_BRAC,KC_A)
#define ARTSEY_R KC_R
#define ARTSEY_T KC_T
#define ARTSEY_S LT(_ARTSEY_NUM,KC_S)
#define ARTSEY_E LT(_ARTSEY_SYM,KC_E)
#define ARTSEY_Y KC_Y
#define ARTSEY_I KC_I
#define ARTSEY_O LT(_ARTSEY_NAV,KC_O)
#define ARTSEY_1 KC_1
#define ARTSEY_2 KC_2
#define ARTSEY_3 KC_3
#define ARTSEY_4 KC_4
#define ARTSEY_5 KC_5
#define ARTSEY_6 KC_6


