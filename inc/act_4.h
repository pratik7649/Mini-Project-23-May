/**
 * @file act_4.h
 * @author Abhishek Sinha (abhishek.1599@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACT_4_H__
#define __ACT_4_H__
#include<avr/io.h>
/**
 * @brief Inittialize UART serial communication ports
 * 
 * @param ubrr 
 */
void init_UART(uint16_t ubrr);
/**
 * @brief Read characters from UART port
 * @return char
 */
char UARTread();
/**
 * @brief Write characters to UART port
 * 
 * @param data 
 */
void UART_Write(char data);

#endif