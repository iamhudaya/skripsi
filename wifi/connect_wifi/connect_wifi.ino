#include <ESP8266WiFi.h>

const char* ssid = "ilham";
const char* pass = "11223344";

void setup () {
Serial.begin (115200);
WiFi.begin (ssid,pass);
  while (WiFi.status() != WL_CONNECTED) 
  {
     delay(500);
     Serial.print("*");
  }
  
  Serial.println("");
  Serial.println("WiFi connection Successful");
  Serial.print("The IP Address of ESP8266 Module is: ");
  Serial.print(WiFi.localIP());// Print the IP address
}

void loop () {
}
