void setup_wifi() {

  delay(10);

  Serial.println();
  Serial.print("mi connetto alla rete wifi:  ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connesso!");
  Serial.print("Indirizzo IP ricevuto: ");
  Serial.print(WiFi.localIP());
}
void printState() {
  // Display the settings.
  Serial.println("Panasonic A/C remote:");
  Serial.printf("  %s\n", ac.toString().c_str());
  // Display the encoded IR sequence.
  unsigned char* ir_code = ac.getRaw();
  Serial.print("Codice IR inviato: 0x");
  for (uint8_t i = 0; i < kPanasonicAcStateLength; i++)
    Serial.printf("%02X", ir_code[i]);
  Serial.println();
}
void printState_init() {
  // Display the settings.
  Serial.println("Invio il primo comando di spegnimento al condizionatore");
  Serial.printf("  %s\n", ac.toString().c_str());
  // Display the encoded IR sequence.
  unsigned char* ir_code = ac.getRaw();
  Serial.print("Codice IR inviato: 0x");
  for (uint8_t i = 0; i < kPanasonicAcStateLength; i++)
    Serial.printf("%02X", ir_code[i]);
  Serial.println();
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Mi connetto al server MQTT: ");
    Serial.print(mqtt_client);
    // Attempt to connect
    if (client.connect(mqtt_client, mqtt_user, mqtt_pass)) {
    Serial.println();
      Serial.println();
      Serial.println("CONNESSO");
      client.subscribe("ha/#");
    } else {
      Serial.print("ERRORE, rc=");
      Serial.print(client.state());
          Serial.println();
      Serial.println();
      Serial.println("riprovo tra 5 secondi");
      delay(5000);
    }
  }
}
