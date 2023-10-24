#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer server(80);

const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
    <title>NodeNCU Server</title>
  </head>
  <body>
    <div class="container">
      <h1 class="text-center mt-5"><b>Plant Monitor</b><br>

      <img src="https://cdn-icons-png.flaticon.com/512/628/628283.png" class="img-thumbnail border-0 mt-3" alt="...">

      <div class="progress mt-2" role="progressbar" aria-label="Success example" aria-valuenow="25" aria-valuemin="0" style="height: 50px" aria-valuemax="100">
        <div class="progress-bar bg-success" style="width: 25%">Moisture 25%</div>
      </div>

      <button type="button" class="btn btn-primary btn-lg mt-5">Water the Plant</button>

    </div>
  </body>
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL" crossorigin="anonymous"></script>
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

  WiFi.begin("network-ssid", "network-wifi*");

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
  
  server.on("/", handleRoot);

  server.begin();
  Serial.println("HTTP server started");
}

void loop()
{
  server.handleClient();
}