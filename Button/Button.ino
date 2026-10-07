// Dichiarazione variabili

int led = 13;
int button = 12;

int state;

// Setup

void setup() {

  // Pin input/output

  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  
}

// Loop

void loop() {

  // Assegnazione variabile tasto

  state = digitalRead(button);

  // Tasto premuto/non premuto

  if (state == 1) {

    // Led acceso
    
    digitalWrite(led, HIGH);
    
  }
  else {

    // Led spento

    digitalWrite(led, LOW);
    
  }
  
}
