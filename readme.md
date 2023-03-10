![wiring diagram, needs cleanup](https://github.com/Toofty5/drasil/blob/main/img/drasil_pinout.png)

# drasil

QMK configuration and wiring diagram for "Drasil" handwired 60% keyboard.

This custom layout was created to accommodate the 60 keys with a 9x9 matrix, in order to fit on the 18 available pins on a Pro Micro microcontroller.

* Keyboard Maintainer: [Jay](https://github.com/Toofty5)
* Hardware Supported: Pro Micro ATmega32U4
* Hardware Availability: [Keeb.io](https://keeb.io/collections/diy-parts/products/pro-micro-5v-16mhz-arduino-compatible-atmega32u4)

Make example for this keyboard (after setting up your build environment):

    make drasil:default

Flashing example for this keyboard:

    make drasil:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available

![wiring photo for reference](https://github.com/Toofty5/drasil/blob/main/img/drasil_photo.png)
