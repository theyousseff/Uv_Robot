#include "robot.h"

void Robot_init()
{
	MOTOR_init(front_right_step,front_right_dir);
	MOTOR_init(front_left_step,front_left_dir);
	MOTOR_init(rear_right_step,rear_right_dir);
	MOTOR_init(rear_left_step,rear_left_dir);
}


void Robot_move(uint16 delayParameter)
{
	MOTOR_ON(front_right_step, delayParameter);
	MOTOR_ON(front_left_step, delayParameter);
	MOTOR_ON(rear_right_step, delayParameter);
	MOTOR_ON(rear_left_step, delayParameter);
}

void Robot_forward()
{
	MOTOR_clockwise(front_right_dir);
	MOTOR_clockwise(front_left_dir);
	MOTOR_clockwise(rear_right_dir);
	MOTOR_clockwise(rear_left_dir);
}

void Robot_backward()
{
	MOTOR_antiClockwise(front_right_dir);
	MOTOR_antiClockwise(front_left_dir);
	MOTOR_antiClockwise(rear_right_dir);
	MOTOR_antiClockwise(rear_left_dir);
}

void Robot_right()
{
	MOTOR_clockwise(front_right_dir);
	MOTOR_clockwise(front_left_dir);
	MOTOR_antiClockwise(rear_right_dir);
	MOTOR_antiClockwise(rear_left_dir);
}

void Robot_left()
{
	MOTOR_antiClockwise(front_right_dir);
	MOTOR_antiClockwise(front_left_dir);
	MOTOR_clockwise(rear_right_dir);
	MOTOR_clockwise(rear_left_dir);
}

void Robot_stop()
{
	MOTOR_stop(front_right_step);
	MOTOR_stop(front_left_step);
	MOTOR_stop(rear_right_step);
	MOTOR_stop(rear_left_step);
}