#include <Arduino.h>
#include <logging/logging.h> // <-- problematic include line

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
}

uint8_t ledOn = LOW;
void loop() {
  digitalWrite(LED_BUILTIN, ledOn);
  ledOn ^= HIGH;

  delay(500);
}
