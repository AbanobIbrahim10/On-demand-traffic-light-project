/*
 * app.h
 *
 * Created: 9/9/2022 1:49:06 AM
 *  Author: Abanoub Ibrahim Yanni
 */ 


#ifndef APP_H_
#define APP_H_


#include "../MCAL/DIO/DIO_interface.h"
#include "STD_TYPES.h"
#include "../MCAL/Timer0/Timer0_interface.h"
#include "../ECUAL/LED/LED_interface.h"
#include "../MCAL/External_interrupt0/Exinterrupt_interface.h"

#define five_seconds  19531
#define ten_seconds  39062
#define fifteen_seconds  58593
#define twenty_seconds  78124

void Ex0interrupt();
void TimerOvInterrupt ();

/* global variable i used it as a counter */
long unsigned int x=0;
uint8 blinking=0;



#endif /* APP_H_ */