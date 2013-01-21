int LENGTH = 3;

int ledPins[] = {12, 11, 10};
int buttonPins[] = {5, 4, 3};
int channelIds[] = {0, 32, 8};

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
      turnOnLed(i);
    }
  }

  delay(1);
}

void turnOnLed(int which) {
  for (int i = 0; i < LENGTH; ++i) {
    if (i == which) {
      digitalWrite(ledPins[i], HIGH);
      Serial.print(channelIds[i]);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
  
  delay(1000);
}
