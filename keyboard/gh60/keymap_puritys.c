#include "keymap_common.h"
#include "keymap_puritys.h"

// GRV = ` 

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Normal/Default case */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN0,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        FN6,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          FN7, \
        LCTL,LGUI,LALT,          SPC,                     RALT,FN0, APP, RCTL),

    /* 1: My Customized 
    */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN0,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        FN6,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          FN7, \
        LCTL,LGUI,LALT,          SPC,                     FN0, RALT, APP, RCTL),


    /* 2: useless */
    KEYMAP_ANSI(
        2,1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,BSPC, \
        TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL, BSLS, \
        FN0,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     ENT,  \
        LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,             RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN0, RGUI,APP, RCTL),

    /* 3: useless */
    KEYMAP_ANSI(
        3, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC,BSLS, \
        FN0,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,     ENT,  \
        LSFT,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN0, RGUI,APP, RCTL),

    /* 4: Shift layout */
    KEYMAP_ANSI(
        GRV,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 5: FN+Ctrl  layout*/
    KEYMAP_ANSI(
        5,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,TRNS,TRNS,TRNS,TRNS,TRNS, \
        FN0,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGDN,END,TRNS,TRNS,     TRNS, \
        FN8,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 6 Fn layout
      v = FN6 = paste
      ctrl = FN8 = Jump to layout 5
     */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
        TRNS,TRNS, TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,UP,CALC,TRNS,HOME,INS, TRNS,  \
        FN0,FN3,FN4,TRNS,TRNS,TRNS,HOME,LEFT,DOWN,RIGHT,END, TRNS,      TRNS, \
        TRNS,TRNS, TRNS,TRNS,FN6,TRNS,TRNS,TRNS,PGUP,PGDN,TRNS,           TRNS, \
        FN8,TRNS,TRNS,          TRNS,                     TRNS,TRNS,TRNS,TRNS),
    /* 
     7 Layout selector

     # default : LSFT+RSFT+num
     LSFT+RSFT+0 = layout 0 (Normal)
     LSFT+RSFT+1 = layout 1 (My Customized)
     LSFT+RSFT+2 = layout 2 useless 
     */
    KEYMAP_ANSI(
        TRNS, FN1, FN2, FN3, FN4,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN0, \
        TRNS,FN5, FN8, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};

const action_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(6),// To FN layout 
    [1] = ACTION_LAYER_TOGGLE(0),
    [2] = ACTION_LAYER_TOGGLE(1),
    [3] = ACTION_DEFAULT_LAYER_SET(0),  //layout 0
    [4] = ACTION_DEFAULT_LAYER_SET(1),  //  layout 1
    [5] = ACTION_LAYER_MOMENTARY(5),
    [6] = ACTION_LAYER_MODS(4, MOD_LSFT),
    [7] = ACTION_LAYER_MODS(4, MOD_RSFT),
    [8] = ACTION_LAYER_MODS(5, MOD_LCTL),




    //ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_PASTE)
    //[6] = ACTION_MACRO(MY_PASTE),
 //   [3] = ACTION_FUNCTION(BACKLIGHT_ENABLE),

//    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
//    [4] = ACTION_LAYER_MOMENTARY(7),  // to Layout selector
//    [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
//    [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
//    [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
//    [8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)

{
    switch (id) {
        case MY_PASTE:
          return (record->event.pressed ?
              MACRO(T(PSTE), END ) :
              MACRO_NONE);
        case MY_UNIX_INSERT:
          return (record->event.pressed ?
              MACRO(D(LSFT), T(INS), END ) :
              MACRO_NONE);
    }


    return MACRO_NONE;
}

/*
  self define function key
*/
//void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
//{
//    switch (id) {
//        case BACKLIGHT_ENABLE:
//            backlight_toggle();
//        break;
//        case BACKLIGHT_INCREASE:
//            backlight_increase(opt);
//        break;
//    }

//    if (record->event.pressed) ; else ;
//    dprintf("%d", record->tap.count);
//    if (record->tap.interrupted) ;
//    dprint("\n");
//    switch (id) {
//        case LSHIFT_PAREN:
//            // Shift parentheses example: RShft + tap '('
//
//            // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
//
//            // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
//
//            if (record->event.pressed) {
//
//                if (record->tap.count > 0 && !record->tap.interrupted) {
//
//                    if (record->tap.interrupted) {
//
//                        register_mods(MOD_BIT(KC_LSHIFT));
//
//                    }
//
//                } else {
//
//                    register_mods(MOD_BIT(KC_LSHIFT));
//
//                }
//
//            } else {
//
//                if (record->tap.count > 0 && !(record->tap.interrupted)) {
//
//                    add_weak_mods(MOD_BIT(KC_LSHIFT));
//
//                    send_keyboard_report();
//
//                    register_code(KC_9);
//
//                    unregister_code(KC_9);
//
//                    register_code(KC_0);
//
//                    unregister_code(KC_0);
//
//                    del_weak_mods(MOD_BIT(KC_LSHIFT));
//
//                    register_code(KC_LEFT);
//
//                    unregister_code(KC_LEFT);
//
//                    send_keyboard_report();
//
//                    record->tap.count = 0;  // ad hoc: cancel tap
//
//                } else {
//                    unregister_mods(MOD_BIT(KC_LSHIFT));
//                }
//
//            }
//
//            break;
//    }
//
//}



