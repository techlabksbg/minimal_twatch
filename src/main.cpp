#include <Arduino.h>

void setup() {
  Serial.begin(115000);
}

/**
 * Open the serial monitor to see the output
 */
void loop() {
  Serial.println("Hello world!");
  delay(1000);
}