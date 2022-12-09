
int valor=0;
int led=3;
int intensidad=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {

  Serial.println(analogRead(A0));
valor = analogRead(A0);
intensidad= map(valor,0,1024,0,255);
analogWrite(led,intensidad);
}
