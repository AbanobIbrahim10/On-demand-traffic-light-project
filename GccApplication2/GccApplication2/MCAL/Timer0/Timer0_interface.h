/*
 * Timer0_interface.h
 *
 * Created: 9/8/2022 1:20:02 AM
 *  Author: Abanoub Ibrahim Yanni
 */ 


#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_
#define Timer_uint8NormalMode   0
#define Timer_uint8Enable       1
#define Timer_uint8Disable       0

uint8 Timer0uint8Init(uint8 Copy_uint8Mode , uint8 Copy_uint8EnInterrupt,uint8 Copy_uint8PreLoad);
void TimerVoidSetCallBack (void (*PF_TMRCallBack) (void));



#endif /* TIMER0_INTERFACE_H_ */