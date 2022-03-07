#include <LiquidCrystal.h>
#define echoPin 6 // attach pin D2 of Arduino to pin Echo of HC -SR04
#define trigpin 7 // attach pin D3 of Arduino to pin Trig of HC -SR04

#define trig1 7
#define echo1 6
int D7_pin = 8;
int D6_pin = 9;
int D5_pin = 10;
int D4_pin = 13;
int EN_pin = 11;
int RS_pin = 12;

LiquidCrystal lcd(RS_pin, EN_pin, D4_pin, D5_pin, D6_pin, D7_pin);

void setup()
{
  pinMode(trig1, OUTPUT);
  pinMode(echo1,INPUT);
  
   pinMode(trig1, OUTPUT); //Sets trigPin as an output
   pinMode(echo1, INPUT); // Sets echoPin as an input
   Serial.begin(9600); // Serial Communication starts with 9600 baud rate
   
   


       lcd.begin (16,2);
}

void loop()
{
 long duration , distance;
 digitalWrite(trig1 ,LOW);
 delayMicroseconds(5);
 digitalWrite(trig1, HIGH);
 delayMicroseconds(15);
 digitalWrite(trig1, LOW);
 duration = pulseIn(echo1, HIGH);
 distance = duration *0.034 / 2;
 lcd.setCursor(0,0);
 lcd.print("DISTANCE");
 lcd.print(distance);
 lcd.print("cm");
 delay(10);
}

   