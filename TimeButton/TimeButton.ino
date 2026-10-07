// Dichiarazione varibili pin

int led = 13;

int button1 = 12;
int button2 = 11;

int state1;
int state2;

// Dichiarazione variabili time

int timeX;

int time1 = 500;
int time2 = 1000;

// Setup

void setup() {

  // Pin input/output

  pinMode(led, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  
}

// Loop

void loop() {

  // Assegnazione stato tasti

  state1 = digitalRead(button1);
  state2 = digitalRead(button2);

  // Tasto 1 premuto

  if (state1 == 1) {

    // Time impostato su time 1
    
    timeX = time1;
    
  }

  // Tasto 2 premuto

  if (state2 == 1) {

    // Time impostato su time 2

    timeX = time2;
    
  }
  
}
