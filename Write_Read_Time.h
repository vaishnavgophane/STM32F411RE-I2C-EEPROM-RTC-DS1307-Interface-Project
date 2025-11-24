/*
 * Write_Read_Time.h
 *
 *  Created on: Nov 24, 2025
 *      Author: Vaishnav
 */

#ifndef INC_WRITE_READ_TIME_H_
#define INC_WRITE_READ_TIME_H_

#include "main.h"
#include "stm32f4xx_hal.h"
extern I2C_HandleTypeDef hi2c1;


void DS1307_SetTime(uint8_t hours, uint8_t minutes, uint8_t seconds);
void DS1307_GetTime(uint8_t *hours, uint8_t *minutes, uint8_t *seconds);

uint8_t bcd2dec(uint8_t val);
uint8_t dec2bcd(uint8_t val);

#endif /* INC_WRITE_READ_TIME_H_ */
