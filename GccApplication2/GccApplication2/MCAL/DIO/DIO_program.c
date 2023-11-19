/*
 * DIO_program.c
 *
 * Created: 8/30/2022 1:54:27 AM
 *  Author: Abanoub ibrahim Yanni
 */ 

#include "DIO_private.h"
#include "DIO_interface.h"
#include "../../APP/STD_TYPES.h"



uint8 DIO_uint8SetPinDirection(uint8 Copy_uint8PortId,uint8 Copy_uint8PinId,uint8 Copy_uint8Direction)
{
		uint8 LOCAL_uint8ErrorState=STD_TYPES_OK;
		if(Copy_uint8PortId <=DIO_uint8_PORTD && Copy_uint8PinId <= DIO_uint8_PIN7 )
		{
			switch(Copy_uint8PortId)
			{
				
				case DIO_uint8_PORTA:
					switch(Copy_uint8Direction)
					{
						case DIO_uint8_OUTPUT:
							SET_BIT(DIO_uint8_DDRA_REG,Copy_uint8PinId);
							break;
						case DIO_uint8_INPUT_FLOATING:
							CLR_BIT(DIO_uint8_DDRA_REG,Copy_uint8PinId);
							break;
						
						case DIO_uint8_INPUT_PULL_UP:
							CLR_BIT(DIO_uint8_DDRA_REG,Copy_uint8PinId);
							SET_BIT(DIO_uint8_PORTA_REG,Copy_uint8PinId);
							break;
						
						default:
							LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
							break;
							
					}
					break;
				
				case DIO_uint8_PORTB:
					switch(Copy_uint8Direction)
					{
						case DIO_uint8_OUTPUT:
						SET_BIT(DIO_uint8_DDRB_REG,Copy_uint8PinId);
						break;
						case DIO_uint8_INPUT_FLOATING:
						CLR_BIT(DIO_uint8_DDRB_REG,Copy_uint8PinId);
						break;
					
						case DIO_uint8_INPUT_PULL_UP:
						CLR_BIT(DIO_uint8_DDRB_REG,Copy_uint8PinId);
						SET_BIT(DIO_uint8_PORTB_REG,Copy_uint8PinId);
						break;
					
						default:
						LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
						break;
					
					}
					break;				
				
				case DIO_uint8_PORTC:
					switch(Copy_uint8Direction)
					{
						case DIO_uint8_OUTPUT:
						SET_BIT(DIO_uint8_DDRC_REG,Copy_uint8PinId);
						break;
						case DIO_uint8_INPUT_FLOATING:
						CLR_BIT(DIO_uint8_DDRC_REG,Copy_uint8PinId);
						break;
					
						case DIO_uint8_INPUT_PULL_UP:
						CLR_BIT(DIO_uint8_DDRC_REG,Copy_uint8PinId);
						SET_BIT(DIO_uint8_PORTC_REG,Copy_uint8PinId);
						break;
					
						default:
						LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
						break;
					
					}
					break;
				
				case DIO_uint8_PORTD:
					switch(Copy_uint8Direction)
					{
						case DIO_uint8_OUTPUT:
						SET_BIT(DIO_uint8_DDRD_REG,Copy_uint8PinId);
						break;
						case DIO_uint8_INPUT_FLOATING:
						CLR_BIT(DIO_uint8_DDRD_REG,Copy_uint8PinId);
						break;
					
						case DIO_uint8_INPUT_PULL_UP:
						CLR_BIT(DIO_uint8_DDRD_REG,Copy_uint8PinId);
						SET_BIT(DIO_uint8_PORTD_REG,Copy_uint8PinId);
						break;
					
						default:
						LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
						break;
					
					}
					break;
					
				default:
					LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
					break;
			}					
			

		}
		else
		{
			LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
		}	
		
		
	return LOCAL_uint8ErrorState;
	
}

uint8 DIO_uint8SetPinValue(uint8 Copy_uint8PortId,uint8 Copy_uint8PinId,uint8 Copy_uint8PinValue)
{
	
	uint8 LOCAL_uint8ErrorState=STD_TYPES_OK;
	if(Copy_uint8PortId <=DIO_uint8_PORTD && Copy_uint8PinId <= DIO_uint8_PIN7 )
	{
		switch(Copy_uint8PortId)
		{
			
			case DIO_uint8_PORTA:
			switch(Copy_uint8PinValue)
			{
				case DIO_uint8_HIGH:
				SET_BIT(DIO_uint8_PORTA_REG,Copy_uint8PinId);
				break;
				case DIO_uint8_LOW:
				CLR_BIT(DIO_uint8_PORTA_REG,Copy_uint8PinId);
				break;
				
				default:
				LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
				break;
				
			}
			break;
			
			case DIO_uint8_PORTB:
			switch(Copy_uint8PinValue)
			{
				case DIO_uint8_HIGH:
				SET_BIT(DIO_uint8_PORTB_REG,Copy_uint8PinId);
				break;
				case DIO_uint8_LOW:
				CLR_BIT(DIO_uint8_PORTB_REG,Copy_uint8PinId);
				break;
				
				default:
				LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
				break;
				
			}
			break;
			
			
			
			case DIO_uint8_PORTC:
			switch(Copy_uint8PinValue)
			{
				case DIO_uint8_HIGH:
				SET_BIT(DIO_uint8_PORTC_REG,Copy_uint8PinId);
				break;
				case DIO_uint8_LOW:
				CLR_BIT(DIO_uint8_PORTC_REG,Copy_uint8PinId);
				break;
				
				default:
				LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
				break;
				
			}
			break;
			
			
			case DIO_uint8_PORTD:
			switch(Copy_uint8PinValue)
			{
				case DIO_uint8_HIGH:
				SET_BIT(DIO_uint8_PORTD_REG,Copy_uint8PinId);
				break;
				case DIO_uint8_LOW:
				CLR_BIT(DIO_uint8_PORTD_REG,Copy_uint8PinId);
				break;
				
				default:
				LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
				break;
				
			}
			break;
			
			
			default:
			LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
			break;
		}
		

	}
	else
	{
		LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
	}
	
	
	return LOCAL_uint8ErrorState;
	
}
uint8 DIO_uint8ReadPinValue(uint8 Copy_uint8PortId,uint8 Copy_uint8PinId,uint8* Copy_Puint8ReturnedValue)
{
	uint8 LOCAL_uint8ErrorState=STD_TYPES_OK;
	if( Copy_uint8PinId <= DIO_uint8_PIN7 && Copy_Puint8ReturnedValue!=NULL)
	{
		switch(Copy_uint8PortId)
		{
			
			case DIO_uint8_PORTA:
			*Copy_Puint8ReturnedValue=GET_BIT(DIO_uint8_PINA_REG,Copy_uint8PinId);
			break;
			
			case DIO_uint8_PORTB:
			*Copy_Puint8ReturnedValue=GET_BIT(DIO_uint8_PINB_REG,Copy_uint8PinId);
			break;
			
			case DIO_uint8_PORTC:
			*Copy_Puint8ReturnedValue=GET_BIT(DIO_uint8_PINC_REG,Copy_uint8PinId);
			break;
			
			case DIO_uint8_PORTD:
			*Copy_Puint8ReturnedValue=GET_BIT(DIO_uint8_PIND_REG,Copy_uint8PinId);
			break;
			
			
			default:
			LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
			break;
		}
		

	}
	else
	{
		LOCAL_uint8ErrorState=STD_TYPES_NOT_OK;
	}
	
	
	return LOCAL_uint8ErrorState;		
}