/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2020 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#ifndef usb_ids_h_
#define usb_ids_h_

/* Definitions of useful USB VID/PID values */

#define USB_VENDOR_APPLE        0x05ac
#define USB_VENDOR_HYPERKIN     0x2e24
#define USB_VENDOR_MICROSOFT    0x045e
#define USB_VENDOR_NINTENDO     0x057e
#define USB_VENDOR_NVIDIA       0x0955
#define USB_VENDOR_PDP          0x0e6f
#define USB_VENDOR_POWERA       0x24c6
#define USB_VENDOR_SONY         0x054c
#define USB_VENDOR_RAZER        0x1532
#define USB_VENDOR_VALVE        0x28de

#define USB_PRODUCT_NINTENDO_GAMECUBE_ADAPTER           0x0337
#define USB_PRODUCT_NINTENDO_SWITCH_PRO                 0x2009
#define USB_PRODUCT_RAZER_PANTHERA                      0x0401
#define USB_PRODUCT_RAZER_PANTHERA_EVO                  0x1008
#define USB_PRODUCT_RAZER_ATROX                         0x0a00
#define USB_PRODUCT_SONY_DS4                            0x05c4
#define USB_PRODUCT_SONY_DS4_DONGLE                     0x0ba0
#define USB_PRODUCT_SONY_DS4_SLIM                       0x09cc
#define USB_PRODUCT_SONY_DS5                            0x0ce6
#define USB_PRODUCT_XBOX_ONE_ELITE_SERIES_1             0x02e3
#define USB_PRODUCT_XBOX_ONE_ELITE_SERIES_2             0x0b00
#define USB_PRODUCT_XBOX_ONE_ELITE_SERIES_2_BLUETOOTH   0x0b05
#define USB_PRODUCT_XBOX_ONE_S                          0x02ea
#define USB_PRODUCT_XBOX_ONE_S_REV1_BLUETOOTH           0x02e0
#define USB_PRODUCT_XBOX_ONE_S_REV2_BLUETOOTH           0x02fd
#define USB_PRODUCT_XBOX_ONE_SERIES_X                   0x0b12
#define USB_PRODUCT_XBOX_ONE_SERIES_X_BLUETOOTH         0x0b13
#define USB_PRODUCT_XBOX_ONE_RAW_INPUT_CONTROLLER       0x02ff

/* USB usage pages */
#define USB_USAGEPAGE_GENERIC_DESKTOP   0x0001
#define USB_USAGEPAGE_BUTTON            0x0009

/* USB usages for USAGE_PAGE_GENERIC_DESKTOP */
#define USB_USAGE_GENERIC_POINTER               0x0001
#define USB_USAGE_GENERIC_MOUSE                 0x0002
#define USB_USAGE_GENERIC_JOYSTICK              0x0004
#define USB_USAGE_GENERIC_GAMEPAD               0x0005
#define USB_USAGE_GENERIC_KEYBOARD              0x0006
#define USB_USAGE_GENERIC_KEYPAD                0x0007
#define USB_USAGE_GENERIC_MULTIAXISCONTROLLER   0x0008
#define USB_USAGE_GENERIC_X                     0x0030
#define USB_USAGE_GENERIC_Y                     0x0031
#define USB_USAGE_GENERIC_Z                     0x0032
#define USB_USAGE_GENERIC_RX                    0x0033
#define USB_USAGE_GENERIC_RY                    0x0034
#define USB_USAGE_GENERIC_RZ                    0x0035
#define USB_USAGE_GENERIC_SLIDER                0x0036
#define USB_USAGE_GENERIC_DIAL                  0x0037
#define USB_USAGE_GENERIC_WHEEL                 0x0038
#define USB_USAGE_GENERIC_HAT                   0x0039

#endif /* usb_ids_h_ */

/* vi: set ts=4 sw=4 expandtab: */
