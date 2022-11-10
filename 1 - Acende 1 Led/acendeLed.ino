void setup(){
  pinMode(13, OUTPUT);
  //Led começa aceso
  digitalWrite(13, HIGH);
  delay(500); // Wait for 500 millisecond(s)
}

void loop(){
    //Apaga o Led
    digitalWrite(13, LOW);
    delay(600); // Wait for 600 millisecond(s)
    
    //Acende o Led
    digitalWrite(13, HIGH);
    delay(600); // Wait for 600 millisecond(s)
}
