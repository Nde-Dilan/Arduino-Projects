#include <Arduino.h>

// Déclarations des variables
int readPin = A2;
int ledPin = 3;
int V = 0;
int seuil = 512; // Définissez le seuil de tension ici
unsigned long previousMillis = 0; // Stockera la dernière fois que la LED a été mise à jour
const long interval = 9; // Intervalle à laquelle la LED clignote (en millisecondes)

void setup() {
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  V = analogRead(readPin); // Lire la valeur du potentiomètre
  Serial.println(V); // Afficher la valeur sur le moniteur série
  delay(1000); // Attendre une seconde

  if (V >= seuil) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      // Si l'intervalle est passé
      previousMillis = currentMillis; // Sauvegarder le temps actuel
      if (digitalRead(ledPin) == LOW) {
        digitalWrite(ledPin, HIGH); // Allumer la LED
      } else {
        digitalWrite(ledPin, LOW); // Éteindre la LED
      }
    }
  } else {
    digitalWrite(ledPin, LOW); // Éteindre la LED si la tension est en dessous du seuil
  }
}
