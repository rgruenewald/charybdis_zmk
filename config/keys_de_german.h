#pragma once

/*
 * German (de-DE) localized keycodes.
 *
 * Start from the existing local Swiss mapping and override keys that differ
 * for common de-DE usage in this keymap.
 */
#include "keys_de_swiss.h"

/* § on DE-DE: Shift+3 */
#undef DE_SECTION
#undef DE_SECT
#define DE_SECTION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define DE_SECT (DE_SECTION)

/* ° on DE-DE: Shift+^ key (US grave position) */
#undef DE_DEGREE
#undef DE_DEG
#define DE_DEGREE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))
#define DE_DEG (DE_DEGREE)
