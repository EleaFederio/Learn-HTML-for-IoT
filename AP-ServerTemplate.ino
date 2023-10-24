#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer server(80);

const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>NodeNCU Server</title>
  </head>
  <body>
    <center>
      <h4>Hello BU Gubat BAT Students</h4><br>
      <h1>Welcome to NodeMCU Server<br>
    </center>
  </body>
</html>
)=====";

void handleRoot() {
 Serial.println("You called root page");
 String s = MAIN_page; 
 server.send(200, "text/html", s); 
}

void setup()
{
  Serial.begin(115200);
  Serial.println();

  boolean result = WiFi.softAP("myWiFi", "password");
  result == true ? Serial.println("Ready") : Serial.println("Failed!");

  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());
  
  server.on("/", handleRoot);

  server.begin();
  Serial.println("HTTP server started");
}

void loop()
{
  server.handleClient();
}