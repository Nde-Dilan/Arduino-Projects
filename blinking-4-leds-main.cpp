#include <Arduino.h>

int ledone = 10;
int ledtwo = 11;
int ledthree = 12;
int ledfour = 13;
int paah = 550;
void setup() {
  // put your setup code here, to run once:
     pinMode(ledone,OUTPUT);
     pinMode(ledtwo,OUTPUT);
     pinMode(ledthree,OUTPUT);
     pinMode(ledfour,OUTPUT);
}

void loop() {
  // put your main code run repeatedly:
digitalWrite(ledone,LOW);
digitalWrite(ledtwo,LOW);
digitalWrite(ledthree,LOW);
digitalWrite(ledfour,LOW);
delay(paah);

digitalWrite(ledone,HIGH);
digitalWrite(ledtwo,LOW);
digitalWrite(ledthree,LOW);
digitalWrite(ledfour,LOW);
delay(paah);

digitalWrite(ledone,LOW);
digitalWrite(ledtwo,HIGH);
digitalWrite(ledthree,LOW);
digitalWrite(ledfour,LOW);
delay(paah);

digitalWrite(ledone,HIGH);
digitalWrite(ledtwo,HIGH);
digitalWrite(ledthree,LOW);
digitalWrite(ledfour,LOW);
delay(paah);

digitalWrite(ledone,LOW);
digitalWrite(ledtwo,LOW);
digitalWrite(ledthree,HIGH);
digitalWrite(ledfour,LOW);
delay(paah);

digitalWrite(ledone,HIGH);
digitalWrite(ledtwo,LOW);
digitalWrite(ledthree,HIGH);
digitalWrite(ledfour,LOW);
delay(paah);

digitalWrite(ledone,LOW);
digitalWrite(ledtwo,HIGH);
digitalWrite(ledthree,HIGH);
digitalWrite(ledfour,LOW);
delay(paah);

digitalWrite(ledone,HIGH);
digitalWrite(ledtwo,HIGH);
digitalWrite(ledthree,HIGH);
digitalWrite(ledfour,LOW);
delay(paah);

digitalWrite(ledone,LOW);
digitalWrite(ledtwo,LOW);
digitalWrite(ledthree,LOW);
digitalWrite(ledfour,HIGH);
delay(paah);

digitalWrite(ledone,HIGH);
digitalWrite(ledtwo,LOW);
digitalWrite(ledthree,LOW);
digitalWrite(ledfour,HIGH);
delay(paah);

digitalWrite(ledone,LOW);
digitalWrite(ledtwo,HIGH);
digitalWrite(ledthree,LOW);
digitalWrite(ledfour,HIGH);
delay(paah);

digitalWrite(ledone,LOW);
digitalWrite(ledtwo,LOW);
digitalWrite(ledthree,HIGH);
digitalWrite(ledfour,HIGH);
delay(paah);

digitalWrite(ledone,HIGH);
digitalWrite(ledtwo,LOW);
digitalWrite(ledthree,HIGH);
digitalWrite(ledfour,HIGH);
delay(paah);

digitalWrite(ledone,LOW);
digitalWrite(ledtwo,HIGH);
digitalWrite(ledthree,HIGH);
digitalWrite(ledfour,HIGH);
delay(paah);

digitalWrite(ledone,HIGH);
digitalWrite(ledtwo,HIGH);
digitalWrite(ledthree,HIGH);
digitalWrite(ledfour,HIGH);
delay(paah);
}