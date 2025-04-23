int L1 = 10;

void setup() {
  Serial.begin(9600);
  pinMode(L1, OUTPUT);
}

void loop() {
  digitalWrite(L1, HIGH);
  delay(500);
  digitalWrite(L1, LOW);
  delay(500);

  Serial.println("Funcionando");
  delay(1000);
}
