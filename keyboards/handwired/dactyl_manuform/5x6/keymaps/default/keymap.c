/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H


#define _COLEMAK 0
#define _QWERTY 1
#define _SPECIAL 2
#define _NUMBERS 3
#define _RESET 8
#define _RESET_CONFIRM 9
#define _EMPTY 10



#define NUMBERS MO(_NUMBERS)
#define SPECIAL MO(_SPECIAL)
#define TLAYOUT TG(_QWERTY)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT_5x6(
     KC_ESC  , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0    ,KC_EQL ,
     KC_SLSH , KC_Q  , KC_W  , KC_F  , KC_P  , KC_G  ,                         KC_J  , KC_L  , KC_U  , KC_Y  , KC_QUOT ,KC_NO  ,
     KC_LSFT , KC_A  , KC_R  , KC_S  , KC_T  , KC_D  ,                         KC_H  , KC_N  , KC_E  , KC_I  , KC_O    ,KC_RSFT,
     KC_LCTL , KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_K  , KC_M  ,KC_COMM, KC_DOT, KC_MINS ,KC_RCTL,
                       KC_NO ,KC_LALT,                                                         KC_NO , KC_NO,
                                      KC_TAB, KC_BSPC,                         KC_SPC, KC_ENT,
                                      KC_LALT,NUMBERS,                         SPECIAL,KC_DEL,
                                      KC_LGUI, KC_NO ,                         MO(_RESET) , KC_NO
  ),
  [_QWERTY] = LAYOUT_5x6(
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______, KC_E  , KC_R  , KC_T  ,                           KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_LBRC,
     _______,_______, KC_S  , KC_D  , KC_F  , KC_G  ,                          _______, KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     _______,_______,_______,_______,_______,_______,                           KC_N  ,_______,_______,_______,_______,_______,
                     _______,_______,                                                          _______,_______,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______
  ),

  [_SPECIAL] = LAYOUT_5x6(
     TLAYOUT,_______,_______,_______,_______,_______,                          _______,_______,_______,_______ ,_______,_______,
     _______,KC_SLSH,KC_BSLS,KC_LBRC,KC_RBRC,KC_GRV ,                          _______,KC_EQL , KC_UP ,_______ ,_______,_______,
     KC_LSFT,KC_LABK,KC_RABK,KC_LPRN,KC_RPRN,KC_DQUO,                          _______,KC_LEFT,KC_DOWN,KC_RIGHT,KC_COLN,_______,
     _______,_______,_______,KC_LCBR,KC_RCBR,KC_AT  ,                          _______,_______,_______,_______ ,KC_SCLN,_______,
                     _______,_______,                                                          _______,_______ ,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______
  ),

  [_NUMBERS] = LAYOUT_5x6(
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,KC_7   ,KC_8   ,KC_9   ,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,KC_4   ,KC_5   ,KC_6   ,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,KC_1   ,KC_2   ,KC_3   ,_______,_______,
                     _______,_______,                                                          _______,_______,
                                     _______,_______,                          KC_0   ,_______,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______
  ),
  [_RESET] = LAYOUT_5x6(
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
                     _______,_______,                                                          _______,_______,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______,
                                     _______,MO(_RESET_CONFIRM),               _______,_______
  ),
  [_RESET_CONFIRM] = LAYOUT_5x6(
     RESET,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
                     _______,_______,                                                          _______,_______,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______
  ),
  [_EMPTY] = LAYOUT_5x6(
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
                     _______,_______,                                                          _______,_______,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______,
                                     _______,_______,                          _______,_______
  ),
};
