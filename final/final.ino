// Include the AccelStepper library:
#include <AccelStepper.h>

// Motor pin definitions:
#define motorPin1  5      // IN1 on the ULN2003 driver
#define motorPin2  4      // IN2 on the ULN2003 driver
#define motorPin3  14     // IN3 on the ULN2003 driver
#define motorPin4  12     // IN4 on the ULN2003 driver

// Define the AccelStepper interface type; 4 wire motor in half step mode:
#define MotorInterfaceType 8

// Initialize with pin sequence IN1-IN3-IN2-IN4 for using the AccelStepper library with 28BYJ-48 stepper motor:
AccelStepper stepper = AccelStepper(MotorInterfaceType, motorPin1, motorPin3, motorPin2, motorPin4);

void setup() {
  // Set the maximum steps per second:
  stepper.setMaxSpeed(3000);
  stepper.setAcceleration(20);
}

void loop() {
  // Set the speed of the motor in steps per second:
  stepper.setSpeed(1000);
  // Step the motor with constant speed as set by setSpeed():
  stepper.runSpeed();
}