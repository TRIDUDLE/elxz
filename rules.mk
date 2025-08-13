# ProMicro controller
MCU = atmega32u4
BOOTLOADER = atmel-dfu

# encoder configuration
ENCODER_ENABLE = yes

# oled 0,96inch configuration
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c

# other functions
BOOTMAGIC_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
NKRO_ENABLE = yes
