/*
 * updateClock.c
 *
 *  Created on: Oct 9, 2023
 *      Author: trand
 */

#include "main.h"
#include "display7SEG.h"
#include "updateClock.h"

void update7SEG(int index) {
	switch (index_led) {
	case 0: {
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, 1);

		turnOff7SEG();
		display7SEG(led_buffer[index_led]);

		break;
	}
	case 1: {
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, 1);

		turnOff7SEG();
		display7SEG(led_buffer[index_led]);

		break;
	}
	case 2: {
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, 0);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, 1);

		turnOff7SEG();
		display7SEG(led_buffer[index_led]);

		break;
	}
	case 3: {
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, 0);

		turnOff7SEG();
		display7SEG(led_buffer[index_led]);

		break;
	}
	default:
		break;
	}
}
