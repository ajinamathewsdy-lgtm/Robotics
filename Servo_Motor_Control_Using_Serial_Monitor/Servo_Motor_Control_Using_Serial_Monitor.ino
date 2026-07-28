#include <Servo.h>

Servo myServo;

const int servoPin = 5;
int angle;
void setup()
{
  myServo.attach(servoPin);
  Serial.begin(9600);
  myServo.write(0);
}

void loop()
{
  Serial.println("Enter the value at which the motor needs to rotate : ");
  if (Serial.available() > 0)
  {
    angle = Serial.parseInt();
    if (angle >= 0 && angle <= 180)
    {
      myServo.write(angle);
      Serial.print("Servo moved to: ");
      Serial.print(angle);
      Serial.println(" degrees");
    }
    else
    {
      Serial.println("Invalid angle! Enter a value between 0 and 180.");
    }
  }  
}