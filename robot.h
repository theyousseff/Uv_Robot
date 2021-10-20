

#ifndef MOTOR_H_
#define MOTOR_H_

#include "motor.h"
#include "COMMON.h"

/******************************************************************************
*						Pins Definitions									  *
*******************************************************************************/
#define front_right_step 2
#define front_right_dir 3
#define front_left_step 4
#define front_left_dir 5
#define rear_right_step 6
#define rear_right_dir 7
#define rear_left_step 8
#define rear_left_dir 9


/******************************************************************************
 *                      Functions Prototypes                                  *
 ******************************************************************************/
extern void Robot_init();
extern void Robot_move(uint16 delayParameter);
extern void Robot_forward();
extern void Robot_backward();
extern void Robot_right();
extern void Robot_left();
extern void Robot_stop();



#endif /* MOTOR_H_ */