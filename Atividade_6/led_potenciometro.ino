const int pinoPot = A0;
const int pinoLED = 11;

void setup() {
  pinMode(pinoLED, OUTPUT);
}

void loop() {
  int valorPot = analogRead(pinoPot);

  int brilho = map(valorPot, 0, 1023, 0, 255);

  analogWrite(pinoLED, brilho);
}