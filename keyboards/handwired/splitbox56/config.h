// Copyright 2022 Naruse (@Naruse)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Matrix Assignments
#define MATRIX_ROWS 8   // Rows are doubled-up
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { D4, C6, D7, E6 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }
//#define UNUSED_PINS { }

// Diode setting
#define DIODE_DIRECTION COL2ROW

// Accuracy
#define MATRIX_IO_DELAY 5
#define DEBOUNCE 5

// Split Keyboard specifics
#define SOFT_SERIAL_PIN D3
#define SELECT_SOFT_SERIAL_SPEED 1

// Feature diable options
//#define NO_DEBUG
//#define NO_PRINT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION