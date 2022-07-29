char i, j, counter, seg[] = {0x3f, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

void setup() {

  for (i = 0; i < 14; i++) {
    pinMode(13 - i, OUTPUT);
    digitalWrite(13 - i, (seg[0] >> i) & 0x01);
  }
}

void loop() {

  for (j = 0; j < 100; j++) {

    sev_display(seg[j / 10], 13);
    sev_display(seg[j % 10], 6);
    delay(250);
  }
}

void sev_display(char num, char pin_no) {
  char i;
  for (i = 0; i < 7; i++)
    digitalWrite(pin_no - i, (num >> i) & 0x01);
}
