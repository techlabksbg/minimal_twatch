#include <Arduino.h>

void setup() {
  Serial.begin(115000);
}


int counter = 0;
void loop() {
  counter++;
  String s = "Hallo zum ";
  s += counter;
  s += "-ten mal.";
  Serial.println(s);
  delay(1000);
}