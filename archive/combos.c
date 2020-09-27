
// Combos
enum combo_events {
  COMBO_TAB, 
  COMBO_TAB2,
  COMBO_ESC,
  COMBO_BSPC,
  COMBO_BSPC3,
  COMBO_DEL,
  COMBO_BSPC2,
  COMBO_ENT,
  COMBO_ENT2,
  COMBO_BSLS,
  COMBO_SLSH,
  COMBO_GRV,
  COMBO_SPC1,
  COMBO_SPC2,
  COMBO_GUI,
  COMBO_LOCKNAV,
  COMBO_LOCKNAV2,
  COMBO_DOMATH,
  COMBO_F1,
  COMBO_F2,
  COMBO_F3,
  COMBO_F4,
  COMBO_F5,
  COMBO_F6,
  COMBO_F7,
  COMBO_F8,
  COMBO_F9,
  COMBO_F10,
  COMBO_F11,
  COMBO_F12,
  COMBO_CUTWORD,
  COMBO_CUTWORD2,
  COMBO_COPYWORD,
  COMBO_COPYWORD2,
  COMBO_CUTLINE,
  COMBO_CUTLINE2,
  COMBO_COPYLINE,
  COMBO_COPYLINE2,
  COMBO_LINEDOWN,
  COMBO_MATHFRAC,
  COMBO_MATHENVCENTER,    
  COMBO_COPYDOWN,    
};

const uint16_t PROGMEM combo_tab[] = {LT(_NAV,KC_A), KC_S, COMBO_END};
const uint16_t PROGMEM combo_tab2[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_bspc2[] = {KC_D, KC_F, COMBO_END}; 
const uint16_t PROGMEM combo_bspc3[] = {KC_END, KC_PGUP, COMBO_END};
const uint16_t PROGMEM combo_ent[] = {KC_L, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_ent2[] = {KC_RIGHT, KC_PGDN, COMBO_END};
const uint16_t PROGMEM combo_bsls[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM combo_slsh[] = {KC_COMMA, MT(MOD_RSFT,KC_DOT), COMBO_END};
const uint16_t PROGMEM combo_grv[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_spc1[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_spc2[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo_gui[] = {KC_LCTRL, KC_RALT, COMBO_END};
const uint16_t PROGMEM combo_f1[] = {KC_F, KC_1, COMBO_END};
const uint16_t PROGMEM combo_f2[] = {KC_F, KC_2, COMBO_END};
const uint16_t PROGMEM combo_f3[] = {KC_F, KC_3, COMBO_END};
const uint16_t PROGMEM combo_f4[] = {KC_F, KC_4, COMBO_END};
const uint16_t PROGMEM combo_f5[] = {KC_F, KC_5, COMBO_END};
const uint16_t PROGMEM combo_f6[] = {KC_F, KC_6, COMBO_END};
const uint16_t PROGMEM combo_f7[] = {KC_F, KC_7, COMBO_END};
const uint16_t PROGMEM combo_f8[] = {KC_F, KC_8, COMBO_END};
const uint16_t PROGMEM combo_f9[] = {KC_F, KC_9, COMBO_END};
const uint16_t PROGMEM combo_f10[] = {KC_F, KC_0, COMBO_END};
const uint16_t PROGMEM combo_f11[] = {KC_G, KC_1, COMBO_END};
const uint16_t PROGMEM combo_f12[] = {KC_G, KC_2, COMBO_END};
const uint16_t PROGMEM combo_locknav[] = {KC_K, KC_D, COMBO_END};
const uint16_t PROGMEM combo_locknav2[] = {KC_BSPC, KC_DOWN, COMBO_END};
const uint16_t PROGMEM combo_domath[] = {KC_E, KC_M, COMBO_END};
const uint16_t PROGMEM combo_cutword[] = {KC_X, KC_W, COMBO_END};
const uint16_t PROGMEM combo_cutword2[] = {MT(MOD_LCTL,KC_C), KC_W, COMBO_END};
const uint16_t PROGMEM combo_copyword[] = {KC_C, KC_W, COMBO_END};
const uint16_t PROGMEM combo_copyword2[] = {MT(MOD_LALT,KC_C), KC_W, COMBO_END};
const uint16_t PROGMEM combo_cutline[] = {KC_X, KC_L, COMBO_END};
const uint16_t PROGMEM combo_cutline2[] = {MT(MOD_LCTL,KC_X), KC_L, COMBO_END};
const uint16_t PROGMEM combo_copyline[] = {KC_C, KC_L, COMBO_END};
const uint16_t PROGMEM combo_copyline2[] = {MT(MOD_LALT,KC_C), KC_W, COMBO_END};
const uint16_t PROGMEM combo_linedown[] = {KC_D, KC_L, COMBO_END};
const uint16_t PROGMEM combo_mathfrac[] = {KC_M, KC_F, COMBO_END};
const uint16_t PROGMEM combo_mathenvcenter[] = {KC_M, KC_E, KC_C, COMBO_END};
const uint16_t PROGMEM combo_copydown[] = {KC_C, KC_D,COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_TAB] = COMBO(combo_tab,KC_TAB),
  [COMBO_TAB2] = COMBO(combo_tab2,KC_TAB),
  [COMBO_ESC] = COMBO(combo_esc,KC_ESC),
  [COMBO_BSPC] = COMBO(combo_bspc,KC_BSPC),
  [COMBO_DEL] = COMBO(combo_del,KC_DEL),
  [COMBO_BSPC2] = COMBO(combo_bspc2,KC_BSPC),
  [COMBO_BSPC3] = COMBO(combo_bspc3,KC_BSPC),
  [COMBO_ENT] = COMBO(combo_ent,KC_ENT),
  [COMBO_ENT2] = COMBO(combo_ent2,KC_ENT),
  [COMBO_BSLS] = COMBO(combo_bsls,KC_BSLS),
  [COMBO_SLSH] = COMBO(combo_slsh,KC_SLSH),
  [COMBO_GRV] = COMBO(combo_grv,KC_GRV),
  [COMBO_SPC1] = COMBO(combo_spc1,KC_SPACE),
  [COMBO_SPC2] = COMBO(combo_spc2,KC_SPACE),
  [COMBO_GUI] = COMBO(combo_gui,KC_LGUI),
  [COMBO_F1] = COMBO(combo_f1,KC_F1),
  [COMBO_F2] = COMBO(combo_f2,KC_F2),
  [COMBO_F3] = COMBO(combo_f3,KC_F3),
  [COMBO_F4] = COMBO(combo_f4,KC_F4),
  [COMBO_F5] = COMBO(combo_f5,KC_F5),
  [COMBO_F6] = COMBO(combo_f6,KC_F6),
  [COMBO_F7] = COMBO(combo_f7,KC_F7),
  [COMBO_F8] = COMBO(combo_f8,KC_F8),
  [COMBO_F9] = COMBO(combo_f9,KC_F9),
  [COMBO_F10] = COMBO(combo_f10,KC_F10),
  [COMBO_F11] = COMBO(combo_f11,KC_F11),
  [COMBO_F12] = COMBO(combo_f12,KC_F12),
  [COMBO_LOCKNAV] = COMBO(combo_locknav,TO(_NAV)),
  [COMBO_LOCKNAV2] = COMBO(combo_locknav2,TO(_BASE)),
  [COMBO_DOMATH] = COMBO(combo_domath,DOMATH),
  [COMBO_CUTWORD] = COMBO(combo_cutword,CUTWORD),
  [COMBO_CUTWORD2] = COMBO(combo_cutword2,CUTWORD),    
  [COMBO_COPYWORD] = COMBO(combo_copyword,COPYWORD),
  [COMBO_COPYWORD2] = COMBO(combo_copyword2,COPYWORD),
  [COMBO_CUTLINE] = COMBO(combo_cutline,CUTLINE),
  [COMBO_CUTLINE2] = COMBO(combo_cutline2,CUTLINE),    
  [COMBO_COPYLINE] = COMBO(combo_copyline,COPYLINE),
  [COMBO_COPYLINE2] = COMBO(combo_copyline2,COPYLINE),
  [COMBO_LINEDOWN] = COMBO(combo_linedown,LINEDOWN),
  [COMBO_MATHFRAC] = COMBO(combo_mathfrac,MATHFRAC),
  [COMBO_MATHENVCENTER] = COMBO(combo_mathenvcenter,MATHENVCENTER),
  [COMBO_COPYDOWN] = COMBO(combo_copydown,COPYDOWN),    
};

int COMBO_LEN = sizeof(key_combos) / sizeof(key_combos[0]);

