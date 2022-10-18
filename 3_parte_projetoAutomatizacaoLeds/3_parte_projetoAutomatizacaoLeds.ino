// Arduino IDE - LED's Sensores como atuadores
//Projeto Sensor de Aproximação para acender LED.
//03 Parte Restart e impressão no display.
// Protótipo Desenvolvido por: Jackson Douglas de Souza
//Me ADD LinkedIn - https://www.linkedin.com/in/jacksondouglasdesouza
//Me ADD GitHub - https://github.com/jacksondouglasdesouza


int lastBtn1 = 0;
int lastBtn2 = 0;
int lastBtn3 = 0;

int btn1 = 0;
int btn2 = 0;
int btn3 = 0;


void setup()
{
pinMode(4, INPUT);
pinMode(2, INPUT);
pinMode(3, INPUT);

pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);

Serial.begin(115200);
delay(1000); // processo de 1000 milisegundos

Serial.println("restart");
  
}


void loop()
{
  btn1 = digitalRead(4);
  btn2 = digitalRead(2);
  btn3 = digitalRead(3);
  
  if (!lastBtn1 && btn1){
    digitalWrite(5, HIGH);
    delay(100); // ativo por 100 milisegundos
    digitalWrite(5, LOW);
    
    Serial.println("Pressionado o Botão 1");
    
  }
  
  if (!lastBtn2 && btn2){
    digitalWrite(6, HIGH);
    delay(100); // ativo por 100 milisegundos
    digitalWrite(6, LOW);
    
    Serial.println("Pressionado o Botão 2");
    
  }
  
  if (!lastBtn3 && btn3){
    digitalWrite(7, HIGH);
    delay(100); // ativo por 100 milisegundos
    digitalWrite(7, LOW);
    
    Serial.println("Pressionado o Botão 3");
    
  }
  
  lastBtn1 = btn1;
  lastBtn2 = btn2;
  lastBtn3 = btn3;
  
}


/*

int lastBtn1 = 0;
int lastBtn2 = 0;
int lastBtn3 = 0;

int btn1 = 0;
int btn2 = 0;
int btn3 = 0;


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
  btn1 = digitalRead(1);
  btn2 = digitalRead(2);
  btn3 = digitalRead(3);
  
  if (!lastBtn1 && btn1){
    digitalWrite(5, HIGH);
    delay(100); // ativo por 100 milisegundos
    digitalWrite(5, LOW);
    
  }
  
  if (!lastBtn2 && btn2){
    digitalWrite(6, HIGH);
    delay(100); // ativo por 100 milisegundos
    digitalWrite(6, LOW);
    
  }
  
  if (!lastBtn3 && btn3){
    digitalWrite(7, HIGH);
    delay(100); // ativo por 100 milisegundos
    digitalWrite(7, LOW);
    
  }
  
  lastBtn1 = btn1;
  lastBtn2 = btn2;
  lastBtn3 = btn3;
  
  
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
  */
  