int led = 6;
char boton;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
  boton= Serial.read();
  if(boton=='1') digitalWrite(led,HIGH); 
  if(boton=='0') digitalWrite(led,LOW);
  }

}
