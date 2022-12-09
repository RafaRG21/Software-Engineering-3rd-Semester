#include <WiFi.h>
const char *ssid = "Nostromo180924609";
const char *password = "499FDF854qSVh84E";
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
delay(10);

Serial.println();
Serial.println();
Serial.println("Connecting to ");
Serial.println(ssid);
WiFi.begin(ssid,password);
while(WiFi.status() != WL_CONNECTED){
  delay(500);
  Serial.print(".");
}
Serial.println("");
Serial.println("WiFi connected");
Serial.println("IP address: ");
Serial.println(WiFi.localIP());}

void loop() {
  // put your main code here, to run repeatedly:

}
