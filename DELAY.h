#ifndef DELAY_H_
#define DELAY_H_

void delay_ms(u32 ms);
void delay_us(u32 us);
#define clk1 (8*1000)
#define clk2 (8)

#define LOOP_STATIC_TIME (30)
#define LOOP_DYNAMIC_TIME (42)
#define FUNCTION_CALL_TIME (36)
#define LOCAL_EQ_TIME (857)

#endif 
