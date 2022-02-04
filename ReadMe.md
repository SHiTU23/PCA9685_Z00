## **Welcome to the PCA9685 Servo-motor driver tutorial:**


#### First of all you need to know what is PCA9685 and how it works.   
To do so, go to the _Doc_ directory and read the file named _**ServoMotor_Driver**_.  
You can also check the _PCA9685 Datasheet_ which is located in the same directory.   

##### *Now you've learn a bit about PCA9685 it's time to try something more intereing.*  

### What you need to drive a servo motor by PCA9685 driver:
 - Arduino board
 - Servo motor
 - PCA9685
 - Jumper cables

Then check for its wiring and how it's connected to Arduino.
To understand better you can check [this](https://learn.adafruit.com/16-channel-pwm-servo-driver?view=all).

## Wiring Hint
![Wiring](https://s20.picofile.com/file/8447222642/wiring.png)

## Codes
Before run any code note its library is added to your Arduino IDE. The library is "Adafriut PWM Servo Driver"   
If you need help check [this](https://learn.adafruit.com/adafruit-all-about-arduino-libraries-install-use) out. 

To add its library to the code, we need to call it:
```c   

   #include<Adafruit_PWMServoDriver.h>
   
```

Then create an object for your servo like the following code block:
```c   

  Adafruit_PWMServoDriver My_servo = Adafruit_PWMServoDriver();
   
```
By this code block your servo name is _"MY_servo"_ in your code.   

#### **First step**
To run a simple code and drive a servo you can find the sample code  _**"Driver_PCA9685_One_Servo"**_ which is located in _Codes_ file.   

**Notice** that you have to set your servo frequency in _void setup_ which for same servo motors are the same.   

## Change servo position

This code will convert entered desired anlgle to the appropriate pulse width.
```c   

   Duty = map(Degree, 0, 180, Servo_Min, Servo_Max);
   servo.setPWM(Servo_pin, 0, Duty); // setPWM(channel, on, off)

```

_Now run the code and see how it works._   


_**You've almost mastered that**_   



### **Keep it up**   

#### Note that if you want to drive more than 16 Servo motors(A PCA9685 is able to drive 16 Servo motor simultaneously), you must parallel two or more PCA9685 depending on the number of servos you're connecting. To distinguish each PCA, you have to chane its I2C address from the back of the board and according to the address you need to define it in code. The code named _**Two servo driver**_ in _Code_ file ought to help you.



#### To define objects for PCAs you must refer to their specific I2C address.
```c   

   Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver(0x40);
   Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41);

```

Otherthings are same as before.   

**Good luck**

