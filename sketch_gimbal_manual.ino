//agung ibnu ghani

#include <Servo.h>

Servo servo1;
Servo servo2;

//pin analog joystick pin analog A0 dan A1

int joyX = 0;
int joyY = 1;

int joyVal;

void setup ()
{
 //servo pins PWM 3-5
  servo1.attach (3);
  servo2.attach (5);

  Serial.begin(9600);
}

void loop ()
{
  joyVal = analogRead(joyX);
  Serial.println(joyVal);
  joyVal = map (joyVal, 0, 1023, 20, 160);
  servo1.write(joyVal);
  
  joyVal = analogRead(joyY);
  joyVal = map (joyVal, 0, 1023, 20, 160);
  servo2.write(joyVal);

  delay(1500);
}

