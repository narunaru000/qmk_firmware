// Copyright 2022 Naruse (@Naruse)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Matrix Assignments
#define MATRIX_ROWS 8   // Rows are doubled-up
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { D1, D4, D7, B4 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5 }

// Diode setting
#define DIODE_DIRECTION COL2ROW

// Accuracy
#define MATRIX_IO_DELAY 5
#define DEBOUNCE 5

// Split Keyboard specifics
#define SOFT_SERIAL_PIN D3
#define SELECT_SOFT_SERIAL_SPEED 1
#define SPLIT_HAND_PIN B7
#define SPLIT_HAND_PIN_LOW_IS_LEFT  // connected device will right side.

// Feature diable options
//#define NO_DEBUG
//#define NO_PRINT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
