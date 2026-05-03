#pragma once

#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS { B15, A8, A9, B14, A15, B3 }
#define MATRIX_COL_PINS { B4, B5, B6, B7, B8, B9, A1, A2, A3, A4, A5, A6, A7, B0, B1, A0, B10 }

#define DIODE_DIRECTION COL2ROW

#define USB_VID 0x4B4C
#define USB_PID 0x0002
#define DEVICE_VER 0x0001

#define DEBOUNCE 8
#define FORCE_NKRO
#define USB_POLLING_INTERVAL_MS 1
