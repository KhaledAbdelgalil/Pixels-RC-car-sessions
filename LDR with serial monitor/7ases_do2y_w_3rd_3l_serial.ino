// Example_8_Light_Sensor_2
const int photocellPin = A0;
int photocellReading;
void setup(void)
{ Serial.begin(9600); }

void loop(void)
{
photocellReading = analogRead(photocellPin);
Serial.print("Analog reading = ");
Serial.print(photocellReading);

if (photocellReading < 10) { Serial.println(" - Dark");}
else if (photocellReading < 200) { Serial.println(" - Dim");}
else if (photocellReading < 500) {Serial.println(" - Light"); }
else if (photocellReading < 800) { Serial.println(" - Bright"); }
else {Serial.println(" - Very bright"); }
delay(1000);
}
