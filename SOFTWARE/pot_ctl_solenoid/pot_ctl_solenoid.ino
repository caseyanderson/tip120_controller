/*
potentiometer sets rate of solenoid movement

*/

const int PotPin = A0;
unsigned long cycleDuration; // total duration of one cycle (onTime+offTime)
unsigned long onTime = 75; // onTime within one cycle
unsigned long lastCycleStart;// start time of cycle

void setup() {
  pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop() {
  // duration from onTime to onTime + 1023*20 milliseconds
  cycleDuration = onTime + analogRead(PotPin) * 20L; //  multiply with 'long' factor to make result long
  if (millis() - lastCycleStart >= cycleDuration)// time to start a new cycle
    lastCycleStart += cycleDuration; // remember time when cycle started
  digitalWrite(13, millis() - lastCycleStart < onTime); // LED HIGH during onTime
  digitalWrite(3, millis() - lastCycleStart < onTime); // VALVE HIGH during onTime
}
