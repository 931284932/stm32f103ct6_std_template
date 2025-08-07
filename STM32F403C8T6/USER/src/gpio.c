#include "gpio.h"

void Gpio_Init(void)
 {
     RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
     GPIO_InitTypeDef GPIO_InitStructure;
	 
     GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	 GPIO_Init(GPIOB,&GPIO_InitStructure);
	 
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE ); //���ø���ʱ��
	 GPIO_PinRemapConfig(GPIO_Remap_SWJ_NoJTRST, ENABLE); //ȫ����SW+JTAG������JTRST��PB4����
	 
	 GPIO_SetBits(GPIOB,GPIO_Pin_4);
	 GPIO_ResetBits(GPIOB,GPIO_Pin_4);
 }

 