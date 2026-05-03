# Klandestin87

Handwired STM32F401 (Blackpill) TKL Keyboard Project

This project copy from [Meck TKL](https://github.com/qmk/qmk_firmware/tree/master/keyboards/handwired/meck_tkl) (Adding VIA Support)
*A short description of the keyboard/project*

* Keyboard Maintainer : [Alif Faizin](https://github.com/katakbersayap)
* Hardware Supported : [*STM32F401 (Blackpill)*](https://www.raspberrypi.com/products/raspberry-pi-pico/)
* Firmware : *QMK Firmware*
* Layout : *TKL / handwired*

### Matrix Pins:
Columns : 
`["B4","B5","B6","B7","B8","B9","A1","A2","A3","A4","A5","A6","A7","B0","B1","A0","B10"]`

Row : 
`["B15","A8","A9","B14","A15","B3"]`


### Flashing Firmware :
1. Compile firmware using [QMK MSYS](https://msys.qmk.fm/)
2. Put STM32F401 (Blackpill) into bootloader mode

### Notes
* Ensure matrix wiring matches your QMK configuration
* Download Klandestin84 file and copy to `qmk_firmware/keyboard` folder
* Use the command 
  
via Compile:

    qmk compile -kb <keyboard folder name> -km via

### Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
