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
#ifndef RUUVITAG_B_H
#define RUUVITAG_B_H

// LEDs definitions for RuuviTag B
#define LEDS_NUMBER    2
#define LED_1          17
#define LED_2          19
#define LEDS_ACTIVE_STATE 0

#define LEDS_LIST { LED_1, LED_2 }
#define LED_RED   LED_1
#define LED_GREEN LED_2

#define BUTTONS_NUMBER 1
#define BUTTON_1       13
#define BUTTONS_ACTIVE_STATE 0
#define BUTTONS_LIST { BUTTON_1 }

#define SPIM0_SCK_PIN   29    // SPI clock GPIO pin number.
#define SPIM0_MOSI_PIN  25    // SPI Master Out Slave In GPIO pin number.
#define SPIM0_MISO_PIN  28    // SPI Master In Slave Out GPIO pin number.
#define SPIM0_SS_ACCELERATION_PIN   8  // SPI Slave Select (accelerometer)
#define SPIM0_SS_ENVIRONMENTAL_PIN  3  // SPI Slave Select (BME280)
#define SPI_SS_LIST {SPIM0_SS_ACCELERATION_PIN, SPIM0_SS_ENVIRONMENTAL_PIN}

#define INT_ACC1_PIN       2  // Accelerometer interrupt 1
#define INT_ACC2_PIN       6  // Accelerometer interrupt 2

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source       = NRF_CLOCK_LF_SRC_XTAL,      \
                                 .rc_ctiv      = 0,                          \
                                 .rc_temp_ctiv = 0,                          \
                                 .accuracy     = NRF_CLOCK_LF_ACCURACY_20_PPM}
#endif
