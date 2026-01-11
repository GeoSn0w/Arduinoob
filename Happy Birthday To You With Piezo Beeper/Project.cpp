int piezo = 8;

void setup() {
  pinMode(piezo, OUTPUT);
}

void loop() {
  beep(262, 180); beep(262, 180);
  beep(294, 360); beep(262, 360);
  beep(349, 360); beep(330, 720);
  delay(500);
  
  beep(262, 180); beep(262, 180);
  beep(294, 360); beep(262, 360);
  beep(392, 360); beep(349, 720);
  delay(500);
  
  beep(262, 180); beep(262, 180);
  beep(523, 360); beep(440, 360);
  beep(349, 360); beep(330, 360);
  beep(294, 720);
  delay(500);
  
  beep(466, 180); beep(466, 180);
  beep(440, 360); beep(349, 360);
  beep(392, 360); beep(349, 720);
  
  delay(2500);
}

void beep(int frequency, int duration) {
  tone(piezo, frequency); //https://docs.arduino.cc/language-reference/en/functions/advanced-io/tone/
  delay(duration * 0.7);
  noTone(piezo); //https://docs.arduino.cc/language-reference/en/functions/advanced-io/noTone/
  delay(duration * 0.3);
}
