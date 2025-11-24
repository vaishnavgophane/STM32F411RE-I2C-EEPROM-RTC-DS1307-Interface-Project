/*
 * Write_Read_Data.c
 *
 *  Created on: Nov 24, 2025
 *      Author: Vaishnav
 */
#include "Write_Read_Data.h"


void EEPROM_WriteByte(uint16_t EEPROM_Address, uint8_t data)
{
    uint8_t buffer[3];
  //  I2C_HandleTypeDef *hi2c;
    buffer[0] = (uint8_t)(EEPROM_Address >> 8);   // High byte of address
    buffer[1] = (uint8_t)(EEPROM_Address & 0xFF); // Low byte of address
    buffer[2] = data; 								// Data to write

    HAL_I2C_Master_Transmit(&hi2c1, (0x50 << 1), buffer, 3, 100);  // Transmits high & low bytes of Address.

    HAL_Delay(5); // Write cycle time (necessary)
}

uint8_t EEPROM_ReadByte(uint16_t memAddress)
{
    uint8_t addr[2];
    uint8_t data;

    addr[0] = (uint8_t)(memAddress >> 8);    // High byte
    addr[1] = (uint8_t)(memAddress & 0xFF);  // Low byte

    HAL_I2C_Master_Transmit(&hi2c1, (0x50 << 1), addr, 2, 100);
    HAL_I2C_Master_Receive(&hi2c1, (0x50 << 1), &data, 1, 100);

    return data;
}

