#pragma once

#include "HAL/gpio.h"

//小灯数量
#define LEDNUM 6

void WS2812_Init(void);
void WS2812_SendData(uint8_t *data);