// Copyright 2022 Jay (@Toofty5)
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
#define XXX KC_NO

#define LAYOUT( \
    K40, K41, K42, K43, K44, K45, K46, K06, K05, K04, K03, K02, K07, K08, \
    K50, K51, K52, K53, K54, K55, K56, K16, K15, K14, K13, K12, K17, K18, \
    K60, K61, K62, K63, K64, K65, K66, K26, K25, K24, K23, K22, K28, \
    K70, K72, K73, K74, K75, K76, K36, K35, K34, K33, K32, K38, \
    K80, K81, K82, K86, K84, K83, K87, K88  \
) { \
    { XXX, XXX, K02, K03, K04, K05, K06, K07, K08 }, \
    { XXX, XXX, K12, K13, K14, K15, K16, K17, K18 }, \
    { XXX, XXX, K22, K23, K24, K25, K26, XXX, K28 }, \
    { XXX, XXX, K32, K33, K34, K35, K36, XXX, K38 }, \
    { K40, K41, K42, K43, K44, K45, K46, XXX, XXX }, \
    { K50, K51, K52, K53, K54, K55, K56, XXX, XXX }, \
    { K60, K61, K62, K63, K64, K65, K66, XXX, XXX }, \
    { K70, XXX, K72, K73, K74, K75, K76, XXX, XXX }, \
    { K80, K81, K82, K83, K84, XXX, K86, K87, K88 }, \
}
// swap K83 and K82 for original Holyoak keyboard.
