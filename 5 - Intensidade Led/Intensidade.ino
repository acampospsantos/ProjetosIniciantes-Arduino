boolean crescente = true;
int var = 0;

void setup(){
   pinMode(10, OUTPUT);

   //Liga o led(intensidade máxima) só pra ver que tá funcionando
   analogWrite(10, 255);
   delay(500);
   analogWrite(10, var); //desliga o led(intensidade mínima)
}


void loop(){
   analogWrite(10, var);
   if(crescente == true) {
      var = var + 1;
      if(var == 255) {
         crescente = false;
      }
   } else { //crescente == false
      var = var - 1;
      if(var == 0){ 
         crescente = true;
      } 
   }    
   delay(10);
}