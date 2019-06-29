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
  Serial.println("Indirizzo IP ricevuto: ");
  Serial.println(WiFi.localIP());
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
  Serial.println("Panasonic A/C remote:");
  Serial.printf("  %s\n", ac.toString().c_str());
  // Display the encoded IR sequence.
  unsigned char* ir_code = ac.getRaw();
  Serial.print("Codice IR inviato: 0x");
  for (uint8_t i = 0; i < kPanasonicAcStateLength; i++)
    Serial.printf("%02X", ir_code[i]);
  Serial.println();
}
void callback(char* topic, byte* payload, unsigned int length) {
  payload[length] = '\0';
  strTopic = String((char*)topic);
  if (strTopic == "ha/ac_panasonic")
  {
    ac_panasonic = String((char*)payload);


    if (ac_panasonic == "ONcold")
    {
      Serial.println("ON_cold");
      ac_on_cold ();
    }
    if (ac_panasonic == "OFFcold")
    {
      Serial.println("OFF_cold");
      ac_off_cold ();
    }
    if (ac_panasonic == "ONhot")
    {
      Serial.println("ON_hot");
      ac_on_hot ();
    }
    if (ac_panasonic == "OFFhot")
    {
      Serial.println("OFF_hot");
      ac_off_hot ();
    }
    if (ac_panasonic == "ONdry")
    {
      Serial.println("ON_dry");
      ac_on_dry ();
    }
    if (ac_panasonic == "OFFdry")
    {
      Serial.println("OFF_dry");
      ac_off_dry ();
    }
    if (ac_panasonic == "OFFauto")
    {
      Serial.println("OFF_auto");
      ac_off_auto ();
    }
    if (ac_panasonic == "ONauto")
    {
      Serial.println("ON_auto");
      ac_on_auto ();
    }
  }
}


void reconnect() {
  while (!client.connected()) {
    Serial.print("Mi connetto al server MQTT:");
    Serial.print(mqtt_client);
    // Attempt to connect
    if (client.connect(mqtt_client, mqtt_user, mqtt_pass)) {
      Serial.println("CONNESSO");
      client.subscribe("ha/#");
    } else {
      Serial.print("ERRORE, rc=");
      Serial.print(client.state());
      Serial.println(" riprovo tra 5 secondi");
      delay(5000);
    }
  }
}
