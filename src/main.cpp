#include <Arduino.h>

void setup() {
  Serial.begin(115000);
}

/**
 * Space for strings up to 49 bytes (the last byte **must** be zero)
 * Expect unexcpected behavior if writing strings longer than this,
 * like system crashes, arbitrary variable changes etc...
 */
char buffer[50];
int counter = 0;
void loop() {
  counter++;
  sprintf(buffer, "Hallo zum %d-ten mal\n", counter);
  Serial.print(buffer);
  for (int p=16; p<24; p++) {
    Serial.printf("b[%d]=%d='%c', ", p, buffer[p], buffer[p]);
  }
  Serial.println();  // new line
  delay(1000);
}