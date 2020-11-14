ifeq ($(strip $(KEYBOARD)), foobar)
TAP_DANCE_ENABLE = no
COMBO_ENABLE = yes
RGBLIGHT_ENABLE = no
NKRO_ENABLE = yes
LED_ANIMATIONS = no
MOUSEKEY_ENABLE = yes
BOOTLOADER = caterina
DYNAMIC_MACRO_ENABLE = yes
SRC += artsey.c
endif

