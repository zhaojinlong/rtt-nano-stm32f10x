/*
 * description：本文件是c语言规范的例子
 * version: 1.1
 * Change Logs:
 * Date           Author       Notes
 * 2019-01-18     kingleo      create
 * 2019-01-24     kingleo      增加version注释
 *                             修改系统互斥量的应用
 *                             
 */
 
#include "stm32f10x.h"
#include "led.h"

/**
 * @note    led初始化,使用PA6口作为输出口
 * @param   none
 * @return  none
 */
void init_led(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	 //使能PB,PE端口时钟

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;				 // LED-->PA.6 端口配置
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 // 推挽输出
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 // IO口速度为50MHz
	GPIO_Init(GPIOA, &GPIO_InitStructure);					 
	GPIO_SetBits(GPIOA,GPIO_Pin_6);						     // PA.6 输出高
}

/**
 * @note    点亮led
 * @param   none
 * @return  none
 */
void lighten_led(void)
{
	GPIO_SetBits(GPIOA,GPIO_Pin_6);
}

/**
 * @note    熄灭led
 * @param   none
 * @return  none
 */
void extinguish_led(void)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_6);
}
