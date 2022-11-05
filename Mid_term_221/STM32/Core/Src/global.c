/*
 * global.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Windows 10
 */

#include"global.h"

int status = 0;

int button_event = 9;
void display_7_seg(int index)
{
	switch (index) {
		case 0:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(seg_a_GPIO_Port, seg_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_b_GPIO_Port, seg_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_c_GPIO_Port, seg_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_d_GPIO_Port, seg_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_e_GPIO_Port, seg_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(seg_f_GPIO_Port, seg_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg_g_GPIO_Port, seg_g_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}

void full_reset_check()
{
	if(isButtonPressed(0) == 1)
	{
		status = manual_0;
	}
}

void increase_shift_check(int current_status)
{
	if(isButtonPressed(1) == 1)
	{
		status = current_status + 1;
		if(status > manual_9)
		{
			status = manual_0;
		}
		Set_timer(100, 0);
	}
}

void decrease_shift_check(int current_status)
{
	if(isButtonPressed(2) == 1)
	{
		status = current_status - 1;
		if(status < manual_0)
		{
			status = manual_9;
		}
		Set_timer(100, 0);
	}
}


void button_event_counter()
{
	if(button_event <= 10 && button_event > 0 )
	{
		button_event--;
	}
}
