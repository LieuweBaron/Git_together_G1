#include <Arduino.h>

long last_time = 0;
bool blink_mode = 0;
// put function declarations here:
void blink();
void on();
void off();

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink();
}

// put function definitions here:
void blink(bool mode) {
  if(mode == 0) {
    digitalWrite(LED_BUILTIN, LOW);
  } else if(mode == 1) {
    digitalWrite(LED_BUILTIN, HIGH);
  }

}

int myFunction(int x, int y) {
  return x + y;
}
