/*
* description：本文件是c语言规范的例子
* version: 1.1
* Change Logs:
* Date           Author       Notes
* 2019-01-18     kingleo      create
*/

#ifndef __LED_H__
#define __LED_H__

#include <stdint.h>
/**
 * @note    led初始化,使用PA6口作为输出口
 * @param   none
 * @return  none
 */
void init_led(void);
/**
 * @note    点亮led
 * @param   none
 * @return  none
 */
void lighten_led(void);

/**
 * @note    熄灭led
 * @param   none
 * @return  none
 */
void extinguish_led(void);
#endif
