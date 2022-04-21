/**
 * @file HOTSeatApp.c
 * @author Abhishek Sinha (abhishek.1599@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "activity1.h"
#include "act_2.h"
#include "act_3.h"
#include "act_4.h"



/**
 * @brief Initialize all the peripherals
 * 
 */

void peripheral_init(void)
{
    /*Configure LED and Switch pins*/
    init_LED();
    /*Configure ADC registers and pins*/
    init_ADC();
    /*Configure PWM registers and pins*/
    init_PWM();
    /*Configure UART serial communication pin*/
  init_UART(103);
}
    
   
uint16_t temp;
char temp_data;
int main(void)
{
    /*uint16_t temp;*/
    // Initialize peripherals
    peripheral_init();
    
    while(1)
    {
        if(SENSOR_ON) //If switch_1 is ON
        {
            if(HEAT_ON) //If switch_2 is ON
            {
                Ledstatus(LED_ON);//LED is ON
                temp=read_ADC(0);
                temp_data = out_PWM(temp);
               UART_Write(temp_data);

            }
            else
            {
                Ledstatus(LED_OFF);
            }
        }
        else
        {
            Ledstatus(LED_OFF);//LED is OFF
            OCR1A=0;
        }
    }
    return 0;
}
