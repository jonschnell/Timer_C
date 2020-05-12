/*
 * ping.h
 *
 *  Created on: Mar 11, 2020
 *      Author: jschnell
 */

#ifndef PING_H_
#define PING_H_
#include "Timer.h"
#include "lcd.h"
#include <inc/tm4c123gh6pm.h>
#include <stdbool.h>
#include "driverlib/interrupt.h"

void ping_init_timer (void); //Initializes the timer
void ping_send_pulse (void); //Sends the initial pulse
float ping_read (void); //Reads the data incoming from the ping sensor
//float ping_getDistance (unsigned long); //calculate distance from the data from the ping sensor
void timer_handler(void); //Handles interrupts in the timer


#endif /* PING_H_ */
