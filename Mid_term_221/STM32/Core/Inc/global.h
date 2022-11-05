/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Windows 10
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"

#define init_counter 0

#define auto_0	10
#define auto_1 	11
#define auto_2	12
#define auto_3	13
#define auto_4	14
#define auto_5	15
#define auto_6	16
#define auto_7	17
#define auto_8	18
#define auto_9	19

#define manual_0	30
#define manual_1 	31
#define manual_2	32
#define manual_3	33
#define manual_4	34
#define manual_5	35
#define manual_6	36
#define manual_7	37
#define manual_8	38
#define manual_9	39

extern int status;

extern int button_event;

void display_7_seg(int index);

void full_reset_check();

void increase_shift_check();

void decrease_shift_check();

void button_event_counter();

#endif /* INC_GLOBAL_H_ */
