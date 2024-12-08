/* Copyright 2023 Brian Low
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// Enabling this option changes the startup behavior to listen for an
// active USB communication to delegate which part is master and which
// is slave. With this option enabled and theres’s USB communication,
// then that half assumes it is the master, otherwise it assumes it
// is the slave.
//
// I've found this helps with some ProMicros where the slave does not boot
#define SPLIT_USB_DETECT

#define RGB_DISABLE_WHEN_USB_SUSPENDED     // turn off effects when suspended
#define SPLIT_TRANSPORT_MIRROR             // If LED_MATRIX_KEYPRESSES or LED_MATRIX_KEYRELEASES is enabled, you also will want to enable SPLIT_TRANSPORT_MIRROR
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100  // limits maximum brightness of LEDs (max 255). Higher may cause the controller to crash.

// Vial Support
#define VIAL_KEYBOARD_UID {0xA7, 0xA7, 0x9C, 0x4C, 0xE0, 0xB8, 0x00, 0x8D}

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define ENCODER_RESOLUTION 2

// The four corners
#define VIAL_UNLOCK_COMBO_ROWS { 0, 5, 3, 8 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 0, 0, 0 }

#define RGBLED_NUM 70
#define RGBLED_SPLIT {35,35}

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define BACKLIGHT_BREATHING

// constant
// // // #define MOUSEKEY_DELAY 500 // doesn't do anything in this mode
  #define MK_3_SPEED	//Not defined //Enable constant cursor speeds
  #define MK_MOMENTARY_ACCEL	//Not defined	// Enable momentary speed selection
  //
  #define MK_C_OFFSET_UNMOD 2 // Cursor offset per movement (unmodified)
  #define MK_C_INTERVAL_UNMOD 4 // Time between cursor movements (unmodified)
  //
  // Slow:
  #define MK_C_OFFSET_0 1 // Cursor offset per movement (MS_ACL0)
  #define MK_C_INTERVAL_0 6 // Time between cursor movements (MS_ACL0)
  //
  // Fast:
  #define MK_C_OFFSET_2 8 // Cursor offset per movement (MS_ACL2)
  #define MK_C_INTERVAL_2 4 // Time between cursor movements (MS_ACL2)
  // Scrolling:
  #define MK_W_OFFSET_UNMOD 1 // Scroll steps per scroll action (unmodified)
  #define MK_W_INTERVAL_UNMOD 40 // Time between scroll steps (unmodified)
  #define MK_W_OFFSET_0 1 // Scroll steps per scroll action (MS_ACL0)
  #define MK_W_INTERVAL_0 360 // Time between scroll steps (MS_ACL0)
  #define MK_W_OFFSET_1 1 // Scroll steps per scroll action (MS_ACL1)
  #define MK_W_INTERVAL_1 120 // Time between scroll steps (MS_ACL1)
  #define MK_W_OFFSET_2 1 // Scroll steps per scroll action (MS_ACL2)
  #define MK_W_INTERVAL_2 20 // Time between scroll steps (MS_ACL2)

// combined
// #define MK_COMBINED
//
// #define MOUSEKEY_DELAY 0
// #define MOUSEKEY_INTEVRAL 4
// #define MOUSEKEY_MOVE_DELTA 1
// #define MOUSEKEY_MAX_SPEED 10
// #define MOUSEKEY_TIME_TO_MAX 20

//// Kinetic
// #define MK_KINETIC_SPEED
// #define MK_VARIANT MK_TYPE_KINETIC
//
// #define MOUSEKEY_DELAY 0
// #define MOUSEKEY_INTERVAL 4
// #define MOUSEKEY_MOVE_DELTA 16
// #define MOUSEKEY_INITIAL_SPEED 500
// #define MOUSEKEY_BASE_SPEED 1500
// #define MOUSEKEY_DECELERATED_SPEED 400
// #define MOUSEKEY_ACCELERATED_SPEED 3000
//
// #define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 1
// #define MOUSEKEY_WHEEL_BASE_MOVEMENTS 32
// #define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 24
// #define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 4
//
// #define MOUSEKEY_WHEEL_DELAY 0
// #define MOUSEKEY_WHEEL_INTERVAL 20
// #define MOUSEKEY_WHEEL_DELTA 1
// #define MOUSEKEY_WHEEL_MAX_SPEED 8
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 40

//// accelerated (trash)
// #define MOUSEKEY_INTERVAL 4
// #define MOUSEKEY_MOVE_DELTA 1
// #define MOUSEKEY_MAX_SPEED 4
// #define MOUSEKEY_TIME_TO_MAX 40
//
// #define MOUSEKEY_WHEEL_DELAY 0
// #define MOUSEKEY_WHEEL_INTERVAL 80
// #define MOUSEKEY_WHEEL_DELTA 1
// #define MOUSEKEY_WHEEL_MAX_SPEED 8
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 0

#define TAPPING_TERM 170
//#define TAPPING_TERM_PER_KEY
//tapping term is defined in the c code as default case, whatever

//#define HOLD_ON_OTHER_KEY_PRESS
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

//#define RETRO_TAPPING

//#define LEGACY_MAGIC_HANDLING
