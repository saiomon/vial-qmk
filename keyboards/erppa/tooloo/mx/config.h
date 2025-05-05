/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#undef AUDIO_VOICES
#undef AUDIO_PIN
#define AUDIO_PIN A8

#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL 1
#define AUDIO_CLICKY

#define SOLENOID_PIN A15
#define SOLENOID_DEFAULT_DWELL 4
#define SOLENOID_MIN_DWELL 4
#define SOLENOID_MAX_DWELL 45
#define HAPTIC_OFF_IN_LOW_POWER 1
#define NO_HAPTIC_MOD




