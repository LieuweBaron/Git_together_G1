#include <Arduino.h>

long last_time = 0;
bool blink_mode = 0;
// put function declarations here:
int add(int, int);
int multiply(int, int);
void blink(bool mode);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(millis() - last_time >= 1000) {
    last_time = millis();
    if(blink_mode == 0) {
      blink_mode = 1;
      blink(blink_mode);
    } else {
      blink_mode = 0;
      blink(blink_mode);
    }
  }
  Serial.println("what Function do you want to use?");
  Serial.println("1: add");
  Serial.println("2: multiply");
  while (Serial.available() == 0) {
    if(millis() - last_time >= 1000) {
      last_time = millis();
      if(blink_mode == 0) {
        blink_mode = 1;
        blink(blink_mode);
      } else {
        blink_mode = 0;
        blink(blink_mode);
      }
    }
  }
  int mode = Serial.parseInt();
  while (Serial.available() > 0) {
    Serial.read();
  }
  Serial.println("whats the first number?");
  while (Serial.available() == 0) {
    if(millis() - last_time >= 1000) {
      last_time = millis();
      if(blink_mode == 0) {
        blink_mode = 1;
        blink(blink_mode);
      } else {
        blink_mode = 0;
        blink(blink_mode);
      }
  }
  int num1 = Serial.parseInt();
  while (Serial.available() > 0) {
    Serial.read();
  }
  Serial.println("whats the second number?");
  while (Serial.available() == 0) {
    if(millis() - last_time >= 1000) {
      last_time = millis();
      if(blink_mode == 0) {
        blink_mode = 1;
        blink(blink_mode);
      } else {
        blink_mode = 0;
        blink(blink_mode);
      }
    }
  }
  int num2 = Serial.parseInt();
  while (Serial.available() > 0) {
    Serial.read();
  }

  if(mode == 1) {
    int result = add(num1,num2);
    Serial.println();
  } else if(mode == 2) {
    int result = multiply(num1, num2);
    Serial.println();
  }
}

// put function definitions here:
int add(int x, int y) {
  return ;
}

int multiply(int x, int y) {
  return ;
}

void blink(bool mode) {
  return;
}