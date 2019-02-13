#include <rtthread.h>
#include "led.h"
 


int main(void)
{	
	init_led();
	while(1)
	{
		lighten_led();
		rt_thread_delay(50);	 //—” ±300ms
		extinguish_led();
		rt_thread_delay(50);	//—” ±300ms
	}
}


