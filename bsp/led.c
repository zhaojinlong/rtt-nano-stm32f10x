/*
 * description�����ļ���c���Թ淶������
 * version: 1.1
 * Change Logs:
 * Date           Author       Notes
 * 2019-01-18     kingleo      create
 * 2019-01-24     kingleo      ����versionע��
 *                             �޸�ϵͳ��������Ӧ��
 *                             
 */
 
#include "stm32f10x.h"
#include "led.h"

/**
 * @note    led��ʼ��,ʹ��PA6����Ϊ�����
 * @param   none
 * @return  none
 */
void init_led(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	 //ʹ��PB,PE�˿�ʱ��

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;				 // LED-->PA.6 �˿�����
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 // �������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 // IO���ٶ�Ϊ50MHz
	GPIO_Init(GPIOA, &GPIO_InitStructure);					 
	GPIO_SetBits(GPIOA,GPIO_Pin_6);						     // PA.6 �����
}

/**
 * @note    ����led
 * @param   none
 * @return  none
 */
void lighten_led(void)
{
	GPIO_SetBits(GPIOA,GPIO_Pin_6);
}

/**
 * @note    Ϩ��led
 * @param   none
 * @return  none
 */
void extinguish_led(void)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_6);
}
