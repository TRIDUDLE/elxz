#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][2][3] = {
    [0] = LAYOUT(
        KC_CALCULATOR, KC_MY_COMPUTER, KC_PRINT_SCREEN,                 //upper row
        KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK,  //bottom row
        KC_MUTE                                                         //encoder / knob button
    )
};