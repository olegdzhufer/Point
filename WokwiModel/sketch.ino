#define BUZZER 4
#define PIR 2

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop() {
  if (digitalRead(PIR) == HIGH) {
    digitalWrite(BUZZER, HIGH);
  } else if (digitalRead(PIR) == LOW) {
    digitalWrite(BUZZER, LOW);
  }
}
