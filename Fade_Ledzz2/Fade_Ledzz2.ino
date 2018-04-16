/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
int velocitat =                  500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0, 2);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

   analogWrite(led0, 9);     // posar PWM del pin 3 a 60
  analogWrite(led1, 2);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

   analogWrite(led0, 25);     // posar PWM del pin 3 a 60
  analogWrite(led1,9);     // posar PWM del pin 5 a 60
  analogWrite(led2, 2);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

   analogWrite(led0, 50 );     // posar PWM del pin 3 a 60
  analogWrite(led1,25 );     // posar PWM del pin 5 a 60
  analogWrite(led2,9 );     // posar PWM del pin 6 a 60
  analogWrite(led3, 2);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

   analogWrite(led0,115 );     // posar PWM del pin 3 a 60
  analogWrite(led1, 50 );     // posar PWM del pin 5 a 60
  analogWrite(led2, 25 );     // posar PWM del pin 6 a 60
  analogWrite(led3, 9);     // posar PWM del pin 9 a 60
  analogWrite(led4, 2);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

 analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 115);     // posar PWM del pin 5 a 60
  analogWrite(led2, 50);     // posar PWM del pin 6 a 60
  analogWrite(led3, 25);     // posar PWM del pin 9 a 60
  analogWrite(led4, 9);     // posar PWM del pin 10 a 60
  analogWrite(led5, 2);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

   analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 115);     // posar PWM del pin 6 a 60
  analogWrite(led3, 50);     // posar PWM del pin 9 a 60
  analogWrite(led4, 25);     // posar PWM del pin 10 a 60
  analogWrite(led5, 9);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

 analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 115);     // posar PWM del pin 9 a 60
  analogWrite(led4, 50);     // posar PWM del pin 10 a 60
  analogWrite(led5, 25);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

   analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 255);     // posar PWM del pin 9 a 60
  analogWrite(led4, 115);     // posar PWM del pin 10 a 60
  analogWrite(led5, 50);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

   analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 255);     // posar PWM del pin 9 a 60
  analogWrite(led4, 255);     // posar PWM del pin 10 a 60
  analogWrite(led5, 115);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

   analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 255);     // posar PWM del pin 9 a 60
  analogWrite(led4, 255);     // posar PWM del pin 10 a 60
  analogWrite(led5, 255);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  
}
//********** Funcions *************************************************************
