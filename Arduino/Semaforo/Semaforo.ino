int ledv=5, leda=6, ledr=7;
char semaforo;
void setup() {
pinMode(ledv,OUTPUT);
pinMode(leda,OUTPUT);
pinMode(ledr,OUTPUT);
Serial.begin(9600);
digitalWrite(ledv,LOW);
digitalWrite(leda,LOW);
digitalWrite(ledr,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
  semaforo = Serial.read();
  if(semaforo!='0'){
    if(semaforo == 'V'){
      digitalWrite(ledv,HIGH);
      digitalWrite(leda,LOW);
      digitalWrite(ledr,LOW);    }
  
  if(semaforo == 'A'){
      digitalWrite(ledv,LOW);
      digitalWrite(leda,HIGH);
      digitalWrite(ledr,LOW); 
  }
  if(semaforo == 'R'){
      digitalWrite(ledv,LOW);
      digitalWrite(leda,LOW);
      digitalWrite(ledr,HIGH); 
  }
} else {
      digitalWrite(ledv,LOW);
      digitalWrite(leda,LOW);
      digitalWrite(ledr,LOW); 
  
}
}}
