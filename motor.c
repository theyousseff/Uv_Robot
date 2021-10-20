/**
 * @file motor.c
 * @author Youssef Hossam
 * @brief Source file for the motor driver
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "motor.h"


/*************************************************************
 * .Name: MOTOR_init
 * .Inputs: None
 * .Outputs: None
 * .Return Value: None
 * .Description: Initializes the motor driver
 * **********************************************************/
void MOTOR_init(uint8 stepPin, uint8 dirPin)
{
	// Declare pins as output:
	pinMode(stepPin, OUTPUT);
	pinMode(dirPin, OUTPUT);
}
/***************************************************************
 * .Name: MOTOR_ON
 * .Inputs: None
 * .Outputs: None
 * .Return Value: None
 * .Description: Enable the motor 
 * *************************************************************/
void MOTOR_ON(uint8 stepPin, uint16 delayParameter)
{
	digitalWrite(stepPin, HIGH);
    delayMicroseconds(delayParameter);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(delayParameter);
}
/****************************************************************
 * .Name: MOTOR_Clockwise
 * .Inputs: None
 * .Outputs: None
 * .Return Value: None
 * .Description: Rotate the motor in clockwise direction
 * *************************************************************/
void MOTOR_clockwise(uint8 dirPin)
{	
  digitalWrite(dirPin, HIGH);
}
/****************************************************************
 * .Name: MOTOR_antiClockwise
 * .Inputs: None
 * .Outputs: None
 * .Return Value: None
 * .Description: Rotate the motor in anti - clockwise direction
 * *************************************************************/
void MOTOR_antiClockwise(uint8 dirPin)
{	
  digitalWrite(dirPin, LOW);
}
/****************************************************************
 * .Name: MOTOR_stop
 * .Inputs: None
 * .Outputs: None
 * .Return Value: None
 * .Description: Stops the Motor
 * *************************************************************/
void MOTOR_stop(uint8 stepPin)
{

}
