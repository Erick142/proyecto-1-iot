const int ledPin = 13;   //the number of the LED pin
const int ldrPin = A0;  //the number of the LDR pin


void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT); 
}

void loop() {

  int ldrStatus = analogRead(ldrPin);

  if (ldrStatus > 990) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Se te ha quedado una luz prendida");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Todas las luces estan apagadas");
  }
  delay(200);
}