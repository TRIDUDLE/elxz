#include QMK_KEYBOARD_H

// Layout definition for 6 buttons (2x3) + 1 encoder SW
// Name changed to avoid collision with other layout files
#define LAYOUT_elxz( \
    k00, k01, k02, \
    k10, k11, k12, \
    k20 \
) { \
    { k00, k01, k02, KC_NO }, \
    { k10, k11, k12, k20 } \
}

const uint16_t PROGMEM keymaps[][2][4] = {
    [0] = LAYOUT_elxz(
        KC_CALCULATOR, KC_MY_COMPUTER, KC_PRINT_SCREEN,   
        KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_MUTE 
    )
};
