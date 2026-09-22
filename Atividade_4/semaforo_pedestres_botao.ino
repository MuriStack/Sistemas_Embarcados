const int pin_v_v = 13;
const int pin_v_a = 12;
const int pin_v_g = 10;

const int pin_p_v = 7;
const int pin_p_g = 6;

const int botao = 5;

void setup()
{
  pinMode(pin_v_v, OUTPUT);
  pinMode(pin_v_a, OUTPUT);
  pinMode(pin_v_g, OUTPUT);
  
  pinMode(pin_p_v, OUTPUT);
  pinMode(pin_p_g, OUTPUT);
  
  pinMode(botao, INPUT);
  

  digitalWrite(pin_v_g, HIGH);
  digitalWrite(pin_v_a, LOW);
  digitalWrite(pin_v_v, LOW);
  
  digitalWrite(pin_p_v, HIGH);
  digitalWrite(pin_p_g, LOW);
}

void loop()
{
  int estadoBotao = digitalRead(botao);
  
  
  if (estadoBotao == HIGH) {
    
    
    delay(2000);
    
    
    digitalWrite(pin_v_g, LOW);
    digitalWrite(pin_v_a, HIGH);
    delay(2000);
    
    
    digitalWrite(pin_v_a, LOW);
    digitalWrite(pin_v_v, HIGH);
    
    
    delay(1000);
    
    
    digitalWrite(pin_p_v, LOW);
    digitalWrite(pin_p_g, HIGH);
    delay(5000);
    
    
    for (int i = 0; i < 3; i++) {
      digitalWrite(pin_p_g, LOW);
      delay(400);
      digitalWrite(pin_p_g, HIGH);
      delay(400);
    }
    
    
    digitalWrite(pin_p_g, LOW);
    digitalWrite(pin_p_v, HIGH);
    
    
    delay(1000);
    

    digitalWrite(pin_v_v, LOW);
    digitalWrite(pin_v_g, HIGH);
  }
  
  delay(50); 
}