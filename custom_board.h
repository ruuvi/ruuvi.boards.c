/**
 * Nordic SDK expects to find a "custom_board.h" which defines a board to include.
 *
 * License: BSD-3
 * Author: Otso Jousimaa <otso@ojousima.net>
 */
#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#ifdef BOARD_PROPRIETARY
  #include "proprietary_board.h"
#else 
  #include "ruuvi_boards.h"
#endif

// Glue logic for Nordic SDK BSP package
#define BUTTON_PULL          NRF_GPIO_PIN_PULLUP
#define BUTTONS_NUMBER       RB_BUTTONS_NUMBER
#define BUTTONS_ACTIVE_STATE 0 // BSP doesn't accept list.
#define BUTTONS_LIST         RB_BUTTONS_LIST

#define LEDS_NUMBER          RB_LEDS_NUMBER
#define LEDS_ACTIVE_STATE    0 // BSP doesn't accept list.
#define LEDS_LIST            RB_LEDS_LIST


#endif

