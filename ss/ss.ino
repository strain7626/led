void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(A0);
  Serial.println(lightValue);

  if(lightValue < 200){
    digitalWrite(7, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }
  delay(1000);
}
