
#include<Servo.h>
int sensor1 =2;
int sensor2 =6;
int ledpin1 =3;
int ledpin2 =4;
int servopin1 =5;
int servopin2 =7;
Servo Servo1;
Servo Servo2;

void setup()
{
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(servopin1, OUTPUT);
  pinMode(servopin2, OUTPUT);
Servo1.attach(servopin1);
Servo2.attach(servopin2);
}
void loop(){
int statusSensor1=digitalRead(sensor1); 
int statusSensor2=digitalRead(sensor2);
if(statusSensor1==1 || statusSensor2==1){
  digitalWrite(ledpin1, LOW);
  digitalWrite(ledpin2, HIGH);
  Servo1.write(180);
  Servo2.write(180);
  delay(1000);
}
else{
    digitalWrite(ledpin1,HIGH);
    digitalWrite(ledpin2,LOW);
    Servo1.write(90);
    Servo2.write(90);
    delay(1000);
}
delay(1000);
}
