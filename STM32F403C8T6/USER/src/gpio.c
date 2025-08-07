#include "gpio.h"

void Gpio_Init(void)
 {
     RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
     GPIO_InitTypeDef GPIO_InitStructure;
	 
     GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	 GPIO_Init(GPIOB,&GPIO_InitStructure);
	 
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE ); //配置复用时钟
	 GPIO_PinRemapConfig(GPIO_Remap_SWJ_NoJTRST, ENABLE); //全功能SW+JTAG，禁用JTRST，PB4可用
	 
	 GPIO_SetBits(GPIOB,GPIO_Pin_4);
	 GPIO_ResetBits(GPIOB,GPIO_Pin_4);
 }

 