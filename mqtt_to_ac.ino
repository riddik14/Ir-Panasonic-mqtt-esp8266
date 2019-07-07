void callback(char* topic, byte* payload, unsigned int length) {
  payload[length] = '\0';
  strTopic = String((char*)topic);
  if (strTopic == mqtt_topic)
  {
    ac_panasonic = String((char*)payload);


    if (ac_panasonic == "ONcool")
    {
      Serial.println("ON_cool");
      ac_on_cool ();
    }
    if (ac_panasonic == "OFFcool")
    {
      Serial.println("OFF_cool");
      ac_off_cool ();
    }
    if (ac_panasonic == "ONheat")
    {
      Serial.println("ON_heat");
      ac_on_heat ();
    }
    if (ac_panasonic == "OFFheat")
    {
      Serial.println("OFF_heat");
      ac_off_heat ();
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
    //######################################################################

    if (ac_panasonic == "on_auto_Cool_16_auto_auto")
    {
      Serial.println("on_auto_Cool_16_auto_auto");
      on_auto_Cool_16_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_17_auto_auto")
    {
      Serial.println("on_auto_Cool_17_auto_auto");
      on_auto_Cool_17_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_18_auto_auto")
    {
      Serial.println("on_auto_Cool_18_auto_auto");
      on_auto_Cool_18_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_19_auto_auto")
    {
      Serial.println("on_auto_Cool_19_auto_auto");
      on_auto_Cool_19_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_20_auto_auto")
    {
      Serial.println("on_auto_Cool_20_auto_auto");
      on_auto_Cool_20_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_21_auto_auto")
    {
      Serial.println("on_auto_Cool_21_auto_auto");
      on_auto_Cool_21_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_auto_auto")
    {
      Serial.println("on_auto_Cool_22_auto_auto");
      on_auto_Cool_22_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_23_auto_auto")
    {
      Serial.println("on_auto_Cool_23_auto_auto");
      on_auto_Cool_23_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_24_auto_auto")
    {
      Serial.println("on_auto_Cool_24_auto_auto");
      on_auto_Cool_24_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_25_auto_auto")
    {
      Serial.println("on_auto_Cool_25_auto_auto");
      on_auto_Cool_25_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_26_auto_auto")
    {
      Serial.println("on_auto_Cool_26_auto_auto");
      on_auto_Cool_26_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_27_auto_auto")
    {
      Serial.println("on_auto_Cool_27_auto_auto");
      on_auto_Cool_27_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_28_auto_auto")
    {
      Serial.println("on_auto_Cool_28_auto_auto");
      on_auto_Cool_28_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_29_auto_auto")
    {
      Serial.println("on_auto_Cool_29_auto_auto");
      on_auto_Cool_29_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_30_auto_auto")
    {
      Serial.println("on_auto_Cool_30_auto_auto");
      on_auto_Cool_30_auto_auto ();
    }
    //#############################################################################
    if (ac_panasonic == "on_auto_Heat_16_auto_auto")
    {
      Serial.println("on_auto_Heat_16_auto_auto");
      on_auto_Heat_16_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_17_auto_auto")
    {
      Serial.println("on_auto_Heat_17_auto_auto");
      on_auto_Heat_17_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_18_auto_auto")
    {
      Serial.println("on_auto_Heat_18_auto_auto");
      on_auto_Heat_18_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_19_auto_auto")
    {
      Serial.println("on_auto_Heat_19_auto_auto");
      on_auto_Heat_19_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_20_auto_auto")
    {
      Serial.println("on_auto_Heat_20_auto_auto");
      on_auto_Heat_20_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_21_auto_auto")
    {
      Serial.println("on_auto_Heat_21_auto_auto");
      on_auto_Heat_21_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_auto_auto")
    {
      Serial.println("on_auto_Heat_22_auto_auto");
      on_auto_Heat_22_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_23_auto_auto")
    {
      Serial.println("on_auto_Heat_23_auto_auto");
      on_auto_Heat_23_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_24_auto_auto")
    {
      Serial.println("on_auto_Heat_24_auto_auto");
      on_auto_Heat_24_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_25_auto_auto")
    {
      Serial.println("on_auto_Heat_25_auto_auto");
      on_auto_Heat_25_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_26_auto_auto")
    {
      Serial.println("on_auto_Heat_26_auto_auto");
      on_auto_Heat_26_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_27_auto_auto")
    {
      Serial.println("on_auto_Heat_27_auto_auto");
      on_auto_Heat_27_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_28_auto_auto")
    {
      Serial.println("on_auto_Heat_28_auto_auto");
      on_auto_Heat_28_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_29_auto_auto")
    {
      Serial.println("on_auto_Heat_29_auto_auto");
      on_auto_Heat_29_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_30_auto_auto")
    {
      Serial.println("on_auto_Heat_30_auto_auto");
      on_auto_Heat_30_auto_auto ();
    }
    //#############################################################################
    if (ac_panasonic == "on_auto_Dry_16_auto_auto")
    {
      Serial.println("on_auto_Dry_16_auto_auto");
      on_auto_Dry_16_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_17_auto_auto")
    {
      Serial.println("on_auto_Dry_17_auto_auto");
      on_auto_Dry_17_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_18_auto_auto")
    {
      Serial.println("on_auto_Dry_18_auto_auto");
      on_auto_Dry_18_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_19_auto_auto")
    {
      Serial.println("on_auto_Dry_19_auto_auto");
      on_auto_Dry_19_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_20_auto_auto")
    {
      Serial.println("on_auto_Dry_20_auto_auto");
      on_auto_Dry_20_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_21_auto_auto")
    {
      Serial.println("on_auto_Dry_21_auto_auto");
      on_auto_Dry_21_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_auto_auto")
    {
      Serial.println("on_auto_Dry_22_auto_auto");
      on_auto_Dry_22_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_23_auto_auto")
    {
      Serial.println("on_auto_Dry_23_auto_auto");
      on_auto_Dry_23_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_24_auto_auto")
    {
      Serial.println("on_auto_Dry_24_auto_auto");
      on_auto_Dry_24_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_25_auto_auto")
    {
      Serial.println("on_auto_Dry_25_auto_auto");
      on_auto_Dry_25_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_26_auto_auto")
    {
      Serial.println("on_auto_Dry_26_auto_auto");
      on_auto_Dry_26_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_27_auto_auto")
    {
      Serial.println("on_auto_Dry_27_auto_auto");
      on_auto_Dry_27_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_28_auto_auto")
    {
      Serial.println("on_auto_Dry_28_auto_auto");
      on_auto_Dry_28_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_29_auto_auto")
    {
      Serial.println("on_auto_Dry_29_auto_auto");
      on_auto_Dry_29_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_30_auto_auto")
    {
      Serial.println("on_auto_Dry_30_auto_auto");
      on_auto_Dry_30_auto_auto ();
    }
    //#############################################################################

    if (ac_panasonic == "on_auto_Auto_16_auto_auto")
    {
      Serial.println("on_auto_Auto_16_auto_auto");
      on_auto_Auto_16_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_17_auto_auto")
    {
      Serial.println("on_auto_Auto_17_auto_auto");
      on_auto_Auto_17_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_18_auto_auto")
    {
      Serial.println("on_auto_Auto_18_auto_auto");
      on_auto_Auto_18_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_19_auto_auto")
    {
      Serial.println("on_auto_Auto_19_auto_auto");
      on_auto_Auto_19_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_20_auto_auto")
    {
      Serial.println("on_auto_Auto_20_auto_auto");
      on_auto_Auto_20_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_21_auto_auto")
    {
      Serial.println("on_auto_Auto_21_auto_auto");
      on_auto_Auto_21_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_auto_auto")
    {
      Serial.println("on_auto_Auto_22_auto_auto");
      on_auto_Auto_22_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_23_auto_auto")
    {
      Serial.println("on_auto_Auto_23_auto_auto");
      on_auto_Auto_23_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_24_auto_auto")
    {
      Serial.println("on_auto_Auto_24_auto_auto");
      on_auto_Auto_24_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_25_auto_auto")
    {
      Serial.println("on_auto_Auto_25_auto_auto");
      on_auto_Auto_25_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_26_auto_auto")
    {
      Serial.println("on_auto_Auto_26_auto_auto");
      on_auto_Auto_26_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_27_auto_auto")
    {
      Serial.println("on_auto_Auto_27_auto_auto");
      on_auto_Auto_27_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_28_auto_auto")
    {
      Serial.println("on_auto_Auto_28_auto_auto");
      on_auto_Auto_28_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_29_auto_auto")
    {
      Serial.println("on_auto_Auto_29_auto_auto");
      on_auto_Auto_29_auto_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_30_auto_auto")
    {
      Serial.println("on_auto_Auto_30_auto_auto");
      on_auto_Auto_30_auto_auto ();
    }
    //#############################################################################



  }
}
