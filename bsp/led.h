/*
* description�����ļ���c���Թ淶������
* version: 1.1
* Change Logs:
* Date           Author       Notes
* 2019-01-18     kingleo      create
*/

#ifndef __LED_H__
#define __LED_H__

#include <stdint.h>
/**
 * @note    led��ʼ��,ʹ��PA6����Ϊ�����
 * @param   none
 * @return  none
 */
void init_led(void);
/**
 * @note    ����led
 * @param   none
 * @return  none
 */
void lighten_led(void);

/**
 * @note    Ϩ��led
 * @param   none
 * @return  none
 */
void extinguish_led(void);
#endif
