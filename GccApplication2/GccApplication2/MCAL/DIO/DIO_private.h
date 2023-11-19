/*
 * DIO_private.h
 *
 * Created: 8/30/2022 1:53:18 AM
 *  Author: Abanoub ibrahim Yanni
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

/* IT IS THE MACROS OF ALL DIO REGISTERS WE NEED */

// PORTA REGISTER SUMMARY
#define DIO_uint8_PORTA_REG *((volatile uint8*)0x3B)
#define DIO_uint8_DDRA_REG  *((volatile uint8*)0x3A)
#define DIO_uint8_PINA_REG  *((volatile uint8*)0x39)


// PORTB REGISTER SUMMARY
#define DIO_uint8_PORTB_REG *((volatile uint8*)0x38)
#define DIO_uint8_DDRB_REG  *((volatile uint8*)0x37)
#define DIO_uint8_PINB_REG  *((volatile uint8*)0x36)


// PORTC REGISTER SUMMARY
#define DIO_uint8_PORTC_REG *((volatile uint8*)0x35)
#define DIO_uint8_DDRC_REG  *((volatile uint8*)0x34)
#define DIO_uint8_PINC_REG  *((volatile uint8*)0x33)


// PORTD REGISTER SUMMARY
#define DIO_uint8_PORTD_REG *((volatile uint8*)0x32)
#define DIO_uint8_DDRD_REG  *((volatile uint8*)0x31)
#define DIO_uint8_PIND_REG  *((volatile uint8*)0x30)



#endif /* DIO_PRIVATE_H_ */