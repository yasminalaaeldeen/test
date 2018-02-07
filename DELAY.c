#include "STD_TYPES.h"
#include "DELAY.h"


void delay_ms(u32 ms){
u32 count;
u32 i;
count= ((ms*clk1)-(LOOP_STATIC_TIME)-(FUNCTION_CALL_TIME )- (LOCAL_EQ_TIME ))/LOOP_DYNAMIC_TIME;


for(i=0;i<count;i++)
				{
					asm("NOP");
				}



}
void delay_us(u32 us){
u32 count;
u32 i;
count= ((us*clk2)-(LOOP_STATIC_TIME)-(FUNCTION_CALL_TIME )- (LOCAL_EQ_TIME ))/LOOP_DYNAMIC_TIME;


for(i=0;i<count;i++)
				{
					asm("NOP");
				}



}
