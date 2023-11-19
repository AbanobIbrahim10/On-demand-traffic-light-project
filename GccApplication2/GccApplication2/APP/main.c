/*
 * GccApplication1.c
 *
 * Created: 8/30/2022 5:23:25 PM
 * Author : ABANOUB ibrahim Yanni
 */ 


#include "app.h"

int main(void)
{
	
	EXinterruptVoidCallBack(Ex0interrupt);
	Ex0Intuint8Init(EXinterrupt_uint8_Ex0,ExInterrupt_uint8_Enable,ExInterrupt_uint8_RaisingEdge);
	TimerVoidSetCallBack(TimerOvInterrupt);
	Timer0uint8Init(Timer_uint8NormalMode,Timer_uint8Enable,0);
	
    while (1) 
    {
			if(x<five_seconds)
			{
				LEDuint8TurnOn(DIO_uint8_PORTA,DIO_uint8_PIN0);
				LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN1);
				LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN2);
			}
			else if (x<ten_seconds)
			{
				if(x<19600)
					Ex0IntVoidDisable();
				LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN0);
				if(blinking==0)
					LEDuint8TurnOn(DIO_uint8_PORTA,DIO_uint8_PIN1);
				else
				{
					LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN1);
				}
				LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN2);
				
			}
			else if(x<fifteen_seconds)
			{
				
				LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN0);
				LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN1);
				LEDuint8TurnOn(DIO_uint8_PORTA,DIO_uint8_PIN2);
				
			}
			else if (x<twenty_seconds)
			{
				
				
				LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN0);
				if(blinking==0)
				LEDuint8TurnOn(DIO_uint8_PORTA,DIO_uint8_PIN1);
				else
				{
					LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN1);
				}
				LEDuint8TurnOff(DIO_uint8_PORTA,DIO_uint8_PIN2);
				
			}
			else
			{
				
				x=0;
				Ex0IntVoidEnable();
			}
			
		
		
		
    }
	return 0;
}






void TimerOvInterrupt ()
{
	x++;
	if( x==23415 || x==27315 ||x==31215 || x==35115 ||x==62493 || x==66393 ||x==70293 || x==74193 || x==78000)
		TOG_BIT(blinking,0);
}

void Ex0interrupt()
{
	x=five_seconds;
	Ex0IntVoidDisable();
	
}