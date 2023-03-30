#define PIN_LED_GREEN_1 10
#define PIN_LED_GREEN_2 9
#define PIN_LED_YELLOW_1 7
#define PIN_LED_RED_2 3
#define PIN_LED_RED_1 2


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED_GREEN_1, OUTPUT);
  pinMode(PIN_LED_GREEN_2, OUTPUT);
  pinMode(PIN_LED_YELLOW_1, OUTPUT);
  pinMode(PIN_LED_RED_2, OUTPUT);
  pinMode(PIN_LED_RED_1, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED_GREEN_1, 1);
  digitalWrite(PIN_LED_GREEN_2, 0);
  digitalWrite(PIN_LED_YELLOW_1, 0);
  digitalWrite(PIN_LED_RED_2, 0);
  digitalWrite(PIN_LED_RED_1, 1);
  delay(1000);

  digitalWrite(PIN_LED_GREEN_1, 0);
  digitalWrite(PIN_LED_GREEN_2, 1);
  digitalWrite(PIN_LED_YELLOW_1, 0);
  digitalWrite(PIN_LED_RED_2, 1);
  digitalWrite(PIN_LED_RED_1, 0);
  delay(1000);

  digitalWrite(PIN_LED_GREEN_1, 0);
  digitalWrite(PIN_LED_GREEN_2, 0);
  digitalWrite(PIN_LED_YELLOW_1, 1);
  digitalWrite(PIN_LED_RED_2, 0);
  digitalWrite(PIN_LED_RED_1, 0);
  delay(1000);  
}
