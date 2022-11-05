/*
 * fsm_auto_counter.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Windows 10
 */

#include "fsm_auto_counter.h"

void fsm_auto_counter_run()
{
	switch (status) {
	case init_counter:
		display_7_seg(0);

		status = auto_9;
		Set_timer(100, 0);
		break;
	case auto_0:
		display_7_seg(0);

		if(button_event == 0)
		{
			if(timer_flag[0] == 1)
			{
				status = auto_0;
				Set_timer(100, 0);
			}
			full_reset_check();
			increase_shift_check(manual_0);
			decrease_shift_check(manual_0);
			break;
		}
		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_9;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_0);
		decrease_shift_check(manual_0);
		break;
	case auto_1:
		display_7_seg(1);

		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_0;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_1);
		decrease_shift_check(manual_1);
		break;
	case auto_2:
		display_7_seg(2);

		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_1;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_2);
		decrease_shift_check(manual_2);
		break;
	case auto_3:
		display_7_seg(3);

		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_2;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_3);
		decrease_shift_check(manual_3);
		break;
	case auto_4:
		display_7_seg(4);

		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_3;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_4);
		decrease_shift_check(manual_4);
		break;
	case auto_5:
		display_7_seg(5);

		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_4;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_5);
		decrease_shift_check(manual_5);
		break;
	case auto_6:
		display_7_seg(6);

		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_5;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_6);
		decrease_shift_check(manual_6);
		break;
	case auto_7:
		display_7_seg(7);

		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_6;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_7);
		decrease_shift_check(manual_7);
		break;
	case auto_8:
		display_7_seg(8);

		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_7;
			Set_timer(100, 0);
		}
		full_reset_check();
		increase_shift_check(manual_8);
		decrease_shift_check(manual_8);
		break;
	case auto_9:
		display_7_seg(9);

		if(timer_flag[0] == 1)
		{
			button_event_counter();
			status = auto_8;
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
