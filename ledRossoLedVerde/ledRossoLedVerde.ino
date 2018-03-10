int ledR = 8;  // il pin 8 alimenta il led rosso
int ledV = 9;  // il pin 9 alimenta il led verde

void setup() {
  //DEFINIZIONE UTILIZZO PIN DIGITALI 
  pinMode(ledR, OUTPUT);  // ledR impostato come pin di uscita
  pinMode(ledV, OUTPUT);  // ledV impostato come pin di uscita
  //ISTRUZIONI PER L'UTENTE
  Serial.begin(9600);
  Serial.println("Accendi pin rosso: 'R'");
  Serial.println("Spegni pin rosso: 'r'");
  Serial.println("Accendi pin verde: 'V'");
  Serial.println("Spegni pin verde: 'v'");
}

void loop() {
  char inByte = Serial.read(); 
  //COSTRUTTO SWITCH-CASE
  switch(inByte){
     case 'R':
        //azioni della casistica R
        digitalWrite(ledR, HIGH);
        Serial.println("Led rosso acceso");
        break;
     case 'r':
        //azioni della casistica r
        digitalWrite(ledR, LOW);
        Serial.println("Led rosso spento");
        break;
     case 'V':
        //azioni della casistica V
        digitalWrite(ledV, HIGH);
        Serial.println("Led verde acceso");
        break;
     case 'v':
        //azioni della casistica v
        digitalWrite(ledV, LOW);
        Serial.println("Led verde spento");
        break;
  }

}
