#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

// USB config
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x6060
#define DEVICE_VER 0x0001
#define MANUFACTURER "Bartosz"
#define PRODUCT "ELXZ"

// Direct pins 
#define DIRECT_PINS { { F4, F5, F6 }, { F7, B1, B4, B5} }

// Debouncing
#define DEBOUNCE 10

// Rotary encoder KY-040
#define ENCODER_A_PINS { B2 }
#define ENCODER_B_PINS { B3 }

#endif