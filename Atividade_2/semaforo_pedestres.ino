const int pin_v_v = 13;
const int pin_v_a = 11;
const int pin_v_g = 8;

const int pin_p_v = 6;
const int pin_p_g = 4;

void setup()
{
	pinMode(pin_v_v, OUTPUT);
    pinMode(pin_v_a, OUTPUT);
    pinMode(pin_v_g, OUTPUT);
  
    pinMode(pin_p_v, OUTPUT);
    pinMode(pin_p_g, OUTPUT);
}

void loop(){

    digitalWrite(pin_v_g, HIGH);
    digitalWrite(pin_v_a, LOW);
    digitalWrite(pin_v_v, LOW);

	digitalWrite(pin_p_v, HIGH);
    digitalWrite(pin_p_g, LOW);
	delay(5000);
	
	digitalWrite(pin_v_g, LOW);
	digitalWrite(pin_v_a, HIGH);
	delay(2000);

	digitalWrite(pin_v_a, LOW);
	digitalWrite(pin_v_v, HIGH);
	delay(1000);

	digitalWrite(pin_p_v, LOW);
	digitalWrite(pin_p_g, HIGH);
	delay(5000);
	
}