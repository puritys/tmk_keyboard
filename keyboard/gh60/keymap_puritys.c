#include "keymap_common.h"
#include "keymap_puritys.h"

// GRV = ` 

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* 0: My Customized 
    */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN0,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        FN6,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          FN7, \
        LCTL,LGUI,LALT,          SPC,                     FN0, FN1, APP, RCTL),

    /* 1: Normal/Default case */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN0,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        FN6,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          FN7, \
        LCTL,LGUI,LALT,          SPC,                     RALT,FN1, APP, RCTL),

    /* 2: Normal only for testing */
    KEYMAP_ANSI(
        2, FN9,   FN10,   FN11,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   MS_BTN1,  MS_UP,   O,   P,   LBRC,RBRC,BSLS, \
        CAPS,A,   S,   D,   F,   G,   H,   MS_LEFT,   MS_DOWN,   MS_RIGHT,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN0,FN1, APP, RCTL),

    /* 3: useless */
    KEYMAP_ANSI(
        3, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC,BSLS, \
        FN0,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,     ENT,  \
        LSFT,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     RALT, FN1,APP, RCTL),

    /* 4: Shift layout */
    KEYMAP_ANSI(
        GRV,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 5: prepare  layout*/
    KEYMAP_ANSI(
        5,1,2,3,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,TRNS,TRNS,TRNS,TRNS,TRNS, \
        FN0,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGDN,END,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 6 Fn layout
      v = FN6 = paste
     */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
        TRNS,TRNS, TRNS, ENT,TRNS,TRNS,TRNS,PGUP,FN12,PGDN,PSCR,TRNS,INS, TRNS,  \
        FN0,TRNS,TRNS,DEL,TRNS,TRNS,HOME,FN14,FN13,FN15,END, TRNS,      TRNS, \
        TRNS,TRNS, TRNS,TRNS,TRNS,BSPC,TRNS,TRNS,PGUP,PGDN,TRNS,           TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                     TRNS,TRNS,TRNS,TRNS),
    /* 
     7 Layout selector
     Right FN + 1 = layout 0 (My Customized)
     Right FN + 2 = layout 1 (Normal)
     */
    KEYMAP_ANSI(
        TRNS, FN3, FN4, FN5, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS, TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        CAPS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};

const action_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(6),// To FN layout 
    [1] = ACTION_LAYER_MOMENTARY(7),// To Layout set
    [2] = ACTION_LAYER_TOGGLE(1),
//    [3] = ACTION_DEFAULT_LAYER_SET(0),  //layout 0
//    [4] = ACTION_DEFAULT_LAYER_SET(1),  //  layout 1
    [3] = ACTION_LAYER_SET(0, ON_PRESS),  //layout 0
    [4] = ACTION_LAYER_SET(1, ON_PRESS),  //  layout 1
    [5] = ACTION_LAYER_SET(2, ON_PRESS),  //  layout 2
    [6] = ACTION_LAYER_MODS(4, MOD_LSFT),
    [7] = ACTION_LAYER_MODS(4, MOD_RSFT),
    //[8] = ACTION_LAYER_MODS(5, MOD_LSFT),
    //[8] = ACTION_LAYER_MOMENTARY(5),
    //[8] = ACTION_FUNCTION(MY_LCTL),

    // backlight setting
    //[9] = ACTION_BACKLIGHT_TOGGLE(),
    //[10] = ACTION_BACKLIGHT_INCREASE(),
    //[11] = ACTION_BACKLIGHT_DECREASE(),

    [12] = ACTION_FUNCTION_OPT(MY_PG_CONTROL, 1),
    [13] = ACTION_FUNCTION_OPT(MY_PG_CONTROL, 2),
    [14] = ACTION_FUNCTION_OPT(MY_PG_CONTROL, 3),
    [15] = ACTION_FUNCTION_OPT(MY_PG_CONTROL, 4),

    //ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_PASTE)
    //[6] = ACTION_MACRO(MY_PASTE),
//    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
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
  * Fn + i  = Up
  * Ctrl + Fn + i = PageUp
  * Fn + j = Left
  * Ctrl + Fn + j   = Home
  * Fn + k = Down
  * Ctrl + Fn +  k = PageDown
  * Fn + l = Right
  * Ctrl + Fn  + l =  End
*/
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
#   define MODS_CTRL_MASK   (MOD_BIT(KC_LCTRL)|MOD_BIT(KC_RCTRL))
    dprintf("zzz %d %d %d\n", record->tap.count, record->event.pressed, record->tap.interrupted);
    //if (record->event.pressed) ; else ;
    //if (record->tap.interrupted) ;
    static uint8_t mod = 0;
    static uint8_t key;
    //dprintf("gg1 opt =  %d \n",  opt);
    switch (id) {
        case MY_PG_CONTROL:
            mod = get_mods();
            //dprintf("mod =  %d \n",  mod);
            if (record->event.pressed) {
                switch (opt) {
                    case 1:
                        key = (mod & MODS_CTRL_MASK) ? KC_PGUP : KC_UP;
                        break; 
                    case 2:
                        key = (mod & MODS_CTRL_MASK) ? KC_PGDN : KC_DOWN;
                        break; 
                    case 3:
                        key = (mod & MODS_CTRL_MASK) ? KC_HOME : KC_LEFT;
                        break; 
                    case 4:
                        key = (mod & MODS_CTRL_MASK) ? KC_END : KC_RIGHT;
                        break; 

                }
                if (mod & MODS_CTRL_MASK)  {
                    del_mods(mod);
                    add_key(key);
                    send_keyboard_report();
                    add_mods(mod);   // return Ctrl but not sent
                }  else if (mod &  KC_LALT) {
                    // Left Alt + Right Alt + ijkl map to Left Alt + arrow
                    del_mods(KC_RALT);
                    add_key(key);
                    send_keyboard_report();
                    add_mods(KC_RALT);   // return KC_RALT but not sent
                } else {
                    add_key(key);
                    send_keyboard_report();
                }
            } else {
                del_key(key);
                send_keyboard_report();
            }
            break;

    }
}




