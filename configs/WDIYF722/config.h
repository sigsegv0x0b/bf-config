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

#define FC_TARGET_MCU     STM32F7X2

#define BOARD_NAME        WDIYF722
#define MANUFACTURER_ID   WDIY

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_FLASH_W25N01G
#define USE_BARO
#define USE_BARO_BMP280
#define USE_MAX7456

#define BEEPER_PIN           PB1
#define MOTOR1_PIN           PA8        // TIM1_CH1
#define MOTOR2_PIN           PA9        // TIM1_CH2
#define MOTOR3_PIN           PA10       // TIM1_CH3
#define MOTOR4_PIN           PB0        // TIM3_CH3
#define SERVO1_PIN           PB9        // TIM11_CH1
#define SERVO2_PIN           PB15       // TIM12_CH2

#define RX_PPM_PIN           PA2        // TIM2_CH3
#define LED_STRIP_PIN        PB8        // TIM4_CH3

#define UART1_TX_PIN         PB6
#define UART1_RX_PIN         PB7
#define UART2_TX_PIN         PA2
#define UART2_RX_PIN         PA3
#define UART3_TX_PIN         PC10
#define UART3_RX_PIN         PC11
#define UART4_TX_PIN         PA0
#define UART4_RX_PIN         PA1
#define UART5_TX_PIN         PC12
#define UART5_RX_PIN         PD2
#define UART6_TX_PIN         PC6
#define UART6_RX_PIN         PC7

#define I2C2_SCL_PIN         PB10
#define I2C2_SDA_PIN         PB11

#define LED0_PIN             PC8
#define LED1_PIN             PC9

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PC2
#define SPI2_SDO_PIN         PC3

#define SPI3_SCK_PIN         PB3
#define SPI3_SDI_PIN         PB4
#define SPI3_SDO_PIN         PB5

#define ADC_VBAT_PIN         PC0
#define ADC_RSSI_PIN         PC4
#define ADC_CURR_PIN         PC1

#define PINIO1_PIN           PB14
#define PINIO1_CONFIG        1
#define PINIO1_BOX           40

#define FLASH_CS_PIN         PA15
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_EXTI_PIN      PB2
#define GYRO_1_CS_PIN        PA4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, MOTOR1_PIN ,      1,   0) \
    TIMER_PIN_MAP( 1, MOTOR2_PIN ,      1,   0) \
    TIMER_PIN_MAP( 2, MOTOR3_PIN,       1,   0) \
    TIMER_PIN_MAP( 3, MOTOR4_PIN,       2,   0) \
    TIMER_PIN_MAP( 4, LED_STRIP_PIN ,   1,   0) \
    TIMER_PIN_MAP( 5, RX_PPM_PIN ,      1,  -1) \
    TIMER_PIN_MAP( 6, SERVO1_PIN ,      1,  -1) \
    TIMER_PIN_MAP( 7, SERVO2_PIN,       1,  -1) 
    
#define ADC1_DMA_OPT 0

#define BARO_I2C_INSTANCE I2CDEV_2
#define MAG_I2C_INSTANCE  I2CDEV_2

#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BITBANG DSHOT_BITBANG_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE_DEFAULT 110
#define DEFAULT_CURRENT_METER_SCALE 250
#define BEEPER_INVERTED
#define MAX7456_SPI_INSTANCE SPI2
#define FLASH_SPI_INSTANCE SPI3
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW90_DEG
