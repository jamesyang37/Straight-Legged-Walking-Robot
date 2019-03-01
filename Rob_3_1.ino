#include <Servo.h>
Servo servo_pin3;
Servo servo_pin5;
Servo servo_pin6;
Servo servo_pin9;
Servo servo_pin10;
Servo servo_pin11;
Servo servo[6];
int int_holder = 0;
void setup() {
  // put your setup code here, to run once:
  
  servo[0].attach(3);
  servo[1].attach(5);
  servo[2].attach(6);
  servo[3].attach(9);
  servo[4].attach(10);
  servo[5].attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo[int_holder].write(0);
  delay(500);
  for (int i = 0; 6 > i; i++){
    servo[int_holder].write(90);
  }
  delay(500);
  int_holder++;
  if (5 < int_holder) {
    int_holder = 0; 
  }
}
