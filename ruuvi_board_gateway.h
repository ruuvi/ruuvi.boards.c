#ifndef RUUVI_BOARD_GATEWAY_H
#define RUUVI_BOARD_GATEWAY_H
/** 
 * @file ruuvi_board_gateway.h
 * @author Otso Jousimaa <otso@ojousima.net>
 * @copyright Ruuvi Innovations Ltd, License BSD-3-Clause.
 * @data 2020-06-05
 *
 * Common definitions for Ruuvi Gateway.
 */

#include "ruuvi_boards.h"

#define RB_NRF_STATUS_PIN       RB_GWBUS_1    //!< nRF selftest, reset pin.
#define RB_UART_NRF2ESP         RB_GWBUS_3    //!< UART NRF -> ESP
#define RB_UART_ESP2NRF         RB_GWBUS_2    //!< UART ESP -> NRF
#define RB_UART_ESP_RTS         RB_PIN_UNUSED 
#define RB_UART_ESP_CTS         RB_PIN_UNUSED
#define RB_HWFC_ENABLED         0
#define RB_PARITY_ENABLED       0
#define RB_UART_BAUDRATE_9600   0
#define RB_UART_BAUDRATE_115200 1
#define RB_UART_BAUDRATE        RB_UART_BAUDRATE_115200

#endif
