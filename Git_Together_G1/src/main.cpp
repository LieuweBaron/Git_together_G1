#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
void blink();

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink();
}

// put function definitions here:
void blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

int myFunction(int x, int y) {
  return x + y;
}