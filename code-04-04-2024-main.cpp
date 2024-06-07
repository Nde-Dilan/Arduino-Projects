#include <Arduino.h>

int redpin = 2;
int greenpin = 4;
int paah = 700;
int poo = 350;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
}

void loop() {
  for(int i=0; i<9; i++){
    if(i<=4){
      digitalWrite(redpin, HIGH);
      delay(paah);
      digitalWrite(redpin, LOW);
      delay(paah);
    }
    else{
      digitalWrite(greenpin, HIGH);
      delay(poo);
      digitalWrite(greenpin, LOW);
      delay(poo);
    }
  }
}