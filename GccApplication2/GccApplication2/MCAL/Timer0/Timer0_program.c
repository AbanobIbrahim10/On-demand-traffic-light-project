/*
 * Timer0_program.c
 *
 * Created: 9/8/2022 1:19:37 AM
 *  Author: Abanoub Ibrahim Yanni
 */ 


#include <avr/interrupt.h>
#include "../../APP/STD_TYPES.h"
#include "Timer0_interface.h"
#include "Timer_private.h"
#include "../DIO/DIO_interface.h"

extern unsigned int x;


static void (*PF_TimerOverFlowInterrupt) (void) = NULL;


uint8 Timer0uint8Init(uint8 Copy_uint8Mode , uint8 Copy_uint8EnInterrupt,uint8 Copy_uint8PreLoad)
{
	uint8 LOCAL_uint8ErrorState=STD_TYPES_OK;

	if (Copy_uint8Mode == Timer_uint8NormalMode)
	{
		//Normal Mode
		CLR_BIT(TIMER_uint8_TCCR0_REG,3);
		CLR_BIT(TIMER_uint8_TCCR0_REG,6);
	}
	else
	{
		//user enter another mode or invalid number not from my macros
		LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;

	}
	if (Copy_uint8EnInterrupt == Timer_uint8Enable)
	{
		/* turn on global inturrept and timer maskable interrupt flag */
		SET_BIT(TIMER_uint8_SREG_REG,7);
		SET_BIT(TIMER_uint8_TIMSK_REG,0);	
	}
	else
	{
		/* user enter invalid number not from the macros */
		LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;

	}
	/* if we want to count from a aspecific number */
	TIMER_uint8_TCNT0_REG=Copy_uint8PreLoad;
	
	//start timer by set prescaler
	SET_BIT(TIMER_uint8_TCCR0_REG,0);
	CLR_BIT(TIMER_uint8_TCCR0_REG,1);
	CLR_BIT(TIMER_uint8_TCCR0_REG,2);
	
	return LOCAL_uint8ErrorState;
}

void TimerVoidSetCallBack (void (*PF_TMRCallBack) (void))
{
	/* put the address from the user into my pointer to function */
	PF_TimerOverFlowInterrupt=PF_TMRCallBack;
}


/* interrupt service routine which call a function in upper layers using call back concept */
ISR(TIMER0_OVF_vect)
{
	
	
	PF_TimerOverFlowInterrupt();
	
}

