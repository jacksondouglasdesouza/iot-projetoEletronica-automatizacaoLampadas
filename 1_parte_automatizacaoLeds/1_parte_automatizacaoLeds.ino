// Arduino IDE - LED's como atuadores
//Projeto Sensor de Aproximação para acender LED.
//01 Parte - Loop aleatório dos LEDs, liga e desliga automaticamente.
// Protótipo Desenvolvido por: Jackson Douglas de Souza
//Me ADD LinkedIn - https://www.linkedin.com/in/jacksondouglasdesouza
//Me ADD GitHub - https://github.com/jacksondouglasdesouza


void setup()
{
pinMode(1, INPUT);
pinMode(2, INPUT);
pinMode(3, INPUT);

pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
  
}


void loop()
{
  digitalWrite(5, HIGH);
  delay(1000); // Acende por 1000 millisegundos
  digitalWrite(5, LOW);
  delay(1000); // Acende por 1000 millisegundos
  
  digitalWrite(6, HIGH);
  delay(1000); // Acende por 1000 millisegundos
  digitalWrite(6, LOW);
  delay(1000); // Acende por 1000 millisegundos
  
  digitalWrite(7, HIGH);
  delay(1000); // Acende por 1000 millisegundos
  digitalWrite(7, LOW);
  delay(1000); // Acende por 1000 millisegundos
  
}