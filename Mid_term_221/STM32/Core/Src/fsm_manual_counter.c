/*
 * fsm_manual_counter.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Windows 10
 */

#include "fsm_manual_counter.h"

void fsm_manual_counter_run()
{
	switch (status) {
	case manual_0:
		display_7_seg(0);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_0;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_0);
		decrease_shift_check(manual_0);
		break;
	case manual_1:
		display_7_seg(1);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_1;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_1);
		decrease_shift_check(manual_1);
		break;
	case manual_2:
		display_7_seg(2);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_2;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_2);
		decrease_shift_check(manual_2);
		break;
	case manual_3:
		display_7_seg(3);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_3;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_3);
		decrease_shift_check(manual_3);
		break;
	case manual_4:
		display_7_seg(4);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_4;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_4);
		decrease_shift_check(manual_4);
		break;
	case manual_5:
		display_7_seg(5);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_5;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_5);
		decrease_shift_check(manual_5);
		break;
	case manual_6:
		display_7_seg(6);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_6;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_6);
		decrease_shift_check(manual_6);
		break;
	case manual_7:
		display_7_seg(7);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_7;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_7);
		decrease_shift_check(manual_7);
		break;
	case manual_8:
		display_7_seg(8);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_8;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_8);
		decrease_shift_check(manual_8);
		break;
	case manual_9:
		display_7_seg(9);
		button_event = 10;
		if(timer_flag[0] == 1)
		{

			status = auto_9;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_9);
		decrease_shift_check(manual_9);
		break;
		default:
			break;
	}
}

