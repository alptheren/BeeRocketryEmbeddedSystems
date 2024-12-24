#define BLUELED 3
#define YELLOWLED 5

void setup() {
  pinMode(BLUELED, OUTPUT);
  pinMode(YELLOWLED, OUTPUT);

}

void loop() {
  for(int i = 0; i < 256; i++){
    analogWrite(BLUELED, i);
    analogWrite(YELLOWLED, i);
    delay(10);
  }
  for(int i = 255; i >= 0; i--){
    analogWrite(BLUELED, i);
    analogWrite(YELLOWLED, i);
    delay(10);
  }
}
