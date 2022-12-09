const int pin_gpio = 32;           // the PWM pin the LED is attached to
const int pin_gpio2 = 33;
const int pin_gpio3 = 25;
void setup() {
  // put your setup code here, to run once:
pinMode(pin_gpio,OUTPUT);
pinMode(pin_gpio2,OUTPUT);
pinMode(pin_gpio3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin_gpio,LOW);
digitalWrite(pin_gpio2,LOW);
digitalWrite(pin_gpio3,LOW);
}
