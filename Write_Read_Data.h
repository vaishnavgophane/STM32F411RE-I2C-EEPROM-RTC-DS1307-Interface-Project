/*
 * Write_Read_Data.h
 *
 *  Created on: Nov 24, 2025
 *      Author: Vaishnav
 */

#ifndef INC_WRITE_READ_DATA_H_
#define INC_WRITE_READ_DATA_H_

#include "main.h"
#include "stm32f4xx_hal.h"
extern I2C_HandleTypeDef hi2c1;



void EEPROM_WriteByte(uint16_t EEPROM_Address, uint8_t data);

uint8_t EEPROM_ReadByte(uint16_t memAddress);

#endif /* INC_WRITE_READ_DATA_H_ */
