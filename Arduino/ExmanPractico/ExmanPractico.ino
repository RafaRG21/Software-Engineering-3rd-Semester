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
const int ledfade = 32;       
int brightness = 0; 
int fadeAmount = 5;   
//on-off
const int ledPin = 33; 
const byte pindato = 35;
void setup() {
  // put your setup code here, to run once:
  ledcAttachPin(ledfade,0); //Fade
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
  if(mensaje=="1"){ ////FADE
    while(mensaje!="f"){
  ledcWrite(0,brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
    delay(30);
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
    ledcWrite(0,0);}
 }

//LED ON - OFF
  if(mensaje == "led_on"){
  digitalWrite(ledPin,HIGH);
} else if(mensaje == "led_off"){
  digitalWrite(ledPin,LOW);
}
delay(20);
// BLINK
if (mensaje=="3"){
while(mensaje!="f") { 
digitalWrite(a,HIGH);
delay(300);
digitalWrite(a,LOW);
delay(300);   
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
}
digitalWrite(a,LOW);       
 }
 //CAMINATA
  if (mensaje=="4"){
    while(mensaje!="f"){
digitalWrite(a,HIGH);
delay(500);        
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
delay(500);        
digitalWrite(b,LOW);
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
    }
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
if(mensaje=="5"){ //enviar datos
while(mensaje!="f"){
mensaje=SerialBT.read();
Serial.println(analogRead(pindato));
SerialBT.println(analogRead(pindato));
delay(100);
 if (SerialBT.available()) {
   char incomingChar=SerialBT.read();
      if (incomingChar != '\n'){
        mensaje +=String(incomingChar);
        }else{mensaje = "";
    }
    Serial.write(incomingChar);
  }}}
}
