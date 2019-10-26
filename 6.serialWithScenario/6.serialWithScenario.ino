#include <Servo.h>

Servo baseServo;
int basePosition = 0;
Servo laserServo;
int laserPosition = 0;

void setup() {
 baseServo.attach(10);
 laserServo.attach(9);
 updatePositions();
 Serial.begin(115200);
}

void loop() {
  scenario();
}

void scenario(){
    basePosition = 90;
    laserPosition = 90;
    updatePositions();
    delay(1000);
    basePosition = 10;
    laserPosition = 135;
    updatePositions();
    delay(1000);
    basePosition = 90;
    laserPosition = 90;
    updatePositions();
    delay(1000);
    basePosition = 170;
    laserPosition = 135;
    updatePositions();
    delay(1000);
}

void updatePositions(){
    baseServo.write(basePosition);
    laserServo.write(laserPosition);   
    Serial.print("moving to: ");Serial.print(basePosition);Serial.print(" ");Serial.println(laserPosition);
}

