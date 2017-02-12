#include <ESP8266WiFi.h>

void setup()
{
// config static IP
// where xx is the desired IP Address
IPAddress ip(192, 168, 1, 99); 
// set gateway to match your network
IPAddress gateway(192, 168, 1, 1); 
Serial.print(F("Setting static ip to : "));
Serial.println(ip);
// set subnet mask to match your network
IPAddress subnet(255, 255, 255, 0);
WiFi.config(ip, gateway, subnet);
  pinMode(16, OUTPUT);
}
void loop()
{
    digitalWrite(16, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(16, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
} 
