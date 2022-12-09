#include "BluetoothSerial.h"
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run 'make menuconfig'to and enable it
#endif
BluetoothSerial SerialBT;
const int ledPin = 25;
String message  = "";
char incomingChar;
void setup() {
pinMode(ledPin, OUTPUT);
Serial.begin(115200);
SerialBT.begin("ESP32");
Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop() {
if(SerialBT.available()){
  char incomingChar = SerialBT.read();
  if(incomingChar != '\n'){
    message += String(incomingChar);
  }
  else {
    message = "";
  }
  Serial.write(incomingChar);

}
if(message == "led_on"){
  digitalWrite(ledPin,HIGH);
} else if(message == "led_off"){
  digitalWrite(ledPin,LOW);
}
delay(20);
}
