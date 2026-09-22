const int led = 12;
const int botao = 7;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{
  int estadoBotao = digitalRead(botao);
  
  if (estadoBotao == HIGH){
  	digitalWrite(led, HIGH);
  } else {
  	digitalWrite(led, LOW);
  }
}