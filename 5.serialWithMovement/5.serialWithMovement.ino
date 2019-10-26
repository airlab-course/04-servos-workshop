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
  char command = Serial.read();
  if(command == 'M')
  {
    Serial.println("Moving...");
    basePosition = Serial.parseInt();
    laserPosition = Serial.parseInt();
    updatePositions();
    return;
  }
}

void updatePositions(){
    baseServo.write(basePosition);
    laserServo.write(laserPosition);
    Serial.print("moving to: ");Serial.print(basePosition);Serial.print(" ");Serial.println(laserPosition);
}

