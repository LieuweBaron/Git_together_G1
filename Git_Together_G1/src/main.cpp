#include <Arduino.h>

// put function declarations here:
int add(int, int);
int multiply(int, int);
void blink();

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int add(int x, int y) {
  return ;
}

int multiply(int x, int y) {
  Serial.println ("Enter the first number: ");
  while (Serial.available() == 0) 
  {
      x = Serial.parseInt();
  }

  Serial.println ("Enter the second number: ");
  while (Serial.available() == 0) 
  {
      y = Serial.parseInt();
  }


  Serial.print("The Answer is ");
  Serial.println (multiply(x, y));
  return (x * y);
}

void blink() {
  return;
}