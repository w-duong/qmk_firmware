// Copyright 2021 Ghos1mate (@w-duong@github.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
    _FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, // row0
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, // row1
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, // row2
        KC_CAPS_LOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, // row3
        KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, //row4
        KC_LEFT_CTRL, KC_LEFT_GUI, KC_LEFT_ALT, MO(_FN1), KC_SPACE, KC_F11, KC_SPACE, KC_F12, KC_RIGHT_ALT, MO(_FN2), KC_LEFT, //row5
        KC_KP_0, KC_KP_1, KC_KP_4, KC_KP_7, KC_KP_ASTERISK, KC_MINUS, KC_RIGHT_SHIFT, KC_EQUAL, KC_PSCR, KC_DELETE, KC_RIGHT, //row6
        KC_KP_SLASH, KC_KP_2, KC_KP_5, KC_KP_8, KC_KP_MINUS, KC_LBRC, KC_DOWN, KC_RBRC, KC_BACKSPACE, KC_INSERT, KC_MUTE,     //row7
        KC_KP_DOT, KC_KP_3, KC_KP_6, KC_KP_9, KC_KP_PLUS, KC_QUOTE, KC_ENTER, KC_BACKSLASH, KC_UP //row8
    ),

    [_FN1] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row0
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row1
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row2
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row3
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row4
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row5
        KC_MRWD, KC_MSTP, KC_END , KC_HOME, KC_NUM , _______, _______, _______, _______, _______, _______, // row6
        KC_MFFD, KC_MPLY, KC_PGDN, KC_PGUP, KC_SCRL, _______, _______, _______, _______, _______, _______, // row7
        KC_MPRV, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______                    // row8
    ),

    [_FN2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row0
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row1
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row2
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row3
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row4
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row5
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row6
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, // row7
        _______, _______, _______, _______, _______, _______, _______, _______, _______                    // row8
    )
};
