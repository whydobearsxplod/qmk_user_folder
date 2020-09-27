#pragma once
#include "quantum.h"
#include "wrappers.h"

extern keymap_config_t keymap_config;

enum layers {
  _BASE,
  _NUM_SYM,
  _RAISE,
  _MACRO,
  _NUMPAD,
  _NAV,
  _FKEY,
  _GAME,
  _NP,
  _ADJUST,
  _SHIFT_NAV
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
  DOMATH,
  CUT,
  COPY,
  COPYDOWN, 
  CUTWORD,
  COPYWORD,
  CUTLINE,
  COPYLINE,
  LOCK_SHIFT,
  LINEDOWN,
  MATHFRAC,
  MATHENVCENTER,
};




