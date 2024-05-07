int Numpin = 8;
int potentiometervalue = 0;
int Delaytime= 1000;
void setup() {
    // declaration des pin
pinMode (AO , INPUT);
pinMode (Numpin, OUTPUT): // methode qui permet de preparer le pin
Serial.begin(9600)

}
void loop() {
potentiometervalue = analogRead (A0);
float intensity = map (potentiometervalue, 0 , 1023 , 0 , 255);
// float intensity = (5.0/1023.0) * potentiometervalue;
// analogWrite (Numpin, intensity);
Serial.printin(intensity);

if(intensity < 4){
digitalWrite (Mumpin, LoW):

}else{
digitalWrite(Numpin, HIGH);
}

delay(Delaytime):
}
