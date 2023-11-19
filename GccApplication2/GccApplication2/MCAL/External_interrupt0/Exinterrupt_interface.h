/*
 * Exinterrupt_interface.h
 *
 * Created: 9/8/2022 3:15:44 PM
 *  Author: Abanoub Ibrahim Yanni
 */ 


#ifndef EXINTERRUPT_INTERFACE_H_
#define EXINTERRUPT_INTERFACE_H_

#define EXInterrupt_MCUCR_uint8_REG     *((volatile uint8*)0x55)
#define EXInterrupt_GICR_uint8_REG     *((volatile uint8*)0x5B)


#define EXinterrupt_uint8_Ex0  0
#define ExInterrupt_uint8_SREG_REG    *((volatile uint8*)0x5f)

#define ExInterrupt_uint8_RaisingEdge  0
#define ExInterrupt_uint8_fallingEdge  1

#define ExInterrupt_uint8_Enable  0
#define ExInterrupt_uint8_Disable  1


uint8 Ex0Intuint8Init( uint8 Copy_uint8ExNum , uint8 Copy_uint8ExIntEnable , uint8 Copy_uint8ExIntMode);
void EXinterruptVoidCallBack( void (*Copy_PFVoidCallBack) (void) );
void Ex0IntVoidDisable ();
void Ex0IntVoidEnable ();


#endif /* EXINTERRUPT_INTERFACE_H_ */