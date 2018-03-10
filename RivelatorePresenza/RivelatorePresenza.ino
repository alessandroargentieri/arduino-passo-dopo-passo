// VARIABILI GLOBALI
int pir = 8;        // pin rivelatore di presenza
int buzzer = 3;     // pin buzzer
int val;            // variabile di presenza: HIGH = 1 = 5 V DC  / LOW = 0 = 0 V DC

void setup() {
  Serial.begin(9600);
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  val = digitalRead(pir);   //salviamo il valore letto dal sensore pir sul pin digitale 8
  if(val == LOW){
     noTone(buzzer);        //silenziamo il buzzer (sul pin 3) se non si rileva presenza alcuna
  }else{
     Serial.println("Presenza rilevata!");
     tone(buzzer, 1000);    //avviamo il suono se si rileva la presenza
     delay(3000);
     noTone(buzzer);
  }
  delay(1000);
}
