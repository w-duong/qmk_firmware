// Copyright 2021 Ghos1mate (@w-duong@github.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00, k01, k02, k03, k04, \
      k10, k11, k12, k13, k14, \
        k20, k21, k22, k23, k24, \
      k30, k31, k32, k33, k34 \
) { \
    { k00, k01, k02, k03, k04 }, \
    { k10, k11, k12, k13, k14 }, \
    { k20, k21, k22, k23, k24 }, \
    { k30, k31, k32, k33, k34 }  \
}
