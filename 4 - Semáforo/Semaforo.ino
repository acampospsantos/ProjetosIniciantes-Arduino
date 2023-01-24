void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(1, OUTPUT);

  //Os pinos dos 3 sinais começam ligados
  digitalWrite(13, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(1, HIGH);
}

void loop() {
  delay(1000); // Wait for 1000 millisecond(s)
  //Sinal Vermelho começa ligado 
  digitalWrite(13, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(1, LOW);

  delay(1000); // Wait for 1000 millisecond(s)
  //Sinal Verde ligado
  digitalWrite(13, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(1, LOW);

  delay(1000); // Wait for 1000 millisecond(s)
  //Sinal amarelo ligado
  digitalWrite(13, LOW);
  digitalWrite(8, LOW);
  digitalWrite(1, HIGH);

  delay(600); // Wait for 600 millisecond(s)
}