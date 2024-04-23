// generates square wave pulses on pins 2,3,4
// with periods of 4, 2, 1 seconds, respectively.
// This is meant to be used to test the logic
// gates without having to connect to any other
// eurorack gear. 

const int pin1 = 2;
const int pin2 = 3;
const int pin3 = 4;

const long interval1 = 4000;
const long interval2 = 2000;
const long interval3 = 1000;

unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis1 >= interval1) {
    previousMillis1 = currentMillis;

    int ledState = digitalRead(pin1); 
    digitalWrite(pin1, !ledState); 
  }

  if (currentMillis - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis;
    int ledState = digitalRead(pin2);
    digitalWrite(pin2, !ledState);
  }

  if (currentMillis - previousMillis3 >= interval3) {
    previousMillis3 = currentMillis;
    int ledState = digitalRead(pin3);
    digitalWrite(pin3, !ledState);
  }
}

