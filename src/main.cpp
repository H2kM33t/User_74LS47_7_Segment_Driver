#include <Arduino.h>

void setup()
{
  DDRB = 0XFF;
}

void loop()
{
  PORTB = 0X00;
  delay(1000);
  PORTB = 0X01;
  delay(1000);
  PORTB = 0X02;
  delay(1000);
  PORTB = 0X03;
  delay(1000);
  PORTB = 0X04;
  delay(1000);
  PORTB = 0X05;
  delay(1000);
  PORTB = 0X06;
  delay(1000);
  PORTB = 0X07;
  delay(1000);
  PORTB = 0X08;
  delay(1000);
  PORTB = 0X09;
  delay(1000);

}