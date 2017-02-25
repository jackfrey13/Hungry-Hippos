#include <Servo.h>

Servo servo1;
Servo servo2;

const int buttonPin1 = 7;
const int servoPin1 = 8;
const int buttonPin2 = 9;
const int servoPin2 = 10;

void setup() {
  pinMode(buttonPin1, INPUT);
  servo1.attach(servoPin1);
  pinMode(buttonPin2, INPUT);
  servo2.attach(servoPin2);
}

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {servo1.write(5);
  } else if (digitalRead(buttonPin1) == LOW) {
    servo1.write(180);
  }
  
  if (digitalRead(buttonPin2) == HIGH) {
    servo2.write(180);
  } else if (digitalRead(buttonPin2) == LOW) {
    servo2.write(5);
    }
}
