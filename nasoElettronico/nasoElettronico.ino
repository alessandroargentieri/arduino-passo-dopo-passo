
//VARIABILI GLOBALI
int buzzer = 3;           // il pin digitale 3 supporta la PWM e alimenta il buzzer
boolean monitora = false; // controlla il monitoraggio del gas
unsigned long istante;   // salviamo gli istanti di tempo

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  //ISTRUZIONI ALL'UTENTE
  Serial.println("Avvio monitoraggio metano: 'A'");
  Serial.println("Stop monitoraggio metano: 'S'");
  //CATTURIAMO IL VALORE DEL PRIMO ISTANTE DI TEMPO
  istante = millis(); 
}

void loop() {
  // 1. CATTURIAMO LA SCELTA DELL'UTENTE DA TASTIERA
  char inByte = Serial.read();
  if(inByte == 'A'){
    monitora = true;
    Serial.println("Avvio monitoaggio metano");
  }else if(inByte == 'S'){
    monitora = false;
    Serial.println("Stop monitoaggio metano");
    noTone(buzzer);  //STOP DEL SUONO SUL PIN DIGITALE 3
  }
  // 2. STRUTTURIAMO IL MONITORAGGIO DEL METANO
  if(monitora == true  && millis()-istante > 5000){
     int metano = analogRead(0);     //legge sensore da pin analogico A0
     Serial.print("Tensione sensore metano: ");
     Serial.println(metano);
     tone(buzzer, metano);
     istante = millis();
  }
}
