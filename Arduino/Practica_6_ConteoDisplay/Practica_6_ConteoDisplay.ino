const int a =33 ;
const int b =32 ;
const int c =19 ;
const int d =16 ;
const int e =17 ;
const int f =25 ;
const int g =26 ;
const int t=500;
void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//0
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
delay(t);
//1
digitalWrite(a,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
delay(t);
//2
digitalWrite(c,LOW);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(e,HIGH);
digitalWrite(d,HIGH);
delay(t);
//3
digitalWrite(e,LOW);
digitalWrite(c,HIGH);
delay(t);
//4
digitalWrite(a,LOW);
digitalWrite(d,LOW);
digitalWrite(f,HIGH);
delay(t);
//5
digitalWrite(b,LOW);
digitalWrite(a,HIGH);
digitalWrite(d,HIGH);
delay(t);
//6
digitalWrite(e,HIGH);
delay(t);
//7
digitalWrite(g,LOW);
digitalWrite(e,LOW);
digitalWrite(d,LOW);
digitalWrite(b,HIGH);
delay(t);
//8
digitalWrite(g,HIGH);
digitalWrite(e,HIGH);
digitalWrite(d,HIGH);
delay(t);
//9
digitalWrite(e,LOW);
delay(t);


}
