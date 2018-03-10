
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Lancio dado? (Y/N)");
}

void loop() {
  // put your main code here, to run repeatedly:
  char inByte = Serial.read();
  if(inByte == 'Y'){
    //ISTRUZIONI PER LA RISPOSTA 'Y' (YES)
    randomSeed(millis());
    int dadoutente = random(1,7);
    int dadoarduino = random(1,7);
    Serial.print("Dado utente = ");
    Serial.println(dadoutente);
    Serial.print("Dado arduino = ");
    Serial.println(dadoarduino);
    delay(3000);
    if(dadoutente > dadoarduino){
       Serial.println("Hai vinto!");
    }else if(dadoutente < dadoarduino){
       Serial.println("Hai perso!");
    }else{
       Serial.println("Pareggio!");
    }
    Serial.println("Vuoi giocare ancora? (Y/N)");
  }else if(inByte == 'N'){
    //ISTRUZIONI PER LA RISPOSTA 'N' (NO) 
    Serial.println("Grazie e alla prossima!"); 
  }
  
}
