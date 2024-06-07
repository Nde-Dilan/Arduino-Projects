#include <Arduino.h>

const int soundSensorPin = A0; // Pin du capteur de son (analogique)
const int greenLEDPin1 = 3;    // Pin de la première LED verte
const int greenLEDPin2 = 4;    // Pin de la deuxième LED verte
const int yellowLEDPin1 = 5;   // Pin de la première LED jaune
const int yellowLEDPin2 = 6;   // Pin de la deuxième LED jaune
const int redLEDPin1 = 7;      // Pin de la première LED rouge
const int redLEDPin2 = 8;      // Pin de la deuxième LED rouge

void setup() {
    pinMode(soundSensorPin, INPUT);
    pinMode(greenLEDPin1, OUTPUT);
    pinMode(greenLEDPin2, OUTPUT);
    pinMode(yellowLEDPin1, OUTPUT);
    pinMode(yellowLEDPin2, OUTPUT);
    pinMode(redLEDPin1, OUTPUT);
    pinMode(redLEDPin2, OUTPUT);
}

void loop() {
    int soundValue = analogRead(soundSensorPin); // Lire la valeur du capteur de son

    // Éteindre toutes les LEDs
    digitalWrite(greenLEDPin1, LOW);
    digitalWrite(greenLEDPin2, LOW);
    digitalWrite(yellowLEDPin1, LOW);
    digitalWrite(yellowLEDPin2, LOW);
    digitalWrite(redLEDPin1, LOW);
    digitalWrite(redLEDPin2, LOW);

    // Allumer les LEDs en fonction de l'intensité du son
    if (soundValue < 300) {
        // Intensité faible : allumer les LEDs vertes
        digitalWrite(greenLEDPin1, HIGH);
        digitalWrite(greenLEDPin2, HIGH);
    } else if (soundValue >= 300 && soundValue < 600) {
        // Intensité moyenne : allumer les LEDs jaunes
        digitalWrite(yellowLEDPin1, HIGH);
        digitalWrite(yellowLEDPin2, HIGH);
    } else if (soundValue >= 600) {
        // Intensité élevée : allumer les LEDs rouges
        digitalWrite(redLEDPin1, HIGH);
        digitalWrite(redLEDPin2, HIGH);
    }
}
