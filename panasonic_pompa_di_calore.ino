/*progetto creato das Domenico Ceccarelli - Italia
offritemi un caffe

progetto testato su un condizionatore PANASONIC
malwar@hotmail.it
https://www.paypal.me/DomenicoCeccarelli


default topic
mqtt topic temperatura" ha/ac_panasonic/temperature"
mqtt topic humidity "ha/ac_panasonic/humidity"
mqtt topic command  "ha/ac_panasonic"     playload "on_auto_Mode_temp_auto_auto"          ******esempio "on_auto_Cool_16_auto_auto acceso-modo-auto-16gradi-autoswingh-autoswingv"

*/

#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <PubSubClient.h>

//wlan setup DHCP ON
#define ssid ""
#define password ""

//impostazioni mqtt
#define mqtt_server "" //server
#define mqtt_port 1883              //porta
#define mqtt_user ""           //username
#define mqtt_pass ""         //password
#define mqtt_client "IRremote"      //nome client esp8266
#define mqtt_topic "ha/ac_panasonic" //inserisci il topic


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
const uint16_t kIrLed = 4;     // ESP8266 GPIO pin  4 (D2) modulo ir TX.
IRPanasonicAc ac(kIrLed);

#include "DHT_U.h"
#define DHTPIN 2              // DHT Pin (D4)
//#define DHTTYPE DHT11       // DHT 11 
#define DHTTYPE DHT22         // DHT 22  (AM2302)
#define temperature_topic "ha/ac_panasonic/temperature"  //Topic temperature
#define humidity_topic "ha/ac_panasonic/humidity"        //Topic humidity
DHT dht(DHTPIN, DHTTYPE);    
char message_buff[100];

long lastMsg = 0;   
long lastRecu = 0;
bool debug = false;  

void setup() {
  Serial.begin(115200);
  
  delay(200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
    Serial.println();
      Serial.println("**********************************************************************************************************");

  //Serial.println("Invio il primo comando di spegnimento del condizionatore");
  //printState_init();  
  ac.begin();
  dht.begin();
  
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
  long now = millis();
  if (now - lastMsg > 100 * 60) { //tempo invio temperatura
    lastMsg = now;
    // Read humidity
    float h = dht.readHumidity();
    // Read temperature in Celcius
    float t = dht.readTemperature();

    // Oh, nothing to send
    if ( isnan(t) || isnan(h)) {
      Serial.println("attenzione sensore non connesso");
      return;
    }
  
    if ( debug ) {
      Serial.print("Temp : ");
      Serial.print(t);
      Serial.print(" | Hum : ");
      Serial.println(h);
    }  
    client.publish(temperature_topic, String(t).c_str(), true);   // Publish temperature on temperature_topic
    client.publish(humidity_topic, String(h).c_str(), true);      // and humidity
    Serial.print("Temperatura : ");   Serial.print(t); Serial.println(" °C");
    Serial.print(" | Umidita : ");   Serial.print(h); Serial.println(" %");
  }
  if (now - lastRecu > 100 ) {
    lastRecu = now;
    client.subscribe("ha/ac_panasonic");
  }
}
