#include <Servo.h>

Servo servoMotor;  // Create a servo object to control a servo motor
int currentAngle = 90;  // Initialize the angle to 90 degrees

void setup() {
  servoMotor.attach(9);  // Attach the servo to pin 9
  Serial.begin(9600);    // Initialize serial communication at 9600 baud
}

void loop() {
  if (Serial.available() > 0) {
    int angle = Serial.parseInt();  // Read the angle value from Serial
    if (angle >= 0 && angle <= 180) {
      moveServo(angle);  // Move the servo to the desired angle
    }
  }
}

void moveServo(int targetAngle) {
  //
  servoMotor.write(targetAngle);
  delay(10000);
    //
}