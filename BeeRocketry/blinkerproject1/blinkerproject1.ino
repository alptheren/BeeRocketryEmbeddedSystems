#define LEDRED = 2;
#define LEDBLUE = 3;
#define LEDGREEN = 4;
#define LEDYELLOW = 5;
#define LEDWHITE = 6;


void setup() {
  pinMode(LEDRED, OUTPUT);
  pinMode(LEDBLUE, OUTPUT);
  pinMode(LEGREEN, OUTPUT);
  pinMode(LEDYELLOW, OUTPUT);
  pinMode(LEDWHITE, OUTPUT);
}

void loop() {
    digitalWrite(LEDRED, HIGH);
    digitalWrite(LEDBLUE, HIGH);
    digitalWrite(LEDGREEN, HIGH);
    digitalWrite(LEDYELLOW, HIGH);
    digitalWrite(LEDWHITE, HIGH);
    delay(1000);
    digitalWrite(LEDRED, LOW);
    digitalWrite(LEDBLUE, LOW);
    digitalWrite(LEDGREEN, LOW);
    digitalWrite(LEDYELLOW, LOW);
    digitalWrite(LEDWHITE, LOW);
    delay(1000);
  }
