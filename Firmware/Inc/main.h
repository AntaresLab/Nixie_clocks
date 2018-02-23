/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define C9_Pin GPIO_PIN_0
#define C9_GPIO_Port GPIOA
#define C8_Pin GPIO_PIN_1
#define C8_GPIO_Port GPIOA
#define C7_Pin GPIO_PIN_2
#define C7_GPIO_Port GPIOA
#define C6_Pin GPIO_PIN_3
#define C6_GPIO_Port GPIOA
#define C5_Pin GPIO_PIN_4
#define C5_GPIO_Port GPIOA
#define C4_Pin GPIO_PIN_5
#define C4_GPIO_Port GPIOA
#define C3_Pin GPIO_PIN_6
#define C3_GPIO_Port GPIOA
#define C2_Pin GPIO_PIN_7
#define C2_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_0
#define BUZZER_GPIO_Port GPIOB
#define PHOTO_Pin GPIO_PIN_1
#define PHOTO_GPIO_Port GPIOB
#define POINT_Pin GPIO_PIN_2
#define POINT_GPIO_Port GPIOB
#define TX_Pin GPIO_PIN_10
#define TX_GPIO_Port GPIOB
#define RX_Pin GPIO_PIN_11
#define RX_GPIO_Port GPIOB
#define BTN_BTN_Pin GPIO_PIN_12
#define BTN_BTN_GPIO_Port GPIOB
#define BTN_BTN_EXTI_IRQn EXTI15_10_IRQn
#define SET_BTN_Pin GPIO_PIN_13
#define SET_BTN_GPIO_Port GPIOB
#define SET_BTN_EXTI_IRQn EXTI15_10_IRQn
#define MENU_BTN_Pin GPIO_PIN_14
#define MENU_BTN_GPIO_Port GPIOB
#define MENU_BTN_EXTI_IRQn EXTI15_10_IRQn
#define C1_Pin GPIO_PIN_8
#define C1_GPIO_Port GPIOA
#define C0_Pin GPIO_PIN_9
#define C0_GPIO_Port GPIOA
#define I3_Pin GPIO_PIN_10
#define I3_GPIO_Port GPIOA
#define I2_Pin GPIO_PIN_11
#define I2_GPIO_Port GPIOA
#define I1_Pin GPIO_PIN_12
#define I1_GPIO_Port GPIOA
#define POW_MODE_Pin GPIO_PIN_15
#define POW_MODE_GPIO_Port GPIOA
#define A6_Pin GPIO_PIN_3
#define A6_GPIO_Port GPIOB
#define A5_Pin GPIO_PIN_4
#define A5_GPIO_Port GPIOB
#define A4_Pin GPIO_PIN_5
#define A4_GPIO_Port GPIOB
#define A3_Pin GPIO_PIN_6
#define A3_GPIO_Port GPIOB
#define A2_Pin GPIO_PIN_7
#define A2_GPIO_Port GPIOB
#define A1_Pin GPIO_PIN_8
#define A1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

#define NIXIE_ANODES_PINS       (A1_Pin | A2_Pin | A3_Pin | A4_Pin | A5_Pin | A6_Pin)
#define NIXIE_ANODES_PORT       GPIOB
#define NIXIE_CATHODES_PINS     (C0_Pin | C1_Pin | C2_Pin | C3_Pin | C4_Pin | C5_Pin | C6_Pin | C7_Pin | C8_Pin | C9_Pin)
#define NIXIE_CATHODES_PORT     GPIOA

/* USER CODE END Private defines */

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
