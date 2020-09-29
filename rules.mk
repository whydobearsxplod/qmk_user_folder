ifeq ($(strip $(KEYBOARD)), qaz)
TAP_DANCE_ENABLE = no
COMBO_ENABLE = yes
RGBLIGHT_ENABLE = no
NKRO_ENABLE = yes
LED_ANIMATIONS = no
MOUSEKEY_ENABLE = no
BOOTLOADER = caterina
DYNAMIC_MACRO_ENABLE = yes
SRC += whydobearsxplod.c
endif

ifeq ($(strip $(KEYBOARD)), gherkin)
TAP_DANCE_ENABLE = no
COMBO_ENABLE = yes
RGBLIGHT_ENABLE = no
NKRO_ENABLE = yes
LED_ANIMATIONS = no
MOUSEKEY_ENABLE = no
BOOTLOADER = caterina
DYNAMIC_MACRO_ENABLE = yes
SRC += whydobearsxplod.c
endif

ifeq ($(strip $(KEYBOARD)), omega)
TAP_DANCE_ENABLE = no
COMBO_ENABLE = yes
RGBLIGHT_ENABLE = no
NKRO_ENABLE = yes
LED_ANIMATIONS = no
MOUSEKEY_ENABLE = no
BOOTLOADER = caterina
DYNAMIC_MACRO_ENABLE = yes
SRC += whydobearsxplod.c
endif



ifeq ($(strip $(KEYBOARD)), underscore33)
TAP_DANCE_ENABLE = no
COMBO_ENABLE = yes
RGBLIGHT_ENABLE = no
NKRO_ENABLE = yes
LED_ANIMATIONS = no
MOUSEKEY_ENABLE = no
BOOTLOADER = atmel-dfu
DYNAMIC_MACRO_ENABLE = yes
SRC += whydobearsxplod.c
endif

ifeq ($(strip $(KEYBOARD)), alps.project.2)
TAP_DANCE_ENABLE = yes
COMBO_ENABLE = yes
RGBLIGHT_ENABLE = no
DYNAMIC_MACRO_ENABLE = yes
MOUSEKEY_ENABLE = no
CONSOLE_ENABLE = no
SRC += whydobearsxplod.c
endif

