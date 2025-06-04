/**
 * Copyright (c) 2014 - 2017, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#ifndef RUUVI_BOARD_RUUVITAG_C_H
#define RUUVI_BOARD_RUUVITAG_C_H
#include "ruuvi_boards.h"
#define RB_MODEL_STRING              "RuuviTag C"
#define RB_MANUFACTURER_STRING       "Ruuvi Innovations Ltd"
#define RB_BLE_NAME_STRING           "Ruuvi"
// Radio definitions
#define RB_BLE_MANUFACTURER_ID (0x0499U) // Ruuvi Innovations
#define RB_TX_POWER_0 (-40)
#define RB_TX_POWER_1 (-30)
#define RB_TX_POWER_2 (-20)
#define RB_TX_POWER_3 (-12)
#define RB_TX_POWER_4 (-8)
#define RB_TX_POWER_5 (-4)
#define RB_TX_POWER_6 (0)
#define RB_TX_POWER_7 (4)
#define RB_TX_POWER_LIST { RB_TX_POWER_0, \
                           RB_TX_POWER_1, \
                           RB_TX_POWER_2, \
                           RB_TX_POWER_3, \
                           RB_TX_POWER_4, \
                           RB_TX_POWER_5, \
                           RB_TX_POWER_6, \
                           RB_TX_POWER_7 }
#define RB_TX_POWER_MIN RB_TX_POWER_0
#define RB_TX_POWER_MAX RB_TX_POWER_7
#define RB_BLE_2MBPS_SUPPORTED     (1U)
#define RB_BLE_CODED_SUPPORTED     (0U)

// LED definitions for RuuviTag C
#define RB_LEDS_NUMBER               (2U)
#define RB_LED_1                     RB_PORT_PIN_MAP(0, 17)
#define RB_LED_2                     RB_PORT_PIN_MAP(0, 19)
#define RB_LEDS_ACTIVE_STATE         { (0U), (0U) }
#define RB_LEDS_LIST                 { RB_LED_1, RB_LED_2 }
#define RB_LED_RED                   RB_LED_1
#define RB_LED_GREEN                 RB_LED_2
#define RB_LED_ACTIVITY              RB_LED_GREEN
#define RB_LED_STATUS_OK             RB_LED_GREEN
#define RB_LED_STATUS_ERROR          RB_LED_RED
#define RB_LED_BUTTON_PRESS          RB_LED_GREEN
#define RB_LED_CONFIG_ENABLED        RB_LED_RED

// Button definitions for RuuviTag C
#define RB_BUTTON_PWR_PIN_NUMBER     (0U)
#define RB_BUTTON_PWR_PINS           {  }
#define RB_BUTTONS_NUMBER            (1U)
#define RB_BUTTON_1                  RB_PORT_PIN_MAP(0, 13)
#define RB_BUTTONS_ACTIVE_STATE      { (0U) }
#define RB_BUTTONS_LIST              { RB_BUTTON_1 }
#define RB_BUTTON_DEBOUNCE_PERIOD_MS (50U)
#define RB_BUTTON_ENABLE_CONFIG      RB_BUTTON_1

// SPI definitions for RuuviTag C
#define RB_SPI_SCLK_PIN              RB_PORT_PIN_MAP(0, 29) // SPI clock GPIO pin number.
#define RB_SPI_MOSI_PIN              RB_PORT_PIN_MAP(0, 25) // SPI Master Out Slave In GPIO pin number.
#define RB_SPI_MISO_PIN              RB_PORT_PIN_MAP(0, 28) // SPI Master In Slave Out GPIO pin number.
#define RB_SPI_SS_ACCELEROMETER_PIN  RB_PORT_PIN_MAP(0,  8)  // SPI Slave Select (accelerometer)
#define RB_SPI_SS_ENVIRONMENTAL_PIN  RB_PORT_PIN_MAP(0,  3)  // SPI Slave Select (BME280)
#define RB_SPI_SS_LIST               {RB_SPI_SS_ACCELEROMETER_PIN, RB_SPI_SS_ENVIRONMENTAL_PIN}
#define RB_SPI_SS_NUMBER             (2U)
#define RB_SPI_FREQUENCY_1M          (0U)
#define RB_SPI_FREQUENCY_2M          (1U)
#define RB_SPI_FREQUENCY_4M          (2U)
#define RB_SPI_FREQUENCY_8M          (3U)
#define RB_SPI_FREQ                  RB_SPI_FREQUENCY_8M

// I2C definitions for RuuviTag C
#define RB_I2C_ENABLED               (0U)
#define RB_I2C_SDA_PIN               RB_PORT_PIN_MAP(0, 6)
#define RB_I2C_SCL_PIN               RB_PORT_PIN_MAP(0, 7)
#define RB_I2C_FREQUENCY_100k        (0U)
#define RB_I2C_FREQUENCY_250k        (1U)
#define RB_I2C_FREQUENCY_400k        (2U)
#define RB_I2C_FREQ                  RB_I2C_FREQUENCY_100k

// UART definitions for RuuviTag C
#define RB_UART_TX_PIN               RB_PORT_PIN_MAP(0, 6)
#define RB_UART_RX_PIN               RB_PORT_PIN_MAP(0, 7)
#define RB_UART_CTS_PIN              RB_PIN_UNUSED
#define RB_UART_RTS_PIN              RB_PIN_UNUSED
#define RB_HWFC_ENABLED              (0U)
#define RB_PARITY_ENABLED            (0U)
#define RB_UART_BAUDRATE_9600        (0U)
#define RB_UART_BAUDRATE_115200      (1U)
#define RB_UART_BAUDRATE             RB_UART_BAUDRATE_115200

// PYD definitions for RuuviTag C
#define RB_PYD_SERIN_PIN             RB_PORT_PIN_MAP(0, 9)
#define RB_PYD_DL_PIN                RB_PORT_PIN_MAP(0, 10)
#define RB_INT_MOTION_PIN            RB_PYD_DL_PIN

// Interrupt definitions for RuuviTag C
#define RB_INT_ACC1_PIN              RB_PORT_PIN_MAP(0, 2)
#define RB_INT_ACC2_PIN              RB_PORT_PIN_MAP(0, 6)

// Total number of GPIO pins
#define RB_GPIO_NUMBER               (32U)
// GPIO integration test I/O, connect these on devkit or GPIO test fails.
#define RB_GPIO_TEST_INPUT           RB_PIN_UNUSED
#define RB_GPIO_TEST_OUTPUT          RB_PIN_UNUSED

// Peripherals
#define RB_DCDC_INTERNAL_INSTALLED (1U)
#define RB_NFC_INTERNAL_INSTALLED  (0U)
#define RB_FLASH_PAGE_SIZE         (0x1000U) //!< Bytes
#define RB_FLASH_SPACE_SMALL       (0U)      //!< Relative, "conserve all flash you can"
#define RB_FLASH_SPACE_MEDIUM      (1U)      //!< Relative, "No need to optimize"
#define RB_FLASH_SPACE_LARGE       (2U)      //!< Relative, "Lots of free storage"
#define RB_FLASH_SPACE_AVAILABLE   RB_FLASH_SPACE_MEDIUM
#define RB_RTC_INSTANCES           (3U)
#define RB_FPU_ENABLED             (1U)      //!< HW Floating Point Unit

// Available sensors
#define RB_MOTION_PYD_PRESENT             (1U)
#define RB_ENVIRONMENTAL_BME280_PRESENT   (1U)
#define RB_ENVIRONMENTAL_BME280_SPI_USE   (1U)
#define RB_ENVIRONMENTAL_BME280_I2C_USE   (0U)
#define RB_BME280_I2C_ADDRESS             (0x76U) //!< Depends on SDO pin setting, LOW 0x76 HIGH 0x77
#define RB_ENVIRONMENTAL_DPS310_PRESENT   (0U)
#define RB_ENVIRONMENTAL_DPS310_SPI_USE   (1U)
#define RB_ENVIRONMENTAL_MCU_PRESENT      (1U)
#define RB_ENVIRONMENTAL_SHTCX_PRESENT    (0U)    //!< Some boards have both BME280 and SHTCX
#define RB_SHTCX_I2C_ADDRESS              (0x70U) //!< Static
#define RB_SHTCX_I2C_MAX_SPD RB_I2C_FREQUENCY_400k
#define RB_ACCELEROMETER_LIS2DH12_PRESENT (1U)
#define RB_ACCELEROMETER_LIS2DH12_SPI_USE (1U)
#define RB_ACCELEROMETER_LIS2DH12_I2C_USE (0U)
#define RB_ENVIRONMENTAL_TMP117_PRESENT   (0U)
#define RB_TMP117_I2C_ADDRESS             (0x48U) //!< 0x48-0x4B depending on ADD0 pin
#define RB_TMP117_I2C_MAX_SPD RB_I2C_FREQUENCY_400k
#define RB_ENVIRONMENTAL_TMP117EXT_PRESENT   (0U)
#define RB_TMP117EXT_I2C_ADDRESS          (0x49U) //!< 0x48-0x4B depending on ADD0 pin
#define RB_TMP117EXT_I2C_MAX_SPD RB_I2C_FREQUENCY_100k
#define RB_I2C_MAX_SPD RB_I2C_FREQUENCY_400k

#if RB_ACCELEROMETER_LIS2DH12_PRESENT
#define RB_INT_LEVEL_PIN RB_INT_ACC2_PIN
#define RB_INT_FIFO_PIN  RB_INT_ACC1_PIN
#endif

#endif
