#include "robot.h"

// Define stepper motor connections and steps per revolution:
#define stepsPerRevolution 1600

//Application Buttons
#define forwardButton 11
#define backwardButton 12
#define rightButton 13
#define leftButton 14
#define wingsButton 15

uint16_t delay_microseconds = 500; //delay parameter to control stepper speed

void setup() {
  
  //Robot_init(); //initialize robot conditions

}
void loop() {

    //Expected Application buttons
    if(forwardButton == HIGH) //if forward button is on --> Move Robot Forward
    {
        Robot_forward(); // Set robot direction to forward
        for (int i = 0; i < 5 * stepsPerRevolution; i++)   // Spin the stepper motor 5 revolutions fast:
        {
          Robot_move(delay_microseconds);
        }
    }

   else if(backwardButton == HIGH) //if backward button is on --> Move Robot Backward
    {
        Robot_backward();  // Set robot direction to backward
        for (int i = 0; i < 5 * stepsPerRevolution; i++)   // Spin the stepper motor 5 revolutions fast:
        {
          Robot_move(delay_microseconds);
        }
    }

   else if(rightButton == HIGH) //if right button is on --> Move Robot to the Right
    {
        Robot_right();  // Set robot direction to right
        for (int i = 0; i < 5 * stepsPerRevolution; i++)   // Spin the stepper motor 5 revolutions fast:
        {
          Robot_move(delay_microseconds);
        }
    }
    
   else if(leftButton == HIGH) //if left button is on --> Move Robot to the Left
    {
        Robot_left();  // Set robot direction to left
        for (int i = 0; i < 5 * stepsPerRevolution; i++)   // Spin the stepper motor 5 revolutions fast:
        {
          Robot_move(delay_microseconds);
        }
    }
   else
   {
      //Robot_stop();
   }
}

/**
  // Set the spinning direction clockwise:
  MOTOR_clockwise(dirPin);
  // Spin the stepper motor 1 revolution slowly:
  for (int i = 0; i < stepsPerRevolution; i++) {
    // These four lines result in 1 step:
    MOTOR_ON(stepPin, 500);
  }
  delay(1000);
  // Set the spinning direction counterclockwise:
  MOTOR_antiClockwise(dirPin);
  // Spin the stepper motor 1 revolution quickly:
  for (int i = 0; i < stepsPerRevolution; i++)
  {
    // These four lines result in 1 step:
    Robot_on();
    Robot_forward();
  }
  delay(1000);
  // Set the spinning direction clockwise:
  digitalWrite(dirPin, HIGH);
  // Spin the stepper motor 5 revolutions fast:
  for (int i = 0; i < 5 * stepsPerRevolution; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }
  delay(1000);
  // Set the spinning direction counterclockwise:
  digitalWrite(dirPin, LOW);
  // Spin the stepper motor 5 revolutions fast:
  for (int i = 0; i < 5 * stepsPerRevolution; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }
  delay(1000);
  **/
