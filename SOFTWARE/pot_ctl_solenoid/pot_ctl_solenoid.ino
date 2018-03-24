/* pot ctl solenoid

*/

const int ledPin =  LED_BUILTIN;// the number of the LED pin
const int potPin = A0;
const int solPin = 3;

int ledState = LOW;             // ledState used to set the LED
int valveState = LOW;

unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change :
unsigned long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(solPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {

  unsigned long currentMillis = millis();

  interval = analogRead(potPin);
  scaled = map(interval, 0, 1023, 250, 1000);

  if (currentMillis - previousMillis >= scaled) {

    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
      valveState = HIGH;
    } else {
      ledState = LOW;
      valveState = HIGH;
    }

    // set the LED and Solenoid with the ledState of the variable:
    digitalWrite(ledPin, ledState);
    digitalWrite(solPin, valveState);
  }
  delay(2);
}

