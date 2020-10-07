//* Defines -----------------------------------------------------------*/
#define BTN  PD0			
#define BLINK_DELAY 250
#ifndef F_CPU
#define F_CPU 16000000      // CPU frequency in Hz required for delay
#endif

/* Includes ----------------------------------------------------------*/
#include <util/delay.h>     // Functions for busy-wait delay loops
#include <avr/io.h>         // AVR device-specific IO definitions


int main(void)
{	
	// Setting pin PD0 to input with internal pull-up resistor
	DDRD = DDRD & ~(1<<BTN);
	PORTD = PORTD | (1<<BTN);
	
	//Setting pins (reg B) to output PB0 ~ PB4
	// 0001 1111 = 31
	DDRB = DDRB | 31; 
	
	// Set pins LOW in Data Register (LEDs off)
	// PORTB = PORTB and 1110 0000
	// 1110 0000 = 224
	PORTB = PORTB & 224;
	
	
    // Infinite loop
    while (1)
    {
		_delay_ms(BLINK_DELAY);
		
		if (bit_is_clear(PIND,BTN)) // the LEDs will do the full cycle
		{
			
			PORTB = PORTB ^ (1<<0); // setting LED0 on
			_delay_ms(BLINK_DELAY);
			
			for (int i = 0; i < 4; i++) //i = 0,1,2,3
			{
				PORTB = PORTB ^ ~(1<<i); // setting LED_i off
				PORTB = PORTB ^ ~(1<<(i+1)); // setting LED_(i+1) on
				_delay_ms(BLINK_DELAY);
			}
			
			for (int i = 4; i > 0; i--)	// i = 4,3,2,1
			{
				PORTB = PORTB ^ ~(1<<i); // setting LED_i off
				PORTB = PORTB ^ ~(1<<(i-1)); // setting LED_(i-1) on
				_delay_ms(BLINK_DELAY);
			}
			
			PORTB = PORTB ^ (1<<0); // setting LED0 off
			
		}
		
		
    }

    // Will never reach this
    return 0;
}
