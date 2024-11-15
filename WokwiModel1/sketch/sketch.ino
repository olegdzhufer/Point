#define PIR 27
#define BUZZER 26
#define LED 2

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  pinMode(PIR, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);
}

boolean isOn = false;

void loop() {
  Serial.println(digitalRead(PIR));
  isOn = digitalRead(PIR);
  digitalWrite(BUZZER, !isOn);
  digitalWrite(LED, isOn);
  
}