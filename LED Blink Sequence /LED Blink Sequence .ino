int d=100;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(d); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(d);
  digitalWrite(12,HIGH);
  delay(d);
  digitalWrite(12,LOW);
  delay(d);
  digitalWrite(11,HIGH);
  delay(d);
  digitalWrite(11,LOW);
  delay(d);
}
