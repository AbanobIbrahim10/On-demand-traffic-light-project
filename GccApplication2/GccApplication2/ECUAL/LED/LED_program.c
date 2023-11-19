/*
 * LED_program.c
 *
 * Created: 9/8/2022 1:04:52 AM
 *  Author: Abanoub Ibrahim Yanni
 */ 

#include "../../MCAL/DIO/DIO_interface.h"
#include "../../APP/STD_TYPES.h"

uint8 LEDuint8TurnOn( uint8 Copy_uint8PortId, uint8 Copy_uint8PinId)
{
	uint8 LOCAL_uint8ErrorState=STD_TYPES_OK;

	LOCAL_uint8ErrorState=	DIO_uint8SetPinDirection(Copy_uint8PortId,Copy_uint8PinId,DIO_uint8_OUTPUT);
	LOCAL_uint8ErrorState=DIO_uint8SetPinValue(Copy_uint8PortId,Copy_uint8PinId,DIO_uint8_HIGH);	
	return LOCAL_uint8ErrorState;
}

uint8 LEDuint8TurnOff( uint8 Copy_uint8PortId, uint8 Copy_uint8PinId)
{
	uint8 LOCAL_uint8ErrorState=STD_TYPES_OK;
	LOCAL_uint8ErrorState=DIO_uint8SetPinDirection(Copy_uint8PortId,Copy_uint8PinId,DIO_uint8_OUTPUT);
	LOCAL_uint8ErrorState=DIO_uint8SetPinValue(Copy_uint8PortId,Copy_uint8PinId,DIO_uint8_LOW);
	return LOCAL_uint8ErrorState;
}