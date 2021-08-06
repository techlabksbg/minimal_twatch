#include <Arduino.h>

void setup() {
  Serial.begin(115000);
}

/**
 * Global variable of type int (32 Bits)
 * initialized to 0.
 */

int counter=0;

void loop() {
  Serial.printf("counter=%d, it takes up %d bytes\n", counter, sizeof(counter));
  delay(1000);
  counter++;   // Increase counter by 1
}