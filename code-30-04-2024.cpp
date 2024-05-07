int readpin = A1;
int writepin = 6;
int delayT = 1000;
int sensorvalue; 
float V;

void setup()
{
  pinMode(readpin, INPUT);
  pinMode(writepin, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  sensorvalue = analogRead(readpin);
  Serial.println(sensorvalue);
  delay(delayT); 
  V = sensorvalue*(5.0/1023.0);
  analogWrite(writepin, V);

  if (V>4.0) {
    digitalWrite(writepin, HIGH);
  }
  
  if (V<4.0) {
    digitalWrite(writepin, LOW);
  }
  
  
}

