void setup() {
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 Serial.begin(9600);
}

void loop() 
{
 if(Serial.available())
 {
 int z = Serial.read();

 if(z==1)
 {
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 }

 if(z==2)
 {
 digitalWrite(4,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 }

  if(z==3)
 {
  
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 }

 if(z==4)
 {
 
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 }

 if(z==5)
 {
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 }
 }

}
