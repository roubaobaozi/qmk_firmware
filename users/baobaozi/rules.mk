SRC += baobaozi.c

NKRO_ENABLE = yes
# TAP_DANCE_ENABLE = yes # turn this off because of fucking UT47.2 not being able to handle tap dances
COMBO_ENABLE = yes
LTO_ENABLE = yes # the new version of EXTRAFLAGS += -flto
LEADER_ENABLE = no # leaders are pretty costly, might as well make a layer
UNICODE_ENABLE = no # explicitly off just in case, to save space
UNICODEMAP_ENABLE = no # explicitly off just in case, to save space
SPACE_CADET_ENABLE = no # explicitly off just in case, to save space

# CONSOLE_ENABLE = yes
# DEBUG = yes

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
  SRC += rgb_layers.c
endif

# ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
#     SRC += rgb_matrix.c
# endif

ifeq ($(strip $(COMBO_ENABLE)), yes)
    SRC += combos.c
endif

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
    SRC += tap_dances.c
endif

ifeq ($(strip $(UNICODEMAP_ENABLE)), yes)
  SRC += unicode.c
endif
