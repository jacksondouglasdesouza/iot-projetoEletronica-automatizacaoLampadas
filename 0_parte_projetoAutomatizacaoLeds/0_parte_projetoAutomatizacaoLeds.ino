// Arduino IDE - LED's Sensores como atuadores
//Projeto Sensor de Aproximação para acender LED.
//0 - pressionamento para ativar LED de forma que apague após o botão for solto.
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
  digitalWrite(5, digitalRead(1));
  delay(100); //ativo por 100 milisegundos
  
  digitalWrite(6, digitalRead(2));
  delay(100); //ativo por 100 milisegundos
  
  digitalWrite(7, digitalRead(3));
  delay(100); //ativo por 100 milisegundos
  
}