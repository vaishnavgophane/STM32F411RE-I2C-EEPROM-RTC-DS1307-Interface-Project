/*
 * Write_Read_Time.c
 *
 *  Created on: Nov 24, 2025
 *      Author: Vaishnav
 */
#include "main.h"
#include "Write_Read_Time.h"

void DS1307_SetTime(uint8_t hours, uint8_t minutes, uint8_t seconds)
{
    uint8_t data[4];
    data[0] = 0x00;                // Start register
    data[1] = dec2bcd(seconds);    // Seconds
    data[2] = dec2bcd(minutes);    // Minutes
    data[3] = dec2bcd(hours);      // Hours

    HAL_I2C_Master_Transmit(&hi2c1, 0x68<<1, data, 4, 100);
}

void DS1307_GetTime(uint8_t *hours, uint8_t *minutes, uint8_t *seconds)
{
    uint8_t timeReg = 0x00;
    uint8_t buffer[3];

    HAL_I2C_Master_Transmit(&hi2c1, 0x68<<1, &timeReg, 1, 100);
    HAL_I2C_Master_Receive(&hi2c1, 0x68<<1, buffer, 3, 100);

    *seconds = bcd2dec(buffer[0] & 0x7F);
    *minutes = bcd2dec(buffer[1] & 0x7F);
    *hours   = bcd2dec(buffer[2] & 0x3F);
}


uint8_t bcd2dec(uint8_t val)
{
	return ((val / 16) * 10) + (val % 16);
}
uint8_t dec2bcd(uint8_t val)
{
	return ((val / 10) * 16) + (val % 10);
}


