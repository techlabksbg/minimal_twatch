#include <Arduino.h>

void setup() {
  Serial.begin(115000);
  Serial.println(2);  // First prime
}

/**
 * Global variable of type int (32 Bits)
 * initialized to 3.
 * We treat the prime 2 in the setup loop ;-)
 */
int counter=3;
void loop() {
  while (true) { // endless loop
    bool isPrime = true;
    for (int d=3; d*d<=counter; d+=2) {  // start with d=3, as long as d*d<=counter, at the end add 2
      if (counter % d == 0) {   // divisor found
        isPrime = false;        // not prime stop for loop
        break;
      }
    }
    if (isPrime) {    // stop while loop
      break;
    }
    counter+=2;   // otherwise check next candidate
  }
  Serial.println(counter);
  counter+=2;   // Increase counter by 2
}