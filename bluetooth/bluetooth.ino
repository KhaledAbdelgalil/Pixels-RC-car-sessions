#define led 13

char in;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() >0)
  {
    in=Serial.read();
    Serial.println(in);
    if(in== 'F') digitalWrite(led,1);
    else if(in=='B') digitalWrite(led,0);
}
}
