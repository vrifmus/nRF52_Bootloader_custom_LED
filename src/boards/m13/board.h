/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Nick Winans
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

 #ifndef _M13_H
 #define _M13_H
 
 #define _PINNUM(port, pin)    ((port)*32 + (pin))
 
 #define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3
 
 /*------------------------------------------------------------------*/
 /* LED
  *------------------------------------------------------------------*/
 #define LEDS_NUMBER       2
 #define LED_PRIMARY_PIN   _PINNUM(1, 7) // 0
 #define LED_SECONDARY_PIN _PINNUM(1, 1) // 1
 #define LED_STATE_ON      1
  
 /*------------------------------------------------------------------*/
 /* BUTTON
  *------------------------------------------------------------------*/
 #define BUTTONS_NUMBER    2  // none connected at all
 #define BUTTON_1          _PINNUM(0, 18)  // unusable: RESET
 #define BUTTON_2          _PINNUM(0, 19)  // no connection
 #define BUTTON_PULL       NRF_GPIO_PIN_PULLUP
 
 //--------------------------------------------------------------------+
 // BLE OTA
 //--------------------------------------------------------------------+
 #define BLEDIS_MANUFACTURER  "eztrow"
 #define BLEDIS_MODEL         "M13"
 
 //--------------------------------------------------------------------+
 // USB
 //--------------------------------------------------------------------+
 #define USB_DESC_VID           0x239A
 #define USB_DESC_UF2_PID       0x00B3
 #define USB_DESC_CDC_ONLY_PID  0x00B3
 
 #define UF2_PRODUCT_NAME  "m13"
 #define UF2_VOLUME_LABEL  "M13"
 #define UF2_BOARD_ID      "nRF52840-nicenano"
 #define UF2_INDEX_URL     "https://github.com/eztrow/m13"
 
 #endif // _M13_H
 