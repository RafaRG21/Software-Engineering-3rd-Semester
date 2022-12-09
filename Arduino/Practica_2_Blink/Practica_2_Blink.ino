/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
const int PinLed = 32;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PinLed, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PinLed, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(PinLed, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
