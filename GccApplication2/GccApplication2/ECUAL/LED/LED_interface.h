/*
 * LED_interface.h
 *
 * Created: 9/8/2022 1:05:18 AM
 *  Author: Abanoub Ibrahim Yanni
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_


uint8 LEDuint8TurnOn( uint8 Copy_uint8PortId, uint8 Copy_uint8PinId);
uint8 LEDuint8TurnOff( uint8 Copy_uint8PortId, uint8 Copy_uint8PinId);
uint8 LEDuint8Toggle( uint8 Copy_uint8PortId, uint8 Copy_uint8PinId );

#endif /* LED_INTERFACE_H_ */