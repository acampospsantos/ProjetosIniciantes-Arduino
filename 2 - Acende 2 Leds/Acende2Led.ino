//Porta(Pino) do Led laranja = 12 
//Porta(Pino) do Led azul = 2

void setup() {
  pinMode(12, OUTPUT);
  pinMode(2, OUTPUT);
  //Leds começam apagados
  digitalWrite(12, LOW);
  digitalWrite(2, LOW);
}

void loop() {
  delay(100); // Wait for 100 millisecond(s)

  //Apaga o led laranja e acende o led azul
  digitalWrite(12, LOW);
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  //Apaga o led azul e acende o led laranja
  digitalWrite(12, HIGH);
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}