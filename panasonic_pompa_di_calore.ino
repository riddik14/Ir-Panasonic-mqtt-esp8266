/*progetto creato das Domenico Ceccarelli - Italia
offritemi un caffe

progetto testato su un condizionatore PANASONIC
malwar@hotmail.it
https://www.paypal.me/DomenicoCeccarelli

*/

#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <PubSubClient.h>


//wlan setup DHCP ON
#define ssid "wlan2"
#define password "mimmoelisabettalucia"

//impostazioni mqtt
#define mqtt_server "" //server
#define mqtt_port 1883              //porta
#define mqtt_user ""           //username
#define mqtt_pass ""         //password
#define mqtt_client "IRremote"      //nome client esp8266

WiFiClient espClient;
PubSubClient client(espClient);
String ac_panasonic;
String strTopic;
String strPayload;


#ifndef UNIT_TEST
#include <Arduino.h>
#endif

#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <ir_Panasonic.h>
const uint16_t kIrLed = 4;  // ESP8266 GPIO pin  4 (D2) modulo ir TX.
IRPanasonicAc ac(kIrLed);



void setup() {
  Serial.begin(115200);
  delay(200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
  Serial.println("invio il primo comando di spegnimento del condizionatore");
  printState_init();  
  ac.begin();
}

void loop() {
  if (!client.connected()) 
  {
    reconnect();
  }
  client.loop();
}
