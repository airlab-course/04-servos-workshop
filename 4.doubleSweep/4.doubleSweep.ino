#include <Servo.h>

Servo baseServo;
Servo laserServo;

void setup() {
 baseServo.attach(10);
 laserServo.attach(9);
}

void loop() {
  for(int i=0; i<=180; i++){
    baseServo.write(i);
    laserServo.write(i);
    delay(15);
  }
  
  for(int i=180; i>=0; i--){
    baseServo.write(i);
    laserServo.write(i);
    delay(15);
  }
}
