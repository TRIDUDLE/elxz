//this file is to configure the rotary encoder
#include "elxz.h"

// KY040 rotary encoder config
bool encoder_usage(uint8_t index, bool clockwise) {
    if (index == 0) {  // first encoder KY040
        if (clockwise) {
            tap_code(KC_VOLU);  // right turn: volume up
        } else {
            tap_code(KC_VOLD);  // left turn: volume down
        }
    }
    return false;
}