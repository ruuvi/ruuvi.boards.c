/* @file ruuvi.boards.c/ruuvi_boards.h
 * @author: Otso Jousimaa <otso@ojousima.net>
 * @date  2018-07-23
 * @brief Provide Selection for a single board configuration
 * @detail For example: from targets/ruuvitag_b/armgcc/Makefile:CFLAGS += -DBOARD_RUUVITAG_B
 *  Includes one definition file                       (for example ruuvi_board_ruuvitag_b.h ).
 *  Then includes the defaults values, unless already defined in the board specific header.
 *
 *  Inspired by Nordic Semiconductor "boards.h" and "custom_board.h"
 *
 * To compile for proprietary board, define BOARD_PROPIETARY in Makefile and
 *       define the board name, for example BOARD_SEG
 *
 * This is included in:
 *    ruuvi.boards.c/ ruuvi_board_defaults.h, _ruuvitag_b.h, _gwnrf.h, _kalervo.h, _pca10056e.h, _pca10040.h,
 *                    _kaarle.h, _rauno.h, _keijo.h, custom_board.h
 *
 *    app_log.h, app_button.c, app_button.h, app_sensor.c, app_sensor.h, app_comms.c, app_power.c, app_led.c
 *    application_config/app_config.h
 *    run_integration_tests.c
 *    ruuvi.drivers.c/src/nrf5_sdk15_platform/i2c/ruuvi_nrf5_sdk15_i2c.c
 *
 * @copyright Ruuvi Innovations Ltd, 2021, license BSD-3-Clause.
 */
#ifndef RUUVI_BOARDS_H
#define RUUVI_BOARDS_H

#define RUUVI_BOARDS_SEMVER "3.8.0"


/** @brief MACRO Port + Pin for GPIO pin. */
#define RB_PORT_PIN_MAP(PORT, PIN) (((PORT) << 8u) + (PIN))   // example  2,4   0x0204

/* @brief default all pins unused*/
#define RB_PIN_UNUSED              (0xFFFFU)

#ifdef BOARD_PROPRIETARY
#   include "proprietary_board.h"
#elif defined BOARD_RAUNO
#   include "ruuvi_board_rauno.h"
#elif defined BOARD_RUUVITAG_B
#   include "ruuvi_board_ruuvitag_b.h"
#elif defined BOARD_KAARLE
#   include "ruuvi_board_kaarle.h"
#elif defined BOARD_KALERVO
#   include "ruuvi_board_kalervo.h"
#elif defined BOARD_KEIJO
#   include "ruuvi_board_keijo.h"
#elif defined BOARD_PCA10040
#   include "ruuvi_board_pca10040.h"
#elif defined BOARD_PCA10056E
#   include "ruuvi_board_pca10056e.h"
#elif defined BOARD_PCA10059
#   include "ruuvi_board_pca10059.h"
#elif defined BOARD_RUUVIGW_NRF
#   include "ruuvi_board_gwnrf.h"
#elif defined BOARD_RUUVIGW_ESP
#   include "ruuvi_board_gwesp.h"
#else
#   error "Define your board in ruuvi.boards.c/ruuvi_boards.h or use PROPRIETARY."
#endif

#include "ruuvi_board_defaults.h"  // Always add in the default settings (perhaps superseded by above)

#endif  //  RUUVI_BOARDS_H
