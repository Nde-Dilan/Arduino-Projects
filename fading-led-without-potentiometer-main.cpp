#include <Arduino.h>

int readpin = A2;
int redpin = 5;
int greenpin = 3;
int paa = 300;
int V = 0;
float value;

void setup() {
  pinMode(readpin, INPUT);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  V = analogRead(readpin);
  value = (V / 1023.0) * 5.0;
  Serial.println(value);
  delay(paa);

  if (value < 2.5) {
    digitalWrite(greenpin, HIGH);
    delay(paa);
    digitalWrite(greenpin, LOW);
    delay(paa);
  } else {
    digitalWrite(redpin, HIGH);
    delay(paa);
    digitalWrite(redpin, LOW);
    delay(paa);
  }
}
