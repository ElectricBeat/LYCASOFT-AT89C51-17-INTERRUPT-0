#include <reg51.h>
//#include "8051_delay.h"

sbit LED_1 = P1^0;		/* set LED on port1 */ 

void External_0_ISR() interrupt 0    
{
	LED_1 = ~LED_1;
}
void main()
{
	EA  = 1;					/* Enable global interrupt */
	EX0 = 1;      		/* Enable Ext. interrupt0 */			
	IT0 = 1;      		/* Select Ext. interrupt0 on falling edge */ 	

	while(1);
}
