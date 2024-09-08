char rcv;
float temp;

void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  Serial.begin(9600);  //baud rate(bps)
}

void loop() {

  temp = (analogRead(A0) / 1023.0) * 500;
  Serial.println(temp);

  if (temp >= 30) {
    digitalWrite(11, HIGH);
  } else if (temp >= 20) {
    digitalWrite(12, HIGH);
  } else if (temp >= 10) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  delay(1000);
}
