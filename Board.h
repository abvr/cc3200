
#ifndef __BOARD_H
#define __BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "ADC.h"
#include "GPIO.h"
#include "I2C.h"
#include "I2S.h"
#include "PWM.h"
#include "SDSPI.h"
#include "SD.h"
#include "SPI.h"
#include "UART.h"
#include "Watchdog.h"

#include "CC3220SF_LAUNCHXL.h"

#define Board_initGeneral            CC3220SF_LAUNCHXL_initGeneral

#define Board_ADC0                   CC3220SF_LAUNCHXL_ADC0
#define Board_ADC1                   CC3220SF_LAUNCHXL_ADC1

#define Board_CRYPTO0                CC3220SF_LAUNCHXL_CRYPTO0

#define Board_GPIO_LED_ON            CC3220SF_LAUNCHXL_GPIO_LED_ON
#define Board_GPIO_LED_OFF           CC3220SF_LAUNCHXL_GPIO_LED_OFF
#define Board_GPIO_LED0              CC3220SF_LAUNCHXL_GPIO_LED_D7
/*
 *  CC3220SF_LAUNCHXL_GPIO_LED_D5 and CC3220SF_LAUNCHXL_GPIO_LED_D6 are shared with the I2C
 *  and PWM peripherals. In order for those examples to work, these LEDs are
 *  taken out of gpioPinCOnfig[]
 */
#define Board_GPIO_LED1              CC3220SF_LAUNCHXL_GPIO_LED_D7
#define Board_GPIO_LED2              CC3220SF_LAUNCHXL_GPIO_LED_D7

#define Board_GPIO_BUTTON0           CC3220SF_LAUNCHXL_GPIO_SW2
#define Board_GPIO_BUTTON1           CC3220SF_LAUNCHXL_GPIO_SW3

#define Board_I2C0                   CC3220SF_LAUNCHXL_I2C0
#define Board_I2C_TMP                CC3220SF_LAUNCHXL_I2C0

#define Board_I2S0                   CC3220SF_LAUNCHXL_I2S0

#define Board_PWM0                   CC3220SF_LAUNCHXL_PWM6
#define Board_PWM1                   CC3220SF_LAUNCHXL_PWM7

#define Board_SDSPI0                 CC3220SF_LAUNCHXL_SDSPI0

#define Board_SD0                    CC3220SF_LAUNCHXL_SD0

#define Board_SDFatFS0               CC3220SF_LAUNCHXL_SD0

/* CC3220SF_LAUNCHXL_SPI0 is reserved for the NWP */
#define Board_SPI0                   CC3220SF_LAUNCHXL_SPI1

#define Board_UART0                  CC3220SF_LAUNCHXL_UART0
#define Board_UART1                  CC3220SF_LAUNCHXL_UART1

#define Board_WATCHDOG0              CC3220SF_LAUNCHXL_WATCHDOG0

/* Board specific I2C addresses */
#define Board_TMP_ADDR               (0x41)
#define Board_SENSORS_BP_TMP_ADDR    (0x40)

/*
 * These macros are provided for backwards compatibility.
 * Please use the <Driver>_init functions directly rather
 * than Board_init<Driver>.
 */
#define Board_initADC                ADC_init
#define Board_initGPIO               GPIO_init
#define Board_initI2C                I2C_init
#define Board_initI2S                I2S_init
#define Board_initPWM                PWM_init
#define Board_initSDSPI              SDSPI_init
#define Board_initSD                 SD_init
#define Board_initSDFatFS            SDFatFS_init
#define Board_initSPI                SPI_init
#define Board_initUART               UART_init
#define Board_initWatchdog           Watchdog_init

/*
 * These macros are provided for backwards compatibility.
 * Please use the corresponding 'Board_GPIO_xxx' macros as the macros
 * below are deprecated.
 */
#define Board_LED_ON                 Board_GPIO_LED_ON
#define Board_LED_OFF                Board_GPIO_LED_OFF
#define Board_LED0                   Board_GPIO_LED0
#define Board_LED1                   Board_GPIO_LED1
#define Board_LED2                   Board_GPIO_LED2
#define Board_BUTTON0                Board_GPIO_BUTTON0
#define Board_BUTTON1                Board_GPIO_BUTTON1
#define Board_TMP006_ADDR            Board_TMP_ADDR

#ifdef __cplusplus
}
#endif

#endif /* __BOARD_H */
