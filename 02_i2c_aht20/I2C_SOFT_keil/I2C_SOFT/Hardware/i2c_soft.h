#ifndef __I2C_SOFT_H__
#define __I2C_SOFT_H__
#include "gpio.h"
uint8_t I2C_WriteData(uint8_t SlaveAddress, uint8_t *Data, uint8_t len);
uint8_t I2C_ReadDate(uint8_t SlaveAddress, uint8_t *Data, uint8_t len);

#define SCL_H() HAL_GPIO_WritePin(SCL_GPIO_Port, SCL_Pin, GPIO_PIN_SET)
#define SCL_L() HAL_GPIO_WritePin(SCL_GPIO_Port, SCL_Pin, GPIO_PIN_RESET)
#define SDA_H() HAL_GPIO_WritePin(SDA_GPIO_Port, SDA_Pin, GPIO_PIN_SET)
#define SDA_L() HAL_GPIO_WritePin(SDA_GPIO_Port, SDA_Pin, GPIO_PIN_RESET)

#define SDA_READ() HAL_GPIO_ReadPin(SDA_GPIO_Port, SDA_Pin)

void SDA_IN(void);
void SDA_OUT(void);


#endif
