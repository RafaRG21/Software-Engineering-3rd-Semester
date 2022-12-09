#include "BluetoothSerial.h"
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif
BluetoothSerial SerialBT;
//Caminata 
int a = 25; //blink
int b = 26;
int c = 27;
int d = 14;
int e = 16;
int f = 17;
int g = 19;
String mensaje = "";
char incomingChar;
//FADED
const int pin_gpio = 32;           // the PWM pin the LED is attached to 
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by 
//on-off
  const int ledPin = 33; 
void setup() {
  // put your setup code here, to run once:
  ledcAttachPin(pin_gpio,0); //Fade
  ledcSetup(0,4000,8);//Fade
pinMode(ledPin,OUTPUT);//on-off
  //CAMINATA
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
  Serial.begin(115200);
  SerialBT.begin("ESP-32-Rafael20110374"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
  ///
}

void loop() {
  // put your main code here, to run repeatedly:
  if (SerialBT.available()) {
    char incomingChar=SerialBT.read();
    if (incomingChar != '\n'){
      mensaje +=String(incomingChar);
    }
    else{
      mensaje = "";
    }
    Serial.write(incomingChar);
  }
  if(mensaje=="1"){ ////1
    do{
      // set the brightness of pin 9:
  ledcWrite(0,brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
    delay(30);}while(brightness>0);
    }else if(mensaje=="led_off"){
    digitalWrite(0,0);
    digitalWrite(ledPin,LOW);} else if(mensaje=="led_on"){
    digitalWrite(0,255);
      digitalWrite(ledPin,HIGH);
    }
    delay(20);

if(mensaje=="2"){
  if(mensaje == "led_on"){
  digitalWrite(ledPin,HIGH);
} else if(mensaje == "led_off"){
  digitalWrite(ledPin,LOW);
}
delay(20);
}
if (mensaje=="3"){
digitalWrite(a,HIGH);
delay(1000);        
digitalWrite(a,LOW);
delay(1000);
digitalWrite(a,HIGH);
delay(1000);        
digitalWrite(a,LOW);
delay(1000);
digitalWrite(a,HIGH);
delay(1000);        
digitalWrite(a,LOW);
delay(1000); 
digitalWrite(a,HIGH);
delay(1000);        
digitalWrite(a,LOW);
delay(1000); 
digitalWrite(a,HIGH);
delay(1000);        
digitalWrite(a,LOW);
delay(1000); 
digitalWrite(a,HIGH);
delay(1000);        
digitalWrite(a,LOW);
delay(1000); 
digitalWrite(a,HIGH);
delay(1000);        
digitalWrite(a,LOW);
delay(1000); 
digitalWrite(a,HIGH);
delay(1000);        
digitalWrite(a,LOW);
delay(1000); 
digitalWrite(a,HIGH);
delay(1000);        
digitalWrite(a,LOW);
delay(1000);     
       
  }
  if (mensaje=="4"){
digitalWrite(a,HIGH);
delay(500);        
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
delay(500);        
digitalWrite(b,LOW);
delay(500);
digitalWrite(c,HIGH);
delay(500);        
digitalWrite(c,LOW); 
digitalWrite(d,HIGH);
delay(500);        
digitalWrite(d,LOW); 
digitalWrite(e,HIGH);
delay(500);        
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
delay(500);        
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
delay(500);        
digitalWrite(g,LOW);       
  }
if(mensaje=="5"){
while( mensaje!="0"){
mensaje=SerialBT.read();
Serial.println(analogRead(35));
delay(10);
SerialBT.println(analogRead(35));
Serial.println(analogRead(35));}}
  }
