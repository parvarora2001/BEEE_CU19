void setup()
{
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
 int c= analogRead(A0);
  delay(200);
  if(c<300)
  {
    digitalWrite(7,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(7,LOW);
    delay(1000);
  }
}