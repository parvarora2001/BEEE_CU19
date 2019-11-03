void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
 void loop()
{
  digitalWrite(9,LOW);
  delay(10);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  long t=pulseIn(10,HIGH);
  int d=0.017*t;
  if(d<=50)
  {
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);
  }
   else
   {
     digitalWrite(13,LOW);
     
   }
   Serial.print(d);
}