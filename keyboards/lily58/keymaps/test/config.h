/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_MATRIX_I2C

//  #define USE_I2C

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define MASTER_RIGHT

// #define SSD1306OLED

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD

/* define tapping term */
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 3

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 10
#define RGBLED_SPLIT { 5, 5 }
#define RGBLIGHT_LIMIT_VAL 160
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }


 /* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

// Underglow

#undef RGBLED_NUM
#define RGBLED_NUM 10    // Number of LEDs
#define RGBLED_SPLIT { 5, 5 }
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_SLEEP
