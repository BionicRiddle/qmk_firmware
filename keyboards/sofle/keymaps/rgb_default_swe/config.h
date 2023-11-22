 /* Copyright 2021 Dane Evans
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define USB_POLLING_INTERVAL_MS 1

#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN 15     // USART TX pin
#define SERIAL_USART_RX_PIN 16     // USART RX pin

//#define SERIAL_DEBUG

//#define USE_MATRIX_I2C


/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT

// 60 fps
#define FRAME_TIMEOUT (1000/60)
// 120 sec
#define SLEEP_TIMEOUT 120000

#define	SPLIT_HAND_PIN_LOW_IS_LEFT
#define SPLIT_HAND_PIN D4

//#define SPLIT_USB_DETECT
#define SPLIT_WATCHDOG_ENABLE

#define CUSTOM_FONT

#define CUSTOM_LAYER_READ //if you remove this it causes issues - needs better guarding


#define QUICK_TAP_TERM 0
#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif
#define ENCODER_DIRECTION_FLIP


/* ws2812 RGB LED */
#define WS2812_DI_PIN D3

#ifdef RGB_MATRIX_ENABLE
#define RGBLED_NUM 36    // Number of LEDs
#define RGBLED_NUM 36    // Number of LEDs
#define RGB_MATRIX_LED_COUNT RGBLED_NUM
#endif

#undef RGBLED_NUM

#define RGBLED_NUM 72
//#define RGBLED_SPLIT
#define RGBLED_SPLIT { 36, 36 } // haven't figured out how to use this yet

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended

// #   define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 215 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#define RGB_MATRIX_DEFAULT_VAL 100
#define RGB_MATRIX_DEFAULT_HUE 0 // Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 255 // Sets the default saturation value, if none has been set

#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_RAINBOW_MOVING_CHEVRON

#define RGB_MATRIX_SPD_STEP 100

#define RGB_MATRIX_SPLIT { 36, 36 }

#endif

// OLED STUFF

#define OLED_FONT_H "keyboards/sofle/keymaps/rgb_default_swe/glcdfont.c"

#define OLED_TIMEOUT 60000 // 60 sec of no screen update, should never happen
#define SHIP_TIMEOUT 120000 // ms
#define SPLIT_OLED_ENABLE

#define SYNC_TIMER 100 // ms

#define SPLIT_WPM_ENABLE

// Allow for an extra sync command over the split
#define SPLIT_TRANSACTION_IDS_USER USER_SYNC_A