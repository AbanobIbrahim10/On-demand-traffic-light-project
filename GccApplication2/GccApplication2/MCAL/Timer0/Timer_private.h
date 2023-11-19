/*
 * Timer_private.h
 *
 * Created: 9/8/2022 2:51:48 AM
 *  Author: Abanoub Ibrahim Yanni
 */ 


#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

#define TIMER_uint8_TCCR0_REG    *((volatile uint8*)0x53)

#define TIMER_uint8_TCNT0_REG    *((volatile uint8*)0x52)

/* interrupt registers */

#define TIMER_uint8_SREG_REG    *((volatile uint8*)0x5f)
#define TIMER_uint8_TIMSK_REG    *((volatile uint8*)0x59)




#endif /* TIMER_PRIVATE_H_ */