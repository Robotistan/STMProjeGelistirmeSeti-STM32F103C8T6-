#include <Servo.h>

int servoPin = PA0;
int potPin = PA3;
int potValue = 0;
int servoAngle = 0;

Servo myServo;

geçersiz kurulum ()

{
myServo.attach (servoPin);
}

boşluk döngüsü ()
{
potValue = analogRead (potPin);
servoAngle = (potValue / 34);
myServo.write (servoAngle);
gecikme (100);
}
