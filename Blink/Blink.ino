// Dichiarazione variabili

int led = 13;
int time1 = 1000;

// Setup

void setup() {

  // Inizializzazione pin output

  pinMode(led, OUTPUT);
  Serial.begin(9600);
  
}

// Loop

void loop() {

  // Led acceso

  digitalWrite(led, HIGH);
  delay(time1);

  // Led spento

  digitalWrite(led, LOW);
  delay(time1);

}
