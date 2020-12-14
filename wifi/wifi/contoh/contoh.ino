#include <ESP8266WiFi.h>

#define ECHOPIN D3// Pin to receive echo pulse
#define TRIGPIN D2// Pin to send trigger pulse
void setup(){
  Serial.begin(115200);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
  digitalWrite(ECHOPIN, HIGH);
}
void loop(){
  digitalWrite(TRIGPIN, LOW); // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH); // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW); // Send pin low again
  int distance = pulseIn(ECHOPIN, HIGH,26000); // Read in times pulse
  distance= distance/58;
  Serial.print(distance);
  Serial.println("   cm");                    
  delay(1000);// Wait 50mS before next ranging
}
