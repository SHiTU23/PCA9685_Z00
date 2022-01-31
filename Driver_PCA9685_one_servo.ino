//// one Driver with a servo connect to 7th pin of Driver board  \\\\

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#define Servo_pin 7

Adafruit_PWMServoDriver servo = Adafruit_PWMServoDriver();

int Servo_Max = 600;
void setup() {
  Serial.begin(9600);
  Serial.println("16 channel PWM test!");

  servo.begin();
  servo.setPWMFreq(50);  // This is for PWM frequency

}

void loop()
{
  servo.setPWM(Servo_pin , 0 , Servo_Max); //setPWM(channel, on, off)
  delay(300);
}
