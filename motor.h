 /**
  * @file motor.h
  * @author Youssef Hossam
  * @brief Header file for the Motor driver
  * 
  */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "COMMON.h"

/******************************************************************************
 *                      Functions Prototypes                                  *
 ******************************************************************************/
extern void MOTOR_init(uint8 stepPin, uint8 dirPin);
extern void MOTOR_ON(uint8 stepPin, uint16 delayParameter);
extern void MOTOR_clockwise(uint8 dirPin);
extern void MOTOR_antiClockwise(uint8 dirPin);
extern void MOTOR_stop(uint8 stepPin);


#endif /* MOTOR_H_ */
