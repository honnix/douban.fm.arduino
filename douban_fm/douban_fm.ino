int LENGTH = 3;

int ledPins[] = {12, 11, 10};
int buttonPins[] = {5, 4, 3};
int channelIds[] = {0, 32, -1};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < LENGTH; ++i) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i < LENGTH; ++i) {
    if (digitalRead(buttonPins[i])) {
      switchChannel(i);
    }
  }

  delay(1);
}

void switchChannel(int which) {
  for (int i = 0; i < LENGTH; ++i) {
    if (i == which) {
      digitalWrite(ledPins[i], HIGH);
      Serial.println(channelIds[i]);
      Serial.flush();
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
  
  delay(1000);
}
