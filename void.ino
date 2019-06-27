void setup_wifi() {

  delay(10);

  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
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
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    if (client.connect(mqtt_client, mqtt_user, mqtt_pass)) {
      Serial.println("connected");
      // Once connected, publish an announcement...
      client.subscribe("ha/#");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}
