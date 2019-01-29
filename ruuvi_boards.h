/**
 * Ruuvi board selection header, inspired by Nordic Semiconductor "boards.h" and "custom_board.h"
 *
 * If you wish to compile for your proprietary board, please define BOARD_PROPIETARY in C preprocessor macros.
 * You should also define the board name, for example BOARD_RUUVITAG_B for the preprocessor.
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