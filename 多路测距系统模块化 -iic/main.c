#include <REGX52.H>
#include "conf.h"

/*------------------------------------------------
				主函数
------------------------------------------------*/
void main()
{ 
	int leftnumber=0, backnumber=0, rightnumber=0;
	SCL=1;
	SDA=1;
	Timer0Init();/*pwm电机控制*/
	LCD_Init();  /*1602初始化*/
	TIM1init();  /*·超声波定时器1初始化*/
	while (1)
	{
		keydous();
		hcsr04();
	}
}