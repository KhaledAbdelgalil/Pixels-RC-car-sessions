int x;
float rm;
void setup()
{
Serial.begin(9600);
pinMode(13 ,OUTPUT);
}
void loop()
{
 
x=analogRead(A0);
rm=map(x,0,1023,0,5);
if (x>512) {
digitalWrite(13,1);
Serial.println(rm);
Serial.println(x);
delay(1000);

}
else 
{
digitalWrite(13,0);
Serial.println(rm);
Serial.println(x);
delay(1000);
}
}
