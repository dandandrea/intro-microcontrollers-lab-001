#define LED_ON_DURATION_MILLISECONDS  500
#define LED_OFF_DURATION_MILLISECONDS 500

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_BUILTIN, HIGH);
  delay(LED_ON_DURATION_MILLISECONDS);

  digitalWrite(LED_BUILTIN, LOW);
  delay(LED_OFF_DURATION_MILLISECONDS);
}