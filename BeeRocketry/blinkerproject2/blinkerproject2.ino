#define potpin A0
int value = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Read Pot value");

}

void loop() {
  value = analogRead(potpin);
  float voltage = (5.00 / 1024.00) * value;
  Serial.println(voltage);
  delay(500); // it is written so that we can read the values more slowly.

}
