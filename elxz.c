#include "encoder.h"
#include "config.h"

#include "quantum.h"

bool encoder_update_user(uint8_t index, bool clockwise) {
    // Handle encoder rotation
    if (clockwise) {
        // Rotate clockwise action
        tap_code(KC_VOLU); // Example: Increase volume
    } else {
        // Rotate counter-clockwise action
        tap_code(KC_VOLD); // Example: Decrease volume
    }
    return true; // Return true to indicate the update was handled
}