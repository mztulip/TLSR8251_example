#include <stdint.h>
#include "tl_common.h"
#include "drivers.h"
#include "stack/ble/ble.h"
#include "vendor/common/user_config.h"


_attribute_ram_code_ void irq_handler()
{

}


_attribute_ram_code_ int main (void) 
{    //must run in ramcode
	// blc_pm_select_internal_32k_crystal(); // or blc_pm_select_external_32k_crystal();

	// cpu_wakeup_init();
	// clock_init(SYS_CLK_TYPE);
	// gpio_init(1);

	gpio_set_func(GPIO_PA0,AS_GPIO);
	gpio_set_output_en(GPIO_PA0, 1); 		//enable output
	gpio_set_input_en(GPIO_PA0,0);			//disable input
	gpio_write(GPIO_PA0, 1);

	gpio_set_func(GPIO_PD4,AS_GPIO);
	gpio_set_output_en(GPIO_PD4, 1); 		//enable output
	gpio_set_input_en(GPIO_PD4,0);			//disable input
	gpio_write(GPIO_PD4, 0);

	while (1)
	{
		gpio_write(GPIO_PA0, 0);
		gpio_write(GPIO_PD4, 0);
		for(volatile int i = 0; i < 1245678;i++){}
		gpio_write(GPIO_PA0, 1);
		gpio_write(GPIO_PD4, 1);
		// sleep_ms(50);
		for(volatile int i = 0; i < 1245678;i++){}
	}
}

