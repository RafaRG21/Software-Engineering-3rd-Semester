#include <WiFi.h>

// Replace with your network credentials
const char* ssid = "Nostromo180924609";
const char* password = "499FDF854qSVh84E";
// Set web server port number to 80
WiFiServer server(80);
// Variable to store the HTTP request
String header;
// Auxiliar variables to store the current output state
String outputAState = "off";
String outputBState = "off";
String outputCState = "off";
String outputDState = "off";
String outputEState = "off";
String outputFState = "off";
String outputGState = "off";
String outputHState = "off";
// Assign output variables to GPIO pins
const int outputA = 33;
const int outputB = 32;
const int outputC = 19;
const int outputD = 16;
const int outputE = 17;
const int outputF = 25;
const int outputG = 26;
const int outputH = 21;
// Current time
unsigned long currentTime = millis();
// Previous time
unsigned long previousTime = 0;
// Define timeout time in milliseconds (example: 2000ms = 2s)
const long timeoutTime = 2000;
void setup() {
Serial.begin(115200);
// Initialize the output variables as outputs
pinMode(outputA, OUTPUT);
pinMode(outputB, OUTPUT);
pinMode(outputC, OUTPUT);
pinMode(outputD, OUTPUT);
pinMode(outputE, OUTPUT);
pinMode(outputF, OUTPUT);
pinMode(outputG, OUTPUT);
pinMode(outputH, OUTPUT);
// Set outputs to LOW
digitalWrite(outputA, LOW);
digitalWrite(outputB, LOW);
digitalWrite(outputC, LOW);
digitalWrite(outputD, LOW);
digitalWrite(outputE, LOW);
digitalWrite(outputF, LOW);
digitalWrite(outputG, LOW);
digitalWrite(outputH, LOW);
// Connect to Wi-Fi network with SSID and password
Serial.print("Connecting to ");
Serial.println(ssid);
WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) {
delay(500);

Serial.print(".");
}
// Print local IP address and start web server
Serial.println("");
Serial.println("WiFi connected.");
Serial.println("IP address: ");
Serial.println(WiFi.localIP());
server.begin();
}
void loop(){
WiFiClient client = server.available(); // Listen for incoming clients
if (client) { // If a new client connects,
currentTime = millis();
previousTime = currentTime;
Serial.println("New Client."); // print a message out in the serial port
String currentLine = ""; // make a String to hold incoming data from the client
while (client.connected() && currentTime - previousTime <= timeoutTime)
{ // loop while the client's connected
currentTime = millis();
if (client.available()) { // if there's bytes to read from the client,
char c = client.read(); // read a byte, then
Serial.write(c); // print it out the serial monitor
header += c;
if (c == '\n') { // if the byte is a newline character
// if the current line is blank, you got two newline characters in a row.
// that's the end of the client HTTP request, so send a response:
if (currentLine.length() == 0) {
// HTTP headers always start with a response code (e.g.HTTP/1.1 200 OK)
// and a content-type so the client knows what's coming, then a blank line:
client.println("HTTP/1.1 200 OK");
client.println("Content-type:text/html");
client.println("Connection: close");
client.println();

// turns the GPIOs on and off
if (header.indexOf("GET /A/on") >= 0) {
Serial.println("GPIO A on");
outputAState = "on";
digitalWrite(outputA, HIGH);
} else if (header.indexOf("GET /A/off") >= 0) {
Serial.println("GPIO A off");
outputAState = "off";
digitalWrite(outputA, LOW);
} else if (header.indexOf("GET /B/on") >= 0) {
Serial.println("GPIO B on");
outputBState = "on";
digitalWrite(outputB, HIGH);
} else if (header.indexOf("GET /B/off") >= 0) {
Serial.println("GPIO B off");
outputBState = "off";
digitalWrite(outputB, LOW);///
} else if (header.indexOf("GET /C/on") >= 0) {
Serial.println("GPIO C on");
outputCState = "on";
digitalWrite(outputC, HIGH);
} else if (header.indexOf("GET /C/off") >= 0) {
Serial.println("GPIO C off");
outputCState = "off";
digitalWrite(outputC, LOW); //
} else if (header.indexOf("GET /D/on") >= 0) {
Serial.println("GPIO D on");
outputDState = "on";
digitalWrite(outputD, HIGH);
} else if (header.indexOf("GET /D/off") >= 0) {
Serial.println("GPIO D off");
outputDState = "off";
digitalWrite(outputD, LOW); ///
} else if (header.indexOf("GET /E/on") >= 0) {
Serial.println("GPIO E on");
outputEState = "on";
digitalWrite(outputE, HIGH);
} else if (header.indexOf("GET /E/off") >= 0) {
Serial.println("GPIO E off");
outputEState = "off";
digitalWrite(outputE, LOW); //
} else if (header.indexOf("GET /F/on") >= 0) {
Serial.println("GPIO F on");
outputFState = "on";
digitalWrite(outputF, HIGH);
} else if (header.indexOf("GET /F/off") >= 0) {
Serial.println("GPIO F off");
outputFState = "off";
digitalWrite(outputF, LOW); //
} else if (header.indexOf("GET /G/on") >= 0) {
Serial.println("GPIO G on");
outputGState = "on";
digitalWrite(outputG, HIGH);
} else if (header.indexOf("GET /G/off") >= 0) {
Serial.println("GPIO G off");
outputGState = "off";
digitalWrite(outputG, LOW); ///
} else if (header.indexOf("GET /H/on") >= 0) {
Serial.println("GPIO H on");
outputHState = "on";
digitalWrite(outputH, HIGH);
} else if (header.indexOf("GET /H/off") >= 0) {
Serial.println("GPIO H off");
outputHState = "off";
digitalWrite(outputH, LOW);
}
// Display the HTML web page
client.println("<!DOCTYPE html><html>");
client.println("<head><meta name=\"viewport\"content=\"width=device-width, initial-scale=1\">");
client.println("<link rel=\"icon\" href=\"data:,\">");
// CSS to style the on/off buttons
// Feel free to change the background-color and font-size attributes to fit your preferences
client.println("<style>html { font-family: Helvetica; display:inline-block; margin: 0px auto; text-align: center;}");
client.println(".button { background-color: #4CAF50; border:none; color: white; padding: 16px 40px;");
client.println("text-decoration: none; font-size: 30px; margin:2px; cursor: pointer;}");
client.println(".button2 {background-color:#555555;}</style></head>");
// Web Page Heading
client.println("<body><h1>ESP32 Web Server</h1>");
// Display current state, and ON/OFF buttons for GPIO 26
client.println("<p>GPIO A - State " + outputAState + "</p>");
// If the output26State is off, it displays the ON button

if (outputAState=="off") {
client.println("<p><a href=\"/A/on\"><buttonclass=\"button\">ON</button></a></p>");
} else {
client.println("<p><a href=\"/A/off\"><button class=\"buttonbutton2\">OFF</button></a></p>");
}
// Display current state, and ON/OFF buttons for GPIO 27
client.println("<p>GPIO B - State " + outputBState + "</p>");
// If the output27State is off, it displays the ON button
if (outputBState=="off") {
client.println("<p><a href=\"/B/on\"><buttonclass=\"button\">ON</button></a></p>");
} else {
client.println("<p><a href=\"/B/off\"><button class=\"buttonbutton2\">OFF</button></a></p>");
}
client.println("</body></html>");//
client.println("<p>GPIO C - State " + outputCState + "</p>");
// If the output27State is off, it displays the ON button
if (outputCState=="off") {
client.println("<p><a href=\"/C/on\"><buttonclass=\"button\">ON</button></a></p>");
} else {
client.println("<p><a href=\"/C/off\"><button class=\"buttonbutton2\">OFF</button></a></p>");
}
client.println("</body></html>");//
client.println("<p>GPIO D - State " + outputDState + "</p>");
// If the output27State is off, it displays the ON button
if (outputDState=="off") {
client.println("<p><a href=\"/D/on\"><buttonclass=\"button\">ON</button></a></p>");
} else {
client.println("<p><a href=\"/D/off\"><button class=\"buttonbutton2\">OFF</button></a></p>");
}
client.println("</body></html>"); //
client.println("<p>GPIO E - State " + outputEState + "</p>");
// If the output27State is off, it displays the ON button
if (outputEState=="off") {
client.println("<p><a href=\"/E/on\"><buttonclass=\"button\">ON</button></a></p>");
} else {
client.println("<p><a href=\"/E/off\"><button class=\"buttonbutton2\">OFF</button></a></p>");
}
client.println("</body></html>"); //
client.println("<p>GPIO F - State " + outputFState + "</p>");
// If the output27State is off, it displays the ON button
if (outputFState=="off") {
client.println("<p><a href=\"/F/on\"><buttonclass=\"button\">ON</button></a></p>");
} else {
client.println("<p><a href=\"/F/off\"><button class=\"buttonbutton2\">OFF</button></a></p>");
}
client.println("</body></html>");//
client.println("<p>GPIO G - State " + outputGState + "</p>");
// If the output27State is off, it displays the ON button
if (outputGState=="off") {
client.println("<p><a href=\"/G/on\"><buttonclass=\"button\">ON</button></a></p>");
} else {
client.println("<p><a href=\"/G/off\"><button class=\"buttonbutton2\">OFF</button></a></p>");
}
client.println("</body></html>");//
client.println("<p>GPIO H - State " + outputHState + "</p>");
// If the output27State is off, it displays the ON button
if (outputHState=="off") {
client.println("<p><a href=\"/H/on\"><buttonclass=\"button\">ON</button></a></p>");
} else {
client.println("<p><a href=\"/H/off\"><button class=\"buttonbutton2\">OFF</button></a></p>");
}
client.println("</body></html>");
// The HTTP response ends with another blank line
client.println();
// Break out of the while loop
break;
} else { // if you got a newline, then clear currentLine
currentLine = "";
}
} else if (c != '\r') { // if you got anything else but a carriage return character,
currentLine += c; // add it to the end of the currentLine
}
}
}
// Clear the header variable
header = "";
// Close the connection
client.stop();
Serial.println("Client disconnected.");
Serial.println("");
}
}
