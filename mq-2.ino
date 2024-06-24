int gasPin = A0;
int gasValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  gasValue = analogRead(gasPin);
  Serial.println(gasValue);
  delay(1000);
}
