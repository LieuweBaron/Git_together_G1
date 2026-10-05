#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
void blink();
void on();
void off();

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
  on();
  off();
}

void on() {
  digitalWrite(LED_BUILTIN, HIGH);
}

void off() {
  digitalWrite(LED_BUILTIN, LOW);
}

int myFunction(int x, int y) {
  return x + y;
}