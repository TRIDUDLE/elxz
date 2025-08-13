# handwired/elxz

![handwired/elxz](imgur.com image replace me!)

*After I bought my 60% keyboard i desperately needed macropad, so I decided to learn handwiring my own*

* Keyboard Maintainer: [Bartosz](https://github.com/TRIDUDLE)
* Hardware Supported: 
-*KY040 encoder* for the knob, 
-*ProMicro controller*, 
-*6 mx cherry switches*

Make example for this keyboard (after setting up your build environment):

    make handwired/elxz:default

Flashing example for this keyboard:

    make handwired/elxz:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
