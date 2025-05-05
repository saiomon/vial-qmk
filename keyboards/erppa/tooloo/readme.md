# Töölöö50


![töölöö50](https://github.com/user-attachments/assets/14e57b3e-404a-4ded-b068-494d59290484)

* Keyboard Maintainer: [saiomon](https://github.com/saiomon)
* Hardware Supported: [Töölöö50 PCB](https://github.com/saiomon/Tooloo50/tree/main/PCB)
* Hardware Availability: [Töölöö50](https://github.com/saiomon/Tooloo50)

Make example for this keyboard (after setting up your build environment):

    make erppa/tooloo/mx:default

Flashing example for this keyboard:

    make erppa/tooloo/mx:default:flash 

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
