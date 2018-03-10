int i = 0;

void setup() {
  // ESEGUITO UNA VOLTA SOLA
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // INCREMENTIAMO IL CONTATORE
  i++; // i = i + 1;
  Serial.print("Iterazione n. ");
  Serial.println(i);
  
  // ACCENDIAMO IL LED
  Serial.println("Accendiamo il led");
  digitalWrite(13, HIGH);
  //delay(10);
  // SPEGNAMO IL LED
  Serial.println("Spegnamo il led");
  digitalWrite(13, LOW);
  //delay(10);
}
