/*
Copyright 2024 ElectronLab

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

#define VIAL_KEYBOARD_UID {0xA4, 0x47, 0xBF, 0x83, 0x4A, 0x18, 0x36, 0x85}

#define ___ KC_NO

#define LAYOUT LAYOUT_konrad
#define DYNAMIC_KEYMAP_LAYER_COUNT 12

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

//#define EE_HANDS
#define MASTER_LEFT
// #define MASTER_RIGHT

#define TAPPING_TERM 150
//#define TAPPING_TERM 300

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define QUICK_TAP_TERM 0

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
//#define AUTO_SHIFT_NO_SETUP

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
//#define NO_ACTION_TAPPING
//#define NO_MUSIC_MODE

//#define COMBO_COUNT 3
#define VIAL_COMBO_ENTRIES 25

#define COMBO_TERM 20

#define JOYSTICK_BUTTON_COUNT 17
#define JOYSTICK_AXIS_COUNT 6
#define JOYSTICK_AXIS_RESOLUTION 8
#define JOYSTICK_HAS_HAT

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

// Bootmagic support
#   define BOOTMAGIC_ROW 0
#   define BOOTMAGIC_COLUMN 1
#   define BOOTMAGIC_ROW_RIGHT 4
#   define BOOTMAGIC_COLUMN_RIGHT 1

#define FORCE_NKRO

// Haptic support
#ifdef HAPTIC_ENABLE
//#   define NO_HAPTIC_ALPHA
//#   define NO_HAPTIC_PUNCTUATION
//#   define NO_HAPTIC_LOCKKEYS
//#   define NO_HAPTIC_NAV
//#   define NO_HAPTIC_NUMERIC
#endif
