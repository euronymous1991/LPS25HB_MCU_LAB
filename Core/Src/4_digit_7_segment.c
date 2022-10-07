#include "main.h"
#include "4_digit_7_segment.h"




void SevenSegment_Update(uint8_t number){
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, ((number>>0)&0x01));
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, ((number>>1)&0x01));
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, ((number>>2)&0x01));
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, ((number>>3)&0x01));
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, ((number>>4)&0x01));
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, ((number>>5)&0x01));
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, ((number>>6)&0x01));
}