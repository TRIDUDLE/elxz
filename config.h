#ifndef CONFIG_H
#define CONFIG_H

#include <config.h>

// Direct pins (6 buttons + 1 encoder SW)
#define DIRECT_PINS 
{ { B6, B2, B3, NO_PIN }, 
{ F7, B1, B4, B5 } }

// Encoder pins
#define ENCODER_A_PINS { B12 }
#define ENCODER_B_PINS { B13 }
#define ENCODER_RESOLUTION 2


// Debouncing
#define DEBOUNCE 5

#endif
