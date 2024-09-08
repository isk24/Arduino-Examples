short cnt;

void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, INPUT);
}

void loop() {

  if (digitalRead(11) == 1) {

    cnt++;
    while (digitalRead(11) == 1)
      ;
  }

  if (cnt == 1) {
    digitalWrite(13, HIGH);
  } else if (cnt == 2) {
    digitalWrite(12, HIGH);
  } else if (cnt == 3) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    cnt = 0;
  }
}