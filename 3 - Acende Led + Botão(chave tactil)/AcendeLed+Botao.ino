void setup(){
  pinMode(2, OUTPUT);
  pinMode(2, INPUT);
  pinMode(10, OUTPUT);
  //LED começa aceso(só pra testar) e o botão desligado inerte
  digitalWrite(2, LOW);
  digitalWrite(10, HIGH); 
  delay(700); //Wait for 700 millisecond(s)
}

void loop(){
  if (digitalRead(2) == HIGH) { //Se o pino 2 tiver ligado(botão apertado)
    digitalWrite(10, HIGH); //Liga o pino 10 (liga o led)
  } else { //Se o pino 2 não tiver ligado(botão não estiver sendo apertado)
    digitalWrite(10, LOW); //Desliga o pino 10 (desliga o led)
  }
  delay(10); // Delay a little bit to improve simulation performance
}