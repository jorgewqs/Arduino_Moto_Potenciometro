/*

Movimentando um Servo Motor com Potenciometro.
Autor: Jorge Wendell
Email: jorgewqs@gmail.com

*/

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
int potPin = 0; 
int potValue = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  Serial.begin(9600);
}
 
 
void loop() 
{ 
  potValue = analogRead(potPin);
  potValue = map(potValue, 0, 1023, 0, 179); 
  myservo.write(potValue);
  
  Serial.println(potValue);
} 
