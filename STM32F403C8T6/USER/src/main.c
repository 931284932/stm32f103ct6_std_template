#include "main.h"

int main()
{
	
	Gpio_Init();
	delay_init();
	
	while(1)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_4);
		delay_ms(1000);
		GPIO_ResetBits(GPIOB,GPIO_Pin_4);
		delay_ms(1000);
	}
	
}
