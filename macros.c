/* Macros */


bool is_shift_lock_active = false; 

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

        
	
  }
  return true;
};

