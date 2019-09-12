void setup()
{
  for(int i=10;i<=13;i++)
    pinMode(i,OUTPUT);
}
void loop()
{
  for(int i=10;i<14;i++)
  {
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    delay(200);
  }
}