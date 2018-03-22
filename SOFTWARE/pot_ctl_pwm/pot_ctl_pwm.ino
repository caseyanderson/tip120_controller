/*
  Pot sets PWM Value

*/

static const uint8_t analog_pin = A0;
static const uint8_t digital_pin = 3;

void setup() {
  Serial.begin(9600);

  pinMode(analog_pin, INPUT);
  pinMode( digital_pin, OUTPUT );

}

void loop() {
    unsigned int val = analogRead(analog_pin);
    analogWrite(digital_pin, val / 4);
  delay(2);
}
