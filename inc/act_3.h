/**
 * @file act_3.h
 * @author Abhishek Sinha (abhishek.1599@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACT_3_H_
#define _ACT_3_H_
#include<avr/io.h>
/**
 * @brief Function definition
 * 
 * @param temp_value 
 * @return char
 */
char out_PWM(uint16_t temp_value);
void init_PWM(void);
#endif