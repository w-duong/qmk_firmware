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
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k410, \
    k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k510, \
    k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k610, \
    k70, k71, k72, k73, k74, k75, k76, k77, k78, k79, k710, \
    k80, k81, k82, k83, k84, k85,      k87, k88, k89        \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210 }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k410 }, \
    { k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k510 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k610 }, \
    { k70, k71, k72, k73, k74, k75, k76, k77, k78, k79, k710 }, \
    { k80, k81, k82, k83, k84, k85, KC_NO,k87,k88, k89, KC_NO}  \
}
