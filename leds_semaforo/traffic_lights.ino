#define PIN_GREEN 8
#define PIN_YELLOW 9
#define PIN_RED 10

void setup() {
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_YELLOW, OUTPUT);
  pinMode(PIN_RED, OUTPUT);
}

void loop() {
  selectLed(false, false, true, 3000);  // RED
  selectLed(false, true, false, 1000);  // YELLOW
  selectLed(true, false, false, 5000);  // GREEN
}


// Open or close an specific led by delay time if it is greater than 0
void selectLed(bool GREEN, bool YELLOW, bool RED, unsigned long delayTimeInMs) {
  digitalWrite(PIN_GREEN, GREEN ? 1 : 0);        // LED GREEN Desliga
  digitalWrite(PIN_YELLOW, YELLOW ? 1 : 0);    // LED YELLOW Desliga
  digitalWrite(PIN_RED, RED ? 1 : 0);  // LED RED Liga
  if (delayTimeInMs > 0) {
    delay(delayTimeInMs);
  }
}
