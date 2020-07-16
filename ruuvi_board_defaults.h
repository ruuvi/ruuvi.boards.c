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

/**
 * Default values for board configuration. 
 */
#ifndef RUUVI_BOARD_DEFAULTS_H
#define RUUVI_BOARD_DEFAULTS_H
#include "ruuvi_boards.h"
#ifndef RB_MODEL_STRING
#define RB_MODEL_STRING              "DEFAULT_BOARD"
#endif 
#ifndef RB_MANUFACTURER_STRING
#define RB_MANUFACTURER_STRING       "No Company"
#endif 
#ifndef RB_BLE_NAME_STRING
#define RB_BLE_NAME_STRING           "Devel"
#endif

// Radio definitions
#ifndef RB_BLE_MANUFACTURER_ID
#define RB_BLE_MANUFACTURER_ID 0xFFFF // Interoperability testing ID.
#endif

#ifndef RB_TX_POWER_LIST
#define RB_TX_POWER_0 -40
#define RB_TX_POWER_1 -30
#define RB_TX_POWER_2 -20
#define RB_TX_POWER_3 -12
#define RB_TX_POWER_4 -8
#define RB_TX_POWER_5 -4
#define RB_TX_POWER_6 -0
#define RB_TX_POWER_7  4
#define RB_TX_POWER_LIST { RB_TX_POWER_0 \\
                                    RB_TX_POWER_1 \\
                                    RB_TX_POWER_2 \\
                                    RB_TX_POWER_3 \\
                                    RB_TX_POWER_4 \\
                                    RB_TX_POWER_5 \\
                                    RB_TX_POWER_6 \\
                                    RB_TX_POWER_7 }
#define RB_TX_POWER_MIN RB_TX_POWER_0
#define RB_TX_POWER_MAX RB_TX_POWER_7
#endif 

#ifndef RB_BLE_2MBPS_SUPPORTED
#define RB_BLE_2MBPS_SUPPORTED     1
#endif

#ifndef RB_BLE_CODED_SUPPORTED
#define RB_BLE_CODED_SUPPORTED     0
#endif

// LED definitions for RuuviTag B
#ifndef RB_LEDS_NUMBER
#define RB_LEDS_NUMBER               2
#endif
#ifndef RB_LED_1
#define RB_LED_1                     RB_PORT_PIN_MAP(0, 17)
#endif
#ifndef RB_LED_2
#define RB_LED_2                     RB_PORT_PIN_MAP(0, 19)
#endif
#ifndef RB_LEDS_ACTIVE_STATE
#define RB_LEDS_ACTIVE_STATE         {0, 0}
#endif
#ifndef RB_LEDS_LIST
#define RB_LEDS_LIST                 { RB_LED_1, RB_LED_2 }
#endif
#ifndef RB_LED_RED
#define RB_LED_RED                   RB_LED_1
#endif
#ifndef RB_LED_GREEN
#define RB_LED_GREEN                 RB_LED_2
#endif
#ifndef RB_LED_ACTIVITY
#define RB_LED_ACTIVITY              RB_LED_GREEN
#endif
#ifndef RB_LED_STATUS_OK
#define RB_LED_STATUS_OK             RB_LED_GREEN
#endif
#ifndef RB_LED_STATUS_ERROR
#define RB_LED_STATUS_ERROR          RB_LED_RED
#endif

// Button definitions for RuuviTag B
#ifndef RB_BUTTON_PWR_PIN_NUMBER
#define RB_BUTTON_PWR_PIN_NUMBER     0
#endif
#ifndef RB_BUTTON_PWR_PINS
#define RB_BUTTON_PWR_PINS           {  }
#endif
#ifndef RB_BUTTONS_NUMBER
#define RB_BUTTONS_NUMBER            1
#endif
#ifndef RB_BUTTON_1
#define RB_BUTTON_1                  RB_PORT_PIN_MAP(0, 13)
#endif
#ifndef RB_BUTTONS_ACTIVE_STATE
#define RB_BUTTONS_ACTIVE_STATE      { 0 }
#endif
#ifndef RB_BUTTONS_LIST
#define RB_BUTTONS_LIST              { RB_BUTTON_1 }
#endif
#ifndef RB_BUTTON_DEBOUNCE_PERIOD_MS
#define RB_BUTTON_DEBOUNCE_PERIOD_MS 50
#endif

// SPI definitions for RuuviTag B
#ifndef RB_SPI_SCLK_PIN
#define RB_SPI_SCLK_PIN              RB_PORT_PIN_MAP(0, 29) // SPI clock GPIO pin number.
#endif
#ifndef RB_SPI_MOSI_PIN
#define RB_SPI_MOSI_PIN              RB_PORT_PIN_MAP(0, 25) // SPI Master Out Slave In GPIO pin number.
#endif
#ifndef RB_SPI_MISO_PIN
#define RB_SPI_MISO_PIN              RB_PORT_PIN_MAP(0, 28) // SPI Master In Slave Out GPIO pin number.
#endif
#ifndef RB_SPI_SS_ACCELEROMETER_PIN
#define RB_SPI_SS_ACCELEROMETER_PIN  RB_PORT_PIN_MAP(0,  8)  // SPI Slave Select (accelerometer)
#endif
#ifndef RB_SPI_SS_ENVIRONMENTAL_PIN
#define RB_SPI_SS_ENVIRONMENTAL_PIN  RB_PORT_PIN_MAP(0,  3)  // SPI Slave Select (BME280)
#endif
#ifndef RB_SPI_SS_LIST
#define RB_SPI_SS_LIST               {RB_SPI_SS_ACCELEROMETER_PIN, RB_SPI_SS_ENVIRONMENTAL_PIN}
#endif
#ifndef RB_SPI_SS_NUMBER
#define RB_SPI_SS_NUMBER             2
#endif
#ifndef RB_SPI_FREQUENCY_1M
#define RB_SPI_FREQUENCY_1M          0
#endif
#ifndef RB_SPI_FREQUENCY_2M
#define RB_SPI_FREQUENCY_2M          1
#endif
#ifndef RB_SPI_FREQUENCY_4M
#define RB_SPI_FREQUENCY_4M          2
#endif
#ifndef RB_SPI_FREQUENCY_8M
#define RB_SPI_FREQUENCY_8M          3
#endif
#ifndef RB_SPI_FREQ
#define RB_SPI_FREQ                  RB_SPI_FREQUENCY_8M
#endif

// I2C definitions for RuuviTag B
#ifndef RB_I2C_SDA_PIN
#define RB_I2C_SDA_PIN               RB_PORT_PIN_MAP(0, 4)
#endif
#ifndef RB_I2C_SCL_PIN
#define RB_I2C_SCL_PIN               RB_PORT_PIN_MAP(0, 5)
#endif
#ifndef RB_I2C_FREQUENCY_100k
#define RB_I2C_FREQUENCY_100k        0
#endif
#ifndef RB_I2C_FREQUENCY_250k
#define RB_I2C_FREQUENCY_250k        1
#endif
#ifndef RB_I2C_FREQUENCY_400k
#define RB_I2C_FREQUENCY_400k        2
#endif
#ifndef RB_I2C_FREQ
#define RB_I2C_FREQ                  RB_I2C_FREQUENCY_100k
#endif

// UART definitions for RuuviTag B
#ifndef RB_UART_TX_PIN
#define RB_UART_TX_PIN               RB_PORT_PIN_MAP(0, 4)
#endif
#ifndef RB_UART_RX_PIN
#define RB_UART_RX_PIN               RB_PORT_PIN_MAP(0, 5)
#endif
#ifndef RB_UART_CTS_PIN
#define RB_UART_CTS_PIN              RB_PIN_UNUSED
#endif
#ifndef RB_UART_RTS_PIN
#define RB_UART_RTS_PIN              RB_PIN_UNUSED
#endif
#ifndef RB_HWFC_ENABLED
#define RB_HWFC_ENABLED              0
#endif
#ifndef RB_PARITY_ENABLED
#define RB_PARITY_ENABLED            0
#endif
#ifndef RB_UART_BAUDRATE_9600
#define RB_UART_BAUDRATE_9600        0
#endif
#ifndef RB_UART_BAUDRATE_115200
#define RB_UART_BAUDRATE_115200      1
#endif
#ifndef RB_UART_BAUDRATE
#define RB_UART_BAUDRATE             RB_UART_BAUDRATE_115200
#endif

// Interrupt definitions for RuuviTag B
#ifndef RB_INT_ACC1_PIN
#define RB_INT_ACC1_PIN              RB_PORT_PIN_MAP(0, 2)
#endif
#ifndef RB_INT_ACC2_PIN
#define RB_INT_ACC2_PIN              RB_PORT_PIN_MAP(0, 6)
#endif

// Total number of GPIO pins
#ifndef RB_GPIO_NUMBER
#define RB_GPIO_NUMBER               32
#endif
// GPIO integration test I/O, connect these on devkit or GPIO test fails.
#ifndef RB_GPIO_TEST_INPUT
#define RB_GPIO_TEST_INPUT           RB_PORT_PIN_MAP(0, 13)
#endif
#ifndef RB_GPIO_TEST_OUTPUT
#define RB_GPIO_TEST_OUTPUT          RB_PORT_PIN_MAP(0, 31)
#endif

// Peripherals
#ifndef RB_DCDC_INTERNAL_INSTALLED
#define RB_DCDC_INTERNAL_INSTALLED 1
#endif
#ifndef RB_NFC_INTERNAL_INSTALLED
#define RB_NFC_INTERNAL_INSTALLED  1
#endif
#ifndef RB_APP_FLASH_SIZE
#define RB_APP_FLASH_SIZE          0x5000 //!< Bytes
#endif
#ifndef RB_APP_PAGES
#define RB_APP_PAGES               5      //!< Erase units
#endif
#ifndef RB_RTC_INSTANCES
#define RB_RTC_INSTANCES           3
#endif
#ifndef RB_FPU_ENABLED
#define RB_FPU_ENABLED             1      //!< HW Floating Point Unit
#endif

// Available sensors
#ifndef RB_ENVIRONMENTAL_BME280_PRESENT
#define RB_ENVIRONMENTAL_BME280_PRESENT   1
#endif
#ifndef RB_ENVIRONMENTAL_BME280_SPI_USE
#define RB_ENVIRONMENTAL_BME280_SPI_USE   1
#endif
#ifndef RB_ENVIRONMENTAL_BME280_I2C_USE
#define RB_ENVIRONMENTAL_BME280_I2C_USE   0
#endif
#ifndef RB_BME280_I2C_ADDRESS
#define RB_BME280_I2C_ADDRESS             0x76 //!< Depends on SDO pin setting, LOW 0x76 HIGH 0x77
#endif
#ifndef RB_ENVIRONMENTAL_MCU_PRESENT
#define RB_ENVIRONMENTAL_MCU_PRESENT      1
#endif
#ifndef RB_ENVIRONMENTAL_SHTCX_PRESENT
#define RB_ENVIRONMENTAL_SHTCX_PRESENT    1    //!< Some boards have both BME280 and SHTCX
#endif
#ifndef RB_SHTCX_I2C_ADDRESS
#define RB_SHTCX_I2C_ADDRESS              0x70 //!< Static
#endif
#ifndef RB_ACCELEROMETER_LIS2DH12_PRESENT
#define RB_ACCELEROMETER_LIS2DH12_PRESENT 1
#endif
#ifndef RB_ACCELEROMETER_LIS2DH12_SPI_USE
#define RB_ACCELEROMETER_LIS2DH12_SPI_USE 1
#endif
#ifndef RB_ACCELEROMETER_LIS2DH12_I2C_USE
#define RB_ACCELEROMETER_LIS2DH12_I2C_USE 0
#endif

/** 
 * This creates a dependency to ruuvi.drivers.c implementation, OTOH on LIS2DH12 
 * the assignment is possible only in one way. 
 */ 
#if RB_ACCELEROMETER_LIS2DH12_PRESENT
#ifndef RB_INT_LEVEL_PIN
#define RB_INT_LEVEL_PIN RB_INT_ACC1_PIN
#endif
#ifndef RB_INT_FIFO_PIN
#define RB_INT_FIFO_PIN  RB_INT_ACC2_PIN
#endif
#endif

#endif