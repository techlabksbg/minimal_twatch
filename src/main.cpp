#include <Arduino.h>

void setup() {
  Serial.begin(115000);
}

/**
 * Space for strings up to 49 bytes (the last byte **must** be zero)
 * Expect unexcpected behavior if writing strings longer than this,
 * like system crashes, arbitrary variable changes etc...
 */
int counter = 0;
char buffer[20];
void loop() {
  if (counter == 0) {
    Serial.printf("buffer at address %p, counter at address %p\n", buffer, &counter);
  }
  counter++;
  char temp[20];
  sprintf(temp, "%d",counter);
  strcat(buffer, temp);  // append the contents of temp to the contents of buffer
  Serial.println(buffer);
  delay(1000);
}