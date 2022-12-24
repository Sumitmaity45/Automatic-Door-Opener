int in1 = 2; 
int in2 = 3; 
int sensor = 8; 
int led = 13; 
void setup() 
{ 
 pinMode(in1, OUTPUT);//in1 is selected as output pin of Arduino 
 pinMode(in2, OUTPUT);//in2 is selected as output pin of Arduino 
 pinMode(sensor, INPUT);//Sensor is selected as input pin of Arduino 
 pinMode(led, OUTPUT); 
 
 digitalWrite(in1,LOW); 
 digitalWrite(in2,LOW); 
 //digitalWrite(sensor,LOW); 
 digitalWrite(led,LOW); 
 while(millis()<13000) 
 { 
 digitalWrite(led,HIGH); 
 delay(50); 
 digitalWrite(led,LOW); 
 delay(50); 
 } 
 digitalWrite(led,LOW); 
 digitalWrite(in1,LOW); 
 digitalWrite(in2,HIGH); 
 
} 
void loop() 
{ 
 if(digitalRead(sensor)==HIGH) 
 { 
 digitalWrite(in1,HIGH);//code for door opening 
 digitalWrite(in2,LOW); 
 digitalWrite(led,HIGH); 
 delay(2000); 
 digitalWrite(in1,LOW); 
 digitalWrite(in2,LOW); 
 delay(10000);//door remain 10 sec open 
 digitalWrite(in1,LOW);//code for closing the door 
 digitalWrite(in2,HIGH); 
 digitalWrite(led,LOW); 
 delay(2000); 
 digitalWrite(in1,LOW); 
 digitalWrite(in2,LOW); 
 
 } 
}
