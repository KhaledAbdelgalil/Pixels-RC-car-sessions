#define led 13
#define m1 12
#define m2 11
#define m3 2
#define m4 4
char in;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(m1,OUTPUT);
   pinMode(m2,OUTPUT);
    pinMode(m3,OUTPUT);
     pinMode(m4,OUTPUT);
  Serial.begin(9600);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() >0)
  {
    in=Serial.read();
    Serial.println(in);
    if(in== 'F') {
    digitalWrite(led,1);
    digitalWrite(m1,1);
digitalWrite(m2,0);
digitalWrite(m3,0);
digitalWrite(m4,1);
    
    }
    else if(in=='B') {
digitalWrite(m1,0);   
digitalWrite(m2,1);
digitalWrite(m3,1);
digitalWrite(m4,0);}

else if (in=='R')
{
digitalWrite(m1,1);   
digitalWrite(m2,0);
digitalWrite(m3,1);
digitalWrite(m4,0);

}

else if (in=='L')
{
digitalWrite(m1,0);   
digitalWrite(m2,1);
digitalWrite(m3,0);
digitalWrite(m4,1);

}
else 
{digitalWrite(m1,0);   
digitalWrite(m2,0);
digitalWrite(m3,0);
digitalWrite(m4,0);
}
  }
}
