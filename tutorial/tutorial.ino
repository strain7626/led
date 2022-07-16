void setup() {
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  digitalWrite(8,HIGH);
  delay(100);/*
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(2,HIGH);
  delay(500);*/
  digitalWrite(8,LOW);
  delay(100);/*
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(2,LOW);
  delay(500);*/
}
