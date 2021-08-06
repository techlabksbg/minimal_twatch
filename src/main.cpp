#include <Arduino.h>

// Include our header file, so the function header is known
#include "nextprime.h"

// Count milliseconds
long unsigned start=0;  
void setup() {
  Serial.begin(115000);
  Serial.println(2);  // First prime
  start = millis();
}

/**
 * Global variable of type int (32 Bits)
 * initialized to 0.
 */
int prime=0;
/**
 * Only output a prime every step numbers
 */
const int step = 100000;
int next=step;  // when to output the next prime


void loop() {
  prime = nextPrime(prime);
  // Speed up the output!
  if (prime>next) {
    // %lu is for long unsigned
    Serial.printf("prime=%d, %lu ms for %d primes\n", prime, (millis()-start), step);
    start = millis();
    next+=step;
  }
}