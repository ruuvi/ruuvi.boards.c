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
#ifndef RUUVI_BOARD_RUUVITAG_B_H
#define RUUVI_BOARD_RUUVITAG_B_H

#define RUUVI_BOARD_MODEL_STRING              "RUUVITAG_B"
#define RUUVI_BOARD_MANUFACTURER_STRING       "Ruuvi Innovations Ltd"

// LED definitions for RuuviTag B
#define RUUVI_BOARD_LEDS_NUMBER               2
#define RUUVI_BOARD_LED_1                     17
#define RUUVI_BOARD_LED_2                     19
#define RUUVI_BOARD_LEDS_ACTIVE_STATE         0
#define RUUVI_BOARD_LEDS_LIST                 { RUUVI_BOARD_LED_1, RUUVI_BOARD_LED_2 }
#define RUUVI_BOARD_LED_RED                   RUUVI_BOARD_LED_1
#define RUUVI_BOARD_LED_GREEN                 RUUVI_BOARD_LED_2

// Button definitions for RuuviTag B
#define RUUVI_BOARD_BUTTONS_NUMBER            1
#define RUUVI_BOARD_BUTTON_1                  13
#define RUUVI_BOARD_BUTTONS_ACTIVE_STATE      0
#define RUUVI_BOARD_BUTTONS_LIST              { RUUVI_BOARD_BUTTON_1 }
#define RUUVI_BOARD_BUTTON_DEBOUNCE_PERIOD_MS 50

// SPI definitions for RuuviTag B
#define RUUVI_BOARD_SPI_SCLK_PIN              29 // SPI clock GPIO pin number.
#define RUUVI_BOARD_SPI_MOSI_PIN              25 // SPI Master Out Slave In GPIO pin number.
#define RUUVI_BOARD_SPI_MISO_PIN              28 // SPI Master In Slave Out GPIO pin number.
#define RUUVI_BOARD_SPI_SS_ACCELEROMETER_PIN  8  // SPI Slave Select (accelerometer)
#define RUUVI_BOARD_SPI_SS_ENVIRONMENTAL_PIN  3  // SPI Slave Select (BME280)
#define RUUVI_BOARD_SPI_SS_LIST               {RUUVI_BOARD_SPI_SS_ACCELEROMETER_PIN, RUUVI_BOARD_SPI_SS_ENVIRONMENTAL_PIN}
#define RUUVI_BOARD_SPI_FREQUENCY_1M          0
#define RUUVI_BOARD_SPI_FREQUENCY_2M          1
#define RUUVI_BOARD_SPI_FREQUENCY_4M          2
#define RUUVI_BOARD_SPI_FREQUENCY_8M          3
#define RUUVI_BOARD_SPI_FREQ                  RUUVI_BOARD_SPI_FREQUENCY_8M

#define RUUVI_BOARD_I2C_SDA_PIN               4
#define RUUVI_BOARD_I2C_SCL_PIN               5
#define RUUVI_BOARD_I2C_FREQUENCY_100k        0
#define RUUVI_BOARD_I2C_FREQUENCY_250k        1
#define RUUVI_BOARD_I2C_FREQUENCY_400k        2
#define RUUVI_BOARD_I2C_FREQ                  RUUVI_BOARD_I2C_FREQUENCY_100k

// Interrupt definitions for RuuviTag B
#define RUUVI_BOARD_INT_ACC1_PIN              2  // Accelerometer interrupt 1
#define RUUVI_BOARD_INT_ACC2_PIN              6  // Accelerometer interrupt 2

// Total number of GPIO pins
#define RUUVI_BOARD_GPIO_NUMBER               32

// DC/DC converters
#define RUUVI_BOARD_DCDC_INTERNAL_INSTALLED   1

// Available sensors
#define RUUVI_BOARD_ENVIRONMENTAL_BME280_PRESENT   1
#define RUUVI_BOARD_ENVIRONMENTAL_BME280_SPI_USE   1
#define RUUVI_BOARD_ENVIRONMENTAL_BME280_I2C_USE   0
#define RUUVI_BOARD_BME280_I2C_ADDRESS             0x76 //<! Depends on SDO pin setting, LOW 0x76 HIGH 0x77
#define RUUVI_BOARD_ENVIRONMENTAL_MCU_PRESENT      1
#define RUUVI_BOARD_ACCELEROMETER_LIS2DH12_PRESENT 1
#define RUUVI_BOARD_ACCELEROMETER_LIS2DH12_SPI_USE 1
#define RUUVI_BOARD_ACCELEROMETER_LIS2DH12_I2C_USE 0

// Radio definitions
#define RUUVI_BOARD_BLE_MANUFACTURER_ID 0x0499 // Ruuvi Innovations
#define RUUVI_BOARD_TX_POWER_0 -40
#define RUUVI_BOARD_TX_POWER_1 -30
#define RUUVI_BOARD_TX_POWER_2 -20
#define RUUVI_BOARD_TX_POWER_3 -12
#define RUUVI_BOARD_TX_POWER_4 -8
#define RUUVI_BOARD_TX_POWER_5 -4
#define RUUVI_BOARD_TX_POWER_6 -0
#define RUUVI_BOARD_TX_POWER_7  4
#define RUUVI_BOARD_TX_POWER_LIST { RUUVI_BOARD_TX_POWER_0 \\
                                    RUUVI_BOARD_TX_POWER_1 \\
                                    RUUVI_BOARD_TX_POWER_2 \\
                                    RUUVI_BOARD_TX_POWER_3 \\
                                    RUUVI_BOARD_TX_POWER_4 \\
                                    RUUVI_BOARD_TX_POWER_5 \\
                                    RUUVI_BOARD_TX_POWER_6 \\
                                    RUUVI_BOARD_TX_POWER_7 \\}
#define RUUVI_BOARD_TX_POWER_MIN RUUVI_BOARD_TX_POWER_0
#define RUUVI_BOARD_TX_POWER_MAX RUUVI_BOARD_TX_POWER_7

#endif