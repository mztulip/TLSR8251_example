#pragma once

#if defined(__cplusplus)
extern "C" {
#endif



#define UART_PRINT_DEBUG_ENABLE		0 // =1 use u_printf() (PA7/SWS), source: SDK/components/application/print/u_printf.c

#if UART_PRINT_DEBUG_ENABLE
#define PRINT_BAUD_RATE 1500000 // real ~1000000
#define DEBUG_INFO_TX_PIN	GPIO_PA7 // SWS
#define PA7_DATA_OUT		1
#define PA7_OUTPUT_ENABLE	1
#define PULL_WAKEUP_SRC_PA7 PM_PIN_PULLUP_1M
#define PA7_FUNC		AS_GPIO
#endif // UART_PRINT_DEBUG_ENABLE

#define CLOCK_SYS_CLOCK_HZ  	24000000 // 16000000, 24000000, 32000000, 48000000

#define RAM _attribute_data_retention_ // short version, this is needed to keep the values in ram after sleep


#include "vendor/common/default_config.h"

#if defined(__cplusplus)
}
#endif
