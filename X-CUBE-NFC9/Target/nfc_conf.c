/**
  ******************************************************************************
  * @file           : nfc_conf.c
  * @brief          : This file contains definitions for the NFC9 components bus interfaces
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#include "stm32c0xx_hal.h"
#include "nfc_conf.h"
#include "timer.h"
#include "rfal_platform.h"

/* Private variables ---------------------------------------------------------*/
EXTI_HandleTypeDef USR_INT_LINE;

/* Private user code ---------------------------------------------------------*/

