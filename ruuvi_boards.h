/**
 * Ruuvi board selection header, inspired by Nordic Semiconductor "boards.h" and "custom_board.h"
 *
 * If you wish to compile for your proprietary board, please define BOARD_PROPIETARY in C preprocessor macros.
 * You should also define the board name, for example BOARD_RUUVITAG_B for the preprocessor.
 *
 * License: BSD-3
 * Author: Otso Jousimaa <otso@ojousima.net>
 */
#ifndef RUUVI_BOARDS_H
#define RUUVI_BOARDS_H

#define RUUVI_BOARDS_SEMVER "0.5.0"
/** @brief Port+pin definition for GPIO pin. */
#define RB_PORT_PIN_MAP(PORT, PIN) ((PORT<<8) + (PIN))
/** @brief Pin not in use on this board. */
#define RB_PIN_UNUSED              (0xFFFF)

#ifdef BOARD_PROPRIETARY
#   include "proprietary_board.h"
#endif
#ifdef BOARD_RAUNO
#   include "ruuvi_board_rauno.h"
#endif
#ifdef BOARD_RUUVITAG_B
#   include "ruuvi_board_ruuvitag_b.h"
#endif
#ifdef BOARD_KAARLE
#   include "ruuvi_board_kaarle.h"
#endif
#ifdef BOARD_KALERVO
#   include "ruuvi_board_kalervo.h"
#endif
#ifdef BOARD_KEIJO
#   include "ruuvi_board_keijo.h"
#endif
#ifdef BOARD_PCA10040
#   include "ruuvi_board_pca10040.h"
#endif
#ifdef BOARD_PCA10056E
#   include "ruuvi_board_pca10056e.h"
#endif
#ifdef BOARD_RUUVIGW_NRF
#   include "ruuvi_board_gwnrf.h"
#endif

#endif