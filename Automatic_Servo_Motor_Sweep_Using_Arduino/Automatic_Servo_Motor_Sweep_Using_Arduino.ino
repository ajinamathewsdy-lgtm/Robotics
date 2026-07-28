#include <Servo.h>

Servo myServo;

const int servoPin = 3;

void setup()
{
  myServo.attach(servoPin);
  Serial.begin(9600);
  myServo.write(180);
}

void loop()
{
  for (int i=0; i<=180; i +=30){
    myServo.write(i);
    delay(500);

    Serial.print("\tServo Angle: ");
    Serial.println(i);

  }
}