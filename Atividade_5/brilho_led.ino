const int pinoLED = 11;

void setup() {
  pinMode(pinoLED, OUTPUT);
}

void loop() {
  for (int brilho = 0; brilho <= 255; brilho++) {
    analogWrite(pinoLED, brilho);
    delay(10);
  }
  for (int brilho = 255; brilho >= 0; brilho--) {
    analogWrite(pinoLED, brilho);
    delay(10);
  }
}