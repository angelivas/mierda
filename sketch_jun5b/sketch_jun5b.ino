const int cablePin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(cablePin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(cablePin) == LOW) {
    Serial.println("Cable conectado / continuidad OK");
  } else {
    Serial.println("Cable abierto o dañado");
  }

  delay(500);
}