#include <Arduino.h>
#include <DHT.h>

#define DHTPIN A2     // Analog pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);
int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  dht.begin();
}
void loop() {
  digitalWrite(ledPin, HIGH); // Allume la LED
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    // Au lieu de 'return', continuez simplement la boucle
  } else {
    float hic = dht.computeHeatIndex(t, h, false);

    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print("%  Temperature: ");
    Serial.print(t);
    Serial.print("°C  Heat index: ");
    Serial.print(hic);
    Serial.println("°C");
  }
  digitalWrite(ledPin, LOW);
  delay(1000);
}
