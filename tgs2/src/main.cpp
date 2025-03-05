#include <Arduino.h>

#define RED_LED 4
#define YELLOW_LED 5
#define GREEN_LED 18
#define BUTTON_1 13
#define BUTTON_2 14
#define BUTTON_3 15

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  if (digitalRead(BUTTON_1) == LOW) {
    Serial.println("Button 1 Pressed - Blinking Red LED");
    for (int i = 0; i < 5; i++) {
      digitalWrite(RED_LED, HIGH);
      delay(500);
      digitalWrite(RED_LED, LOW);
      delay(500);
    }
  }

  if (digitalRead(BUTTON_2) == LOW) {
    Serial.println("Button 2 Pressed - Blinking Red and Green LEDs");
    for (int i = 0; i < 5; i++) {
      digitalWrite(RED_LED, HIGH);
      delay(500);
      digitalWrite(RED_LED, LOW);
      digitalWrite(GREEN_LED, HIGH);
      delay(500);
      digitalWrite(GREEN_LED, LOW);
    }
  }

  if (digitalRead(BUTTON_3) == LOW) {
    Serial.println("Button 3 Pressed - Blinking Red, Yellow, Green LEDs");
    for (int i = 0; i < 5; i++) {
      digitalWrite(RED_LED, HIGH);
      delay(500);
      digitalWrite(RED_LED, LOW);
      digitalWrite(YELLOW_LED, HIGH);
      delay(500);
      digitalWrite(YELLOW_LED, LOW);
      digitalWrite(GREEN_LED, HIGH);
      delay(500);
      digitalWrite(GREEN_LED, LOW);
    }
  }
}
