void setup() {
  // put your setup code here, to run once:
 pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(10, 0);
  delay(1000);
  
  analogWrite(10, 64);
  delay(1000);
  
  analogWrite(10, 128);
  delay(1000);
  
  analogWrite(10, 192);
  delay(1000);
  
  analogWrite(10, 255);
  delay(1000);
}
