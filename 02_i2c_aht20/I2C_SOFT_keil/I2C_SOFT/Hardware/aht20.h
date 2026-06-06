#ifndef INC_AHT20_H_
#define INC_AHT20_H_

#include "gpio.h"
#include "i2c_soft.h"
void AHT20_Init();
void AHT20_Read(float *Temperature, float *Humidity);

#endif /* INC_AHT20_H_ */
