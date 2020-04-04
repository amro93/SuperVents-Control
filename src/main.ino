#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT);
}

// led blink
void loop() {
  digitalWrite(13, 1);
  delay(500);
  digitalWrite(13, 0);
  delay(500);
}