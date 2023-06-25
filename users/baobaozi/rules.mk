INTROSPECTION_KEYMAP_C = baobaozi.c # Replace SRC, see issue #21137 https://github.com/qmk/qmk_firmware/pull/17559/files
# SRC += baobaozi.c

NKRO_ENABLE = no
COMBO_ENABLE = yes
LTO_ENABLE = yes # the new version of EXTRAFLAGS += -flto
KEY_OVERRIDE_ENABLE = no # god no, 4 key overrides cost 1896 bytes, whereas 4 mod masks cost 156 bytes

TAP_DANCE_ENABLE = no # turn this off because of fucking UT47.2 not being able to handle tap dances
LEADER_ENABLE = no # leaders are pretty costly, might as well make a layer
UNICODE_ENABLE = no # explicitly off just in case, to save space
UNICODEMAP_ENABLE = no # explicitly off just in case, to save space
SPACE_CADET_ENABLE = no # explicitly off just in case, to save space
GRAVE_ESC_ENABLE = no # explicitly off just in case, to save space
MAGIC_ENABLE = no # explicitly off just in case, to save space

CONSOLE_ENABLE = no
# DEBUG = yes

# Caps word feature
# OPT_DEFS += -DCAPS_WORD
# SRC += caps_word.c

# ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
#   SRC += rgb_layers.c
# endif

# ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
#     SRC += rgb_matrix.c
# endif

# ifeq ($(strip $(COMBO_ENABLE)), yes)
#     SRC += combos.c
# endif

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
    SRC += tap_dances.c
endif

ifeq ($(strip $(UNICODEMAP_ENABLE)), yes)
  SRC += unicode.c
endif
