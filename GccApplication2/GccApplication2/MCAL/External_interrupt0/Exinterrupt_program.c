/*
 * Exinterrupt_program.c
 *
 * Created: 9/8/2022 3:16:22 PM
 *  Author: Abanoub Ibrahim Yanni
 */ 
#include "../../APP/STD_TYPES.h"
#include "Exinterrupt_interface.h"
#include "../DIO/DIO_interface.h"
#include <avr/interrupt.h>

static void (*PF_ExInterrupt0) (void) = NULL;


uint8 Ex0Intuint8Init( uint8 Copy_uint8ExNum , uint8 Copy_uint8ExIntEnable, uint8 Copy_uint8ExIntMode )
{
	uint8 LOCAL_uint8ErrorState=STD_TYPES_OK;

	switch (Copy_uint8ExNum)
	{
	
		case EXinterrupt_uint8_Ex0 :
		switch(Copy_uint8ExIntMode)
		{
			/* choose raising edge or falling edge mode */
			case ExInterrupt_uint8_RaisingEdge:
			SET_BIT(EXInterrupt_MCUCR_uint8_REG,0);
			SET_BIT(EXInterrupt_MCUCR_uint8_REG,1);
			
			break;
			case ExInterrupt_uint8_fallingEdge:
			CLR_BIT(EXInterrupt_MCUCR_uint8_REG,0);
			SET_BIT(EXInterrupt_MCUCR_uint8_REG,1);
			
			break;
			default:
					LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;

			break;	
		}
		/* enable or disable the External Interrupt zero */
		if(Copy_uint8ExIntEnable==ExInterrupt_uint8_Enable)
		{
		SET_BIT(ExInterrupt_uint8_SREG_REG,7);
		SET_BIT(EXInterrupt_GICR_uint8_REG,6);
		}
		else if(Copy_uint8ExIntEnable==ExInterrupt_uint8_Disable)
		{
			CLR_BIT(EXInterrupt_GICR_uint8_REG,6);
		}
		
		break;
		/*we can implement more cases for EX1 and EX2 but now i only need EX0*/
		default:
				LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;

		break;
	}
	return LOCAL_uint8ErrorState;
}


void Ex0IntVoidDisable ()
{
	CLR_BIT(EXInterrupt_GICR_uint8_REG,6);
	
}

void Ex0IntVoidEnable ()
{
	SET_BIT(EXInterrupt_GICR_uint8_REG,6);
	
}


void EXinterruptVoidCallBack( void (*Copy_PFVoidCallBack) (void) )
{
	PF_ExInterrupt0=Copy_PFVoidCallBack;
}


ISR(INT0_vect)
{
	PF_ExInterrupt0();
}



