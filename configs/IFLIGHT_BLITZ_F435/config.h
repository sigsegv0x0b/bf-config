/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU                   AT32F435G

#define BOARD_NAME                      IFLIGHT_BLITZ_F435
#define MANUFACTURER_ID                 IFRC

// LEDS
#define LED0_PIN                        PC15
#define LED0_INVERTED
#define BEEPER_PIN                      PB2
#define BEEPER_INVERTED
#define LED_STRIP_PIN                   PA8

// MOTORS & SERVOS
#define MOTOR1_PIN                      PB0
#define MOTOR2_PIN                      PB1
#define MOTOR3_PIN                      PC8
#define MOTOR4_PIN                      PC9
#define MOTOR5_PIN                      PB6
#define MOTOR6_PIN                      PB7
#define MOTOR7_PIN                      PB11
#define MOTOR8_PIN                      PB10
#define RX_PPM_PIN                      PA3

#define DEFAULT_DSHOT_BURST             DSHOT_DMAR_AUTO
#define DEFAULT_DSHOT_BITBANG           DSHOT_BITBANG_ON

// SPI
#define SPI1_SCK_PIN                    PA5
#define SPI1_SDI_PIN                    PA6
#define SPI1_SDO_PIN                    PA7
#define SPI1_NSS_PIN                    PA4

#define SPI2_SCK_PIN                    PB13
#define SPI2_SDI_PIN                    PB14
#define SPI2_SDO_PIN                    PB15
#define SPI2_NSS_PIN                    PB12

#define SPI3_SCK_PIN                    PB3
#define SPI3_SDI_PIN                    PB4
#define SPI3_SDO_PIN                    PB5
#define SPI3_NSS_PIN                    PA15

// GYRO & ACC
#define USE_ACC
#define USE_GYRO
#define USE_ACC_SPI_MPU6000
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_ICM42688P
#define USE_ACCGYRO_BMI270
#define GYRO_1_EXTI_PIN                 PC4
#define ENSURE_MPU_DATA_READY_IS_LOW
#define GYRO_1_CS_PIN                   SPI1_NSS_PIN
#define GYRO_1_SPI_INSTANCE             SPI1
#define GYRO_1_ALIGN                    CW0_DEG

// OSD
#define USE_MAX7456
#define MAX7456_SPI_INSTANCE            SPI2
#define MAX7456_SPI_CS_PIN              SPI2_NSS_PIN

// FLASH
#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_FLASH_W25M
#define USE_FLASH_W25M512
#define FLASH_SPI_INSTANCE              SPI3
#define FLASH_CS_PIN                    SPI3_NSS_PIN
#define DEFAULT_BLACKBOX_DEVICE         BLACKBOX_DEVICE_FLASH

// BARO & MAG
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define I2C1_SCL_PIN                    PB8
#define I2C1_SDA_PIN                    PB9
#define I2C2_SCL_PIN                    PH2
#define I2C2_SDA_PIN                    PH3
#define MAG_I2C_INSTANCE                I2CDEV_1
#define BARO_I2C_INSTANCE               I2CDEV_1

// UART & VCP
#define UART1_RX_PIN                    PA10
#define UART1_TX_PIN                    PA9
#define UART2_RX_PIN                    PA3
#define UART2_TX_PIN                    PA2
#define UART3_RX_PIN                    PC11
#define UART3_TX_PIN                    PC10
#define UART4_RX_PIN                    PA1
#define UART4_TX_PIN                    PA0
#define UART5_RX_PIN                    PD2
#define UART5_TX_PIN                    PC12
#define UART6_RX_PIN                    PC7
#define UART6_TX_PIN                    PC6
#define USB_DETECT_PIN                  PC5
#define SERIALRX_UART                   SERIAL_PORT_USART2

// ADC
#define ADC_VBAT_PIN                    PC2
#define ADC_CURR_PIN                    PC1
#define ADC_INSTANCE                    ADC1
#define ADC1_DMA_OPT                    11
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC

// PINIO
#define PINIO1_PIN                      PC14

// TIMERS & DMA
#define TIMER_PIN_MAPPING               TIMER_PIN_MAP(  0, PA8,  1,  0 ) \
                                        TIMER_PIN_MAP(  1, PA3,  3, -1 ) \
                                        TIMER_PIN_MAP(  2, PB0,  2,  1 ) \
                                        TIMER_PIN_MAP(  3, PB1,  2,  2 ) \
                                        TIMER_PIN_MAP(  4, PC8,  2,  3 ) \
                                        TIMER_PIN_MAP(  5, PC9,  2,  4 ) \
                                        TIMER_PIN_MAP(  6, PB6,  1,  5 ) \
                                        TIMER_PIN_MAP(  7, PB7,  1,  6 ) \
                                        TIMER_PIN_MAP(  8, PB11, 1,  7 ) \
                                        TIMER_PIN_MAP(  9, PB10, 1,  8 )
