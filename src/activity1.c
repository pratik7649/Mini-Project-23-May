/**
 * @file activity1.c
 * @author Abhishek Sinha (abhishek.1599@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include <avr/io.h>

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void Ledstatus(uint8_t stat)
{
	LED_PORT = (stat << LED_PIN);
}
void init_LED(void)
{
	DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD1);
    PORTD|=(1<<PD4);
}