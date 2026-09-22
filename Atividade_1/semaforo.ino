const int pin_v = 13;
const int pin_a = 10;
const int pin_g = 7;

void setup()
{
	pinMode(pin_v, OUTPUT);
  	pinMode(pin_a, OUTPUT);
  	pinMode(pin_g, OUTPUT);
}

void loop()
{
	digitalWrite(pin_v, HIGH);
  	digitalWrite(pin_a, LOW);
  	digitalWrite(pin_g, LOW);
  	delay(5000);
  
  	digitalWrite(pin_a, HIGH);
  	digitalWrite(pin_v, LOW);
  	digitalWrite(pin_g, LOW);
  	delay(1000);
  
  	digitalWrite(pin_g, HIGH);
  	digitalWrite(pin_v, LOW);
  	digitalWrite(pin_a, LOW);
  	delay(4000);
}