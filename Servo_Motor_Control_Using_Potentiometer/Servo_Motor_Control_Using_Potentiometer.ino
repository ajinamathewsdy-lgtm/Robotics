#include <Servo.h>

Servo myServo;

const int servoPin = 9;
const int potPin = A5;

int potValue = 0;
int angle = 0;

void setup()
{
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop()
{
  potValue = analogRead(potPin);

  angle = map(potValue, 0, 1023, 0, 180);

  myServo.write(angle);

  Serial.print("Potentiometer: ");
  Serial.print(potValue);
  Serial.print("\tServo Angle: ");
  Serial.println(angle);

  delay(15);
}