/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *   FILE NAME	:  DCMotor_interface.h
 *   AUTHOR		:  Yasser Waleed
 *********************************************************************************************************************/
#ifndef HAL_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_INTERFACE_H_
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <avr/io.h>             // registers
#include "../Library/stdtypes.h"
/**********************************************************************************************************************
 *  GLOBAL MACROS
 *********************************************************************************************************************/
typedef enum {L_MOTOR, R_MOTOR}	Motor_t;
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void DCMotor_Init();
void DCMotor_SetRotation(Motor_t Motor, s8 Speed);
/**********************************************************************************************************************
 *  END OF FILE: DCMotor_interface.h
 *********************************************************************************************************************/
#endif