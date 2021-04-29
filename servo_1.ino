#include <Servo.h>
int Red = 7;
int Blue = 5;
int Green = 2;
int pinPot = A1;
int val;

Servo servo1;
//int trigPin = 8;
//int echoPin = 10;
long distance;
long duration;
 
void setup() 
{
servo1.attach(9); 
 //pinMode(trigPin, OUTPUT);
 //pinMode(echoPin, INPUT);
  pinMode(Red, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
  
}
 
void loop() {
  ultra();
 // servo.write(0);
  val = analogRead(pinPot);
 // val = map(0, 1023, 0, 180);
  servo1.write(val);
  delay(1000);
  
  servo1.write(60);
  if(distance<=65){
    digitalWrite(Red, HIGH);
    delay(1000);
    digitalWrite(Red, LOW);
    delay(1000);
  }
  servo1.write(120);
  if(distance<=100){
    digitalWrite(Blue, HIGH);
    delay(1000);
    digitalWrite(Blue, LOW);
    delay(1000);
  }
  servo1.write(180);
  if(distance<=100){
    digitalWrite(Green, HIGH);
    delay(1000);
    digitalWrite(Green, LOW);
    delay(1000);
  }
  else{servo1.write(0);}
  
}
 
void ultra(){
  //digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  //digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  //digitalWrite(trigPin, LOW);
 // duration = pulseIn(echoPin, HIGH);
   delayMicroseconds(10);
   delayMicroseconds(10);
   delayMicroseconds(10);
   delayMicroseconds(10);
   delayMicroseconds(10);
  
}