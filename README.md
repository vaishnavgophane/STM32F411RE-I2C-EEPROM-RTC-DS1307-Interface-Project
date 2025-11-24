## 🧑‍💻 Author

**Vaishnav Gophane**  
Embedded Firmware & IoT Developer
<br>
Pune, India.

📫 **Connect:** [Gmail](mr.vaishnavgophane@gmail.com) • [GitHub](https://github.com/vaishnavgophane) • [LinkedIn](https://www.linkedin.com/in/vaishnav-gophane-417686284/)

---
# STM32's NUCLEO-F411RE – I2C EEPROM (AT24C32) + RTC (DS1307) Project

This project demonstrates interfacing the HW-111 module containing **AT24C32 EEPROM** and **DS1307 RTC** with an **STM32 Nucleo-F411RE** board using **I2C communication**.  
The system continuously prints the real-time clock output via UART to PuTTY serial terminal.

---

## 🚀 Features
- I2C communication with EEPROM (AT24C32)
- Read real-time clock (hours, minutes, seconds)
- UART output to serial monitor (PuTTY)
- Support for BCD <-> Decimal conversion for DS1307
- Modular code structure for easy reuse

---

## 🧩 Hardware Requirements
| Component | Quantity |
|----------|----------|
| STM32 Nucleo F411RE | 1 |
| HW-111 Module (DS1307 + AT24C32) | 1 |
| CR1220/CR2032 Battery for RTC | 1 |
| Jumper Wires (Male-Female) | As required |

---

## 🔌 Pin Connections
| HW-111 Pin | STM32 Pin |
|-----------|----------|
| VCC | 3.3V |
| GND | GND |
| SDA | PB7 (I2C1_SDA) |
| SCL | PB6 (I2C1_SCL) |

---

## 🧠 I2C Device Addresses
| Device | Address |
|--------|---------|
| EEPROM AT24C32 | `0x50 << 1` |
| RTC DS1307 | `0x68 << 1` |

---

## 🛠️ Software Setup
This project was developed using:
- STM32CubeIDE
- STM32 HAL Drivers
- USB VCP or UART2 for serial monitor

Baudrate: **115200**

---


