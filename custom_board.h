/**
 * Nordic SDK expects to find a "custom_board.h" which defines a board to include.
 *
 * License: BSD-3
 * Author: Otso Jousimaa <otso@ojousima.net>
 */
#ifdef BOARD_PROPRIETARY
  #include "proprietary_board.h"
#endif
#ifdef BOARD_RUUVITAG_B
  #include "ruuvi_board_ruuvitag_b.h"
#endif