
#include <Servo.h>
 
int servoPin = 9;
 
Servo servo;  
 
int servoAngle = 0; 
int incomingByte = 0;


void setup()
{
  Serial.begin(9600);  
  servo.attach(servoPin);
}
 
 
void loop()
{
  test1();
  //test2();
  //test3();
}

void test1()
{
  for(servoAngle = 0; servoAngle < 180; servoAngle++)  
  {                                  
    servo.write(servoAngle);              
    delay(10);                  
  }

  for(servoAngle = 180; servoAngle > 0; servoAngle--)  
  {                                
    servo.write(servoAngle);          
    delay(10);      
  }

}

void test2()
{
  if (Serial.available() > 0) {
    incomingByte = Serial.parseInt();
    servo.write(incomingByte);
  }
}

void test3()
{
  double sensorValue = analogRead(A0);
  double output = (sensorValue / 1023) * 180;
  servo.write(output);
  delay(1);
}


