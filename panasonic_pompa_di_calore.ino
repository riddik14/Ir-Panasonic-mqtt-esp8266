/*progetto creato da Domenico Ceccarelli - Italia
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

#define ssid ""
#define password ""
#define mqtt_server ""
#define mqtt_port 1883
#define mqtt_user ""
#define mqtt_pass ""
#define mqtt_client ""

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
const uint16_t kIrLed = 4;  // ESP8266 GPIO pin  4 (D2) ir TX.
IRPanasonicAc ac(kIrLed);

void printState() {
  // Display the settings.
  Serial.println("Panasonic A/C remote è:");
  Serial.printf("  %s\n", ac.toString().c_str());
  // Display the encoded IR sequence.
  unsigned char* ir_code = ac.getRaw();
  Serial.print("Codice IR inviato: 0x");
  for (uint8_t i = 0; i < kPanasonicAcStateLength; i++)
    Serial.printf("%02X", ir_code[i]);
  Serial.println();
}

void setup() {
  Serial.begin(115200);
  delay(200);
  ac.begin();

  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
  Serial.println("imposto di default il condizionatore");
  printState();

}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
}

