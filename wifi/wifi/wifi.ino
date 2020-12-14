#include <ESP8266WiFi.h>

const char* ssid = "nyenyenye";
const char* pass = "ciumdulu";

void setup () {
Serial.begin (115200);
WiFi.begin (ssid,pass);
  while (WiFi.status() != WL_CONNECTED) 
  {
     delay(1000);
     Serial.print("*");
  }
  
  Serial.println("");
  Serial.println("WiFi connection Successful");
  Serial.print("The IP Address of ESP8266 Module is: ");
  Serial.print(WiFi.localIP());// Print the IP address
}

void loop () {
}
