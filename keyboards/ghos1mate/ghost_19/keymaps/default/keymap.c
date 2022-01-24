// Copyright 2021 Ghos1mate (@w-duong@github.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_MUTE, KC_ESCAPE, KC_1, KC_2, KC_3,
        KC_4, KC_TAB, KC_Q, KC_W, KC_E,
        KC_R, KC_A, KC_S, KC_D, KC_F,
        KC_G, KC_LEFT_SHIFT, KC_C, KC_LEFT_CTRL, KC_SPACE
    )
    // [_FN] = LAYOUT(
    //     _______, _______,  _______,
    //         RESET,    XXXXXXX
    // )
};
