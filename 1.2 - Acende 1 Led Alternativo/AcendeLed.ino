void setup() {
  pinMode(13, OUTPUT);
  //Led começa aceso
  digitalWrite(13, HIGH);
  delay(700); // Wait for 700 millisecond(s)
}

void loop() {  
  //Apaga o Led
  digitalWrite(13, LOW);  
  delay(1000); // Wait for 1000 millisecond(s)

  //Acende o Led
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
