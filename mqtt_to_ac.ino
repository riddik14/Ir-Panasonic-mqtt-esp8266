void callback(char* topic, byte* payload, unsigned int length) {
  payload[length] = '\0';
  strTopic = String((char*)topic);
  if (strTopic == mqtt_topic)
  {
    ac_panasonic = String((char*)payload);

//############################################################
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
    if (ac_panasonic == "ONDry")
    {
      Serial.println("ON_Dry");
      ac_on_dry ();
    }
    if (ac_panasonic == "OFFdry")
    {
      Serial.println("OFF_Dry");
      ac_off_heat ();
    }
    if (ac_panasonic == "ONHeat")
    {
      Serial.println("ON_Heat");
      ac_on_heat ();
    }
    if (ac_panasonic == "OFFHeat")
    {
      Serial.println("OFF_Heat");
      ac_off_heat ();
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
//############################################################ cool

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
    //########################
    if (ac_panasonic == "on_auto_Cool_16_0_auto")

    {
      Serial.println("on_auto_Cool_16_0_auto");
      on_auto_Cool_16_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_17_0_auto")
    {
      Serial.println("on_auto_Cool_17_0_auto");
      on_auto_Cool_17_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_18_0_auto")
    {
      Serial.println("on_auto_Cool_18_0_auto");
      on_auto_Cool_18_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_19_0_auto")
    {
      Serial.println("on_auto_Cool_19_0_auto");
      on_auto_Cool_19_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_20_0_auto")
    {
      Serial.println("on_auto_Cool_20_0_auto");
      on_auto_Cool_20_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_0_auto")
    {
      Serial.println("on_auto_Cool_21_0_auto");
      on_auto_Cool_21_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_0_auto")
    {
      Serial.println("on_auto_Cool_22_0_auto");
      on_auto_Cool_22_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_23_0_auto")
    {
      Serial.println("on_auto_Cool_23_0_auto");
      on_auto_Cool_23_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_20_0_auto")
    {
      Serial.println("on_auto_Cool_20_0_auto");
      on_auto_Cool_20_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_25_0_auto")
    {
      Serial.println("on_auto_Cool_25_0_auto");
      on_auto_Cool_25_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_26_0_auto")
    {
      Serial.println("on_auto_Cool_26_0_auto");
      on_auto_Cool_26_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_27_0_auto")
    {
      Serial.println("on_auto_Cool_27_0_auto");
      on_auto_Cool_27_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_28_0_auto")
    {
      Serial.println("on_auto_Cool_28_0_auto");
      on_auto_Cool_28_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_29_0_auto")
    {
      Serial.println("on_auto_Cool_29_0_auto");
      on_auto_Cool_29_0_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_30_0_auto")
    {
      Serial.println("on_auto_Cool_30_0_auto");
      on_auto_Cool_30_0_auto ();
    }
    //#########################
    if (ac_panasonic == "on_auto_Cool_16_1_auto")
    {
      Serial.println("on_auto_Cool_16_1_auto");
      on_auto_Cool_16_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_17_1_auto")
    {
      Serial.println("on_auto_Cool_17_1_auto");
      on_auto_Cool_17_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_18_1_auto")
    {
      Serial.println("on_auto_Cool_18_1_auto");
      on_auto_Cool_18_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_19_1_auto")
    {
      Serial.println("on_auto_Cool_19_1_auto");
      on_auto_Cool_19_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_20_1_auto")
    {
      Serial.println("on_auto_Cool_20_1_auto");
      on_auto_Cool_20_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_21_1_auto")
    {
      Serial.println("on_auto_Cool_21_1_auto");
      on_auto_Cool_21_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_1_auto")
    {
      Serial.println("on_auto_Cool_22_1_auto");
      on_auto_Cool_22_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_23_1_auto")
    {
      Serial.println("on_auto_Cool_23_1_auto");
      on_auto_Cool_23_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_24_1_auto")
    {
      Serial.println("on_auto_Cool_24_1_auto");
      on_auto_Cool_24_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_25_1_auto")
    {
      Serial.println("on_auto_Cool_25_1_auto");
      on_auto_Cool_25_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_26_1_auto")
    {
      Serial.println("on_auto_Cool_26_1_auto");
      on_auto_Cool_26_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_27_1_auto")
    {
      Serial.println("on_auto_Cool_27_1_auto");
      on_auto_Cool_27_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_28_1_auto")
    {
      Serial.println("on_auto_Cool_28_1_auto");
      on_auto_Cool_28_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_29_1_auto")
    {
      Serial.println("on_auto_Cool_29_1_auto");
      on_auto_Cool_29_1_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_30_1_auto")
    {
      Serial.println("on_auto_Cool_30_1_auto");
      on_auto_Cool_30_1_auto ();
    }
    //###########
    if (ac_panasonic == "on_auto_Cool_16_2_auto")
    {
      Serial.println("on_auto_Cool_16_2_auto");
      on_auto_Cool_16_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_17_2_auto")
    {
      Serial.println("on_auto_Cool_17_2_auto");
      on_auto_Cool_17_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_18_2_auto")
    {
      Serial.println("on_auto_Cool_18_2_auto");
      on_auto_Cool_18_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_19_2_auto")
    {
      Serial.println("on_auto_Cool_19_2_auto");
      on_auto_Cool_19_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_20_2_auto")
    {
      Serial.println("on_auto_Cool_20_2_auto");
      on_auto_Cool_20_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_2_auto")
    {
      Serial.println("on_auto_Cool_21_2_auto");
      on_auto_Cool_21_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_2_auto")
    {
      Serial.println("on_auto_Cool_22_2_auto");
      on_auto_Cool_22_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_23_2_auto")
    {
      Serial.println("on_auto_Cool_23_2_auto");
      on_auto_Cool_23_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_24_2_auto")
    {
      Serial.println("on_auto_Cool_24_2_auto");
      on_auto_Cool_24_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_25_2_auto")
    {
      Serial.println("on_auto_Cool_25_2_auto");
      on_auto_Cool_25_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_26_2_auto")
    {
      Serial.println("on_auto_Cool_26_2_auto");
      on_auto_Cool_26_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_27_2_auto")
    {
      Serial.println("on_auto_Cool_27_2_auto");
      on_auto_Cool_27_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_28_2_auto")
    {
      Serial.println("on_auto_Cool_28_2_auto");
      on_auto_Cool_28_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_29_2_auto")
    {
      Serial.println("on_auto_Cool_29_2_auto");
      on_auto_Cool_29_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_30_2_auto")
    {
      Serial.println("on_auto_Cool_30_2_auto");
      on_auto_Cool_30_2_auto ();
    }
    //#######################
    if (ac_panasonic == "on_auto_Cool_16_3_auto")

    {
      Serial.println("on_auto_Cool_16_3_auto");
      on_auto_Cool_16_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_17_3_auto")
    {
      Serial.println("on_auto_Cool_17_3_auto");
      on_auto_Cool_17_2_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_18_3_auto")
    {
      Serial.println("on_auto_Cool_18_3_auto");
      on_auto_Cool_18_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_19_3_auto")
    {
      Serial.println("on_auto_Cool_19_3_auto");
      on_auto_Cool_19_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_20_3_auto")
    {
      Serial.println("on_auto_Cool_20_3_auto");
      on_auto_Cool_20_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_3_auto")
    {
      Serial.println("on_auto_Cool_21_3_auto");
      on_auto_Cool_21_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_3_auto")
    {
      Serial.println("on_auto_Cool_22_3_auto");
      on_auto_Cool_22_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_23_3_auto")
    {
      Serial.println("on_auto_Cool_23_3_auto");
      on_auto_Cool_23_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_24_3_auto")
    {
      Serial.println("on_auto_Cool_24_3_auto");
      on_auto_Cool_24_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_25_3_auto")
    {
      Serial.println("on_auto_Cool_25_3_auto");
      on_auto_Cool_25_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_26_3_auto")
    {
      Serial.println("on_auto_Cool_26_3_auto");
      on_auto_Cool_26_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_27_3_auto")
    {
      Serial.println("on_auto_Cool_27_3_auto");
      on_auto_Cool_27_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_28_3_auto")
    {
      Serial.println("on_auto_Cool_28_3_auto");
      on_auto_Cool_28_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_29_3_auto")
    {
      Serial.println("on_auto_Cool_29_3_auto");
      on_auto_Cool_29_3_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_30_3_auto")
    {
      Serial.println("on_auto_Cool_30_3_auto");
      on_auto_Cool_30_3_auto ();
    }
    //##################
    if (ac_panasonic == "on_auto_Cool_16_4_auto")

    {
      Serial.println("on_auto_Cool_16_4_auto");
      on_auto_Cool_16_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_17_4_auto")
    {
      Serial.println("on_auto_Cool_17_4_auto");
      on_auto_Cool_17_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_18_4_auto")
    {
      Serial.println("on_auto_Cool_18_4_auto");
      on_auto_Cool_18_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_19_4_auto")
    {
      Serial.println("on_auto_Cool_19_4_auto");
      on_auto_Cool_19_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_20_4_auto")
    {
      Serial.println("on_auto_Cool_20_4_auto");
      on_auto_Cool_20_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_4_auto")
    {
      Serial.println("on_auto_Cool_21_4_auto");
      on_auto_Cool_21_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_22_4_auto")
    {
      Serial.println("on_auto_Cool_22_4_auto");
      on_auto_Cool_22_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_23_4_auto")
    {
      Serial.println("on_auto_Cool_23_4_auto");
      on_auto_Cool_23_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_24_4_auto")
    {
      Serial.println("on_auto_Cool_24_4_auto");
      on_auto_Cool_24_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_25_4_auto")
    {
      Serial.println("on_auto_Cool_25_4_auto");
      on_auto_Cool_25_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_26_4_auto")
    {
      Serial.println("on_auto_Cool_26_4_auto");
      on_auto_Cool_26_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_27_4_auto")
    {
      Serial.println("on_auto_Cool_27_4_auto");
      on_auto_Cool_27_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_28_4_auto")
    {
      Serial.println("on_auto_Cool_28_4_auto");
      on_auto_Cool_28_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_29_4_auto")
    {
      Serial.println("on_auto_Cool_29_4_auto");
      on_auto_Cool_29_4_auto ();
    }
    if (ac_panasonic == "on_auto_Cool_30_4_auto")
    {
      Serial.println("on_auto_Cool_30_4_auto");
      on_auto_Cool_30_4_auto ();
    }
//############################################################ dry
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
    //########################
    if (ac_panasonic == "on_auto_Dry_16_0_auto")

    {
      Serial.println("on_auto_Dry_16_0_auto");
      on_auto_Dry_16_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_17_0_auto")
    {
      Serial.println("on_auto_Dry_17_0_auto");
      on_auto_Dry_17_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_18_0_auto")
    {
      Serial.println("on_auto_Dry_18_0_auto");
      on_auto_Dry_18_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_19_0_auto")
    {
      Serial.println("on_auto_Dry_19_0_auto");
      on_auto_Dry_19_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_20_0_auto")
    {
      Serial.println("on_auto_Dry_20_0_auto");
      on_auto_Dry_20_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_0_auto")
    {
      Serial.println("on_auto_Dry_21_0_auto");
      on_auto_Dry_21_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_0_auto")
    {
      Serial.println("on_auto_Dry_22_0_auto");
      on_auto_Dry_22_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_23_0_auto")
    {
      Serial.println("on_auto_Dry_23_0_auto");
      on_auto_Dry_23_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_20_0_auto")
    {
      Serial.println("on_auto_Dry_20_0_auto");
      on_auto_Dry_20_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_25_0_auto")
    {
      Serial.println("on_auto_Dry_25_0_auto");
      on_auto_Dry_25_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_26_0_auto")
    {
      Serial.println("on_auto_Dry_26_0_auto");
      on_auto_Dry_26_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_27_0_auto")
    {
      Serial.println("on_auto_Dry_27_0_auto");
      on_auto_Dry_27_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_28_0_auto")
    {
      Serial.println("on_auto_Dry_28_0_auto");
      on_auto_Dry_28_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_29_0_auto")
    {
      Serial.println("on_auto_Dry_29_0_auto");
      on_auto_Dry_29_0_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_30_0_auto")
    {
      Serial.println("on_auto_Dry_30_0_auto");
      on_auto_Dry_30_0_auto ();
    }
    //#########################
    if (ac_panasonic == "on_auto_Dry_16_1_auto")
    {
      Serial.println("on_auto_Dry_16_1_auto");
      on_auto_Dry_16_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_17_1_auto")
    {
      Serial.println("on_auto_Dry_17_1_auto");
      on_auto_Dry_17_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_18_1_auto")
    {
      Serial.println("on_auto_Dry_18_1_auto");
      on_auto_Dry_18_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_19_1_auto")
    {
      Serial.println("on_auto_Dry_19_1_auto");
      on_auto_Dry_19_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_20_1_auto")
    {
      Serial.println("on_auto_Dry_20_1_auto");
      on_auto_Dry_20_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_21_1_auto")
    {
      Serial.println("on_auto_Dry_21_1_auto");
      on_auto_Dry_21_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_1_auto")
    {
      Serial.println("on_auto_Dry_22_1_auto");
      on_auto_Dry_22_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_23_1_auto")
    {
      Serial.println("on_auto_Dry_23_1_auto");
      on_auto_Dry_23_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_24_1_auto")
    {
      Serial.println("on_auto_Dry_24_1_auto");
      on_auto_Dry_24_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_25_1_auto")
    {
      Serial.println("on_auto_Dry_25_1_auto");
      on_auto_Dry_25_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_26_1_auto")
    {
      Serial.println("on_auto_Dry_26_1_auto");
      on_auto_Dry_26_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_27_1_auto")
    {
      Serial.println("on_auto_Dry_27_1_auto");
      on_auto_Dry_27_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_28_1_auto")
    {
      Serial.println("on_auto_Dry_28_1_auto");
      on_auto_Dry_28_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_29_1_auto")
    {
      Serial.println("on_auto_Dry_29_1_auto");
      on_auto_Dry_29_1_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_30_1_auto")
    {
      Serial.println("on_auto_Dry_30_1_auto");
      on_auto_Dry_30_1_auto ();
    }
    //###########
    if (ac_panasonic == "on_auto_Dry_16_2_auto")
    {
      Serial.println("on_auto_Dry_16_2_auto");
      on_auto_Dry_16_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_17_2_auto")
    {
      Serial.println("on_auto_Dry_17_2_auto");
      on_auto_Dry_17_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_18_2_auto")
    {
      Serial.println("on_auto_Dry_18_2_auto");
      on_auto_Dry_18_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_19_2_auto")
    {
      Serial.println("on_auto_Dry_19_2_auto");
      on_auto_Dry_19_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_20_2_auto")
    {
      Serial.println("on_auto_Dry_20_2_auto");
      on_auto_Dry_20_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_2_auto")
    {
      Serial.println("on_auto_Dry_21_2_auto");
      on_auto_Dry_21_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_2_auto")
    {
      Serial.println("on_auto_Dry_22_2_auto");
      on_auto_Dry_22_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_23_2_auto")
    {
      Serial.println("on_auto_Dry_23_2_auto");
      on_auto_Dry_23_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_24_2_auto")
    {
      Serial.println("on_auto_Dry_24_2_auto");
      on_auto_Dry_24_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_25_2_auto")
    {
      Serial.println("on_auto_Dry_25_2_auto");
      on_auto_Dry_25_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_26_2_auto")
    {
      Serial.println("on_auto_Dry_26_2_auto");
      on_auto_Dry_26_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_27_2_auto")
    {
      Serial.println("on_auto_Dry_27_2_auto");
      on_auto_Dry_27_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_28_2_auto")
    {
      Serial.println("on_auto_Dry_28_2_auto");
      on_auto_Dry_28_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_29_2_auto")
    {
      Serial.println("on_auto_Dry_29_2_auto");
      on_auto_Dry_29_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_30_2_auto")
    {
      Serial.println("on_auto_Dry_30_2_auto");
      on_auto_Dry_30_2_auto ();
    }
    //#######################
    if (ac_panasonic == "on_auto_Dry_16_3_auto")

    {
      Serial.println("on_auto_Dry_16_3_auto");
      on_auto_Dry_16_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_17_3_auto")
    {
      Serial.println("on_auto_Dry_17_3_auto");
      on_auto_Dry_17_2_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_18_3_auto")
    {
      Serial.println("on_auto_Dry_18_3_auto");
      on_auto_Dry_18_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_19_3_auto")
    {
      Serial.println("on_auto_Dry_19_3_auto");
      on_auto_Dry_19_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_20_3_auto")
    {
      Serial.println("on_auto_Dry_20_3_auto");
      on_auto_Dry_20_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_3_auto")
    {
      Serial.println("on_auto_Dry_21_3_auto");
      on_auto_Dry_21_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_3_auto")
    {
      Serial.println("on_auto_Dry_22_3_auto");
      on_auto_Dry_22_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_23_3_auto")
    {
      Serial.println("on_auto_Dry_23_3_auto");
      on_auto_Dry_23_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_24_3_auto")
    {
      Serial.println("on_auto_Dry_24_3_auto");
      on_auto_Dry_24_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_25_3_auto")
    {
      Serial.println("on_auto_Dry_25_3_auto");
      on_auto_Dry_25_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_26_3_auto")
    {
      Serial.println("on_auto_Dry_26_3_auto");
      on_auto_Dry_26_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_27_3_auto")
    {
      Serial.println("on_auto_Dry_27_3_auto");
      on_auto_Dry_27_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_28_3_auto")
    {
      Serial.println("on_auto_Dry_28_3_auto");
      on_auto_Dry_28_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_29_3_auto")
    {
      Serial.println("on_auto_Dry_29_3_auto");
      on_auto_Dry_29_3_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_30_3_auto")
    {
      Serial.println("on_auto_Dry_30_3_auto");
      on_auto_Dry_30_3_auto ();
    }
    //##################
    if (ac_panasonic == "on_auto_Dry_16_4_auto")

    {
      Serial.println("on_auto_Dry_16_4_auto");
      on_auto_Dry_16_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_17_4_auto")
    {
      Serial.println("on_auto_Dry_17_4_auto");
      on_auto_Dry_17_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_18_4_auto")
    {
      Serial.println("on_auto_Dry_18_4_auto");
      on_auto_Dry_18_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_19_4_auto")
    {
      Serial.println("on_auto_Dry_19_4_auto");
      on_auto_Dry_19_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_20_4_auto")
    {
      Serial.println("on_auto_Dry_20_4_auto");
      on_auto_Dry_20_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_4_auto")
    {
      Serial.println("on_auto_Dry_21_4_auto");
      on_auto_Dry_21_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_22_4_auto")
    {
      Serial.println("on_auto_Dry_22_4_auto");
      on_auto_Dry_22_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_23_4_auto")
    {
      Serial.println("on_auto_Dry_23_4_auto");
      on_auto_Dry_23_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_24_4_auto")
    {
      Serial.println("on_auto_Dry_24_4_auto");
      on_auto_Dry_24_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_25_4_auto")
    {
      Serial.println("on_auto_Dry_25_4_auto");
      on_auto_Dry_25_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_26_4_auto")
    {
      Serial.println("on_auto_Dry_26_4_auto");
      on_auto_Dry_26_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_27_4_auto")
    {
      Serial.println("on_auto_Dry_27_4_auto");
      on_auto_Dry_27_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_28_4_auto")
    {
      Serial.println("on_auto_Dry_28_4_auto");
      on_auto_Dry_28_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_29_4_auto")
    {
      Serial.println("on_auto_Dry_29_4_auto");
      on_auto_Dry_29_4_auto ();
    }
    if (ac_panasonic == "on_auto_Dry_30_4_auto")
    {
      Serial.println("on_auto_Dry_30_4_auto");
      on_auto_Dry_30_4_auto ();
    }
//############################################################ heat
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
    //########################
    if (ac_panasonic == "on_auto_Heat_16_0_auto")

    {
      Serial.println("on_auto_Heat_16_0_auto");
      on_auto_Heat_16_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_17_0_auto")
    {
      Serial.println("on_auto_Heat_17_0_auto");
      on_auto_Heat_17_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_18_0_auto")
    {
      Serial.println("on_auto_Heat_18_0_auto");
      on_auto_Heat_18_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_19_0_auto")
    {
      Serial.println("on_auto_Heat_19_0_auto");
      on_auto_Heat_19_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_20_0_auto")
    {
      Serial.println("on_auto_Heat_20_0_auto");
      on_auto_Heat_20_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_0_auto")
    {
      Serial.println("on_auto_Heat_21_0_auto");
      on_auto_Heat_21_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_0_auto")
    {
      Serial.println("on_auto_Heat_22_0_auto");
      on_auto_Heat_22_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_23_0_auto")
    {
      Serial.println("on_auto_Heat_23_0_auto");
      on_auto_Heat_23_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_20_0_auto")
    {
      Serial.println("on_auto_Heat_20_0_auto");
      on_auto_Heat_20_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_25_0_auto")
    {
      Serial.println("on_auto_Heat_25_0_auto");
      on_auto_Heat_25_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_26_0_auto")
    {
      Serial.println("on_auto_Heat_26_0_auto");
      on_auto_Heat_26_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_27_0_auto")
    {
      Serial.println("on_auto_Heat_27_0_auto");
      on_auto_Heat_27_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_28_0_auto")
    {
      Serial.println("on_auto_Heat_28_0_auto");
      on_auto_Heat_28_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_29_0_auto")
    {
      Serial.println("on_auto_Heat_29_0_auto");
      on_auto_Heat_29_0_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_30_0_auto")
    {
      Serial.println("on_auto_Heat_30_0_auto");
      on_auto_Heat_30_0_auto ();
    }
    //#########################
    if (ac_panasonic == "on_auto_Heat_16_1_auto")
    {
      Serial.println("on_auto_Heat_16_1_auto");
      on_auto_Heat_16_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_17_1_auto")
    {
      Serial.println("on_auto_Heat_17_1_auto");
      on_auto_Heat_17_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_18_1_auto")
    {
      Serial.println("on_auto_Heat_18_1_auto");
      on_auto_Heat_18_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_19_1_auto")
    {
      Serial.println("on_auto_Heat_19_1_auto");
      on_auto_Heat_19_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_20_1_auto")
    {
      Serial.println("on_auto_Heat_20_1_auto");
      on_auto_Heat_20_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_21_1_auto")
    {
      Serial.println("on_auto_Heat_21_1_auto");
      on_auto_Heat_21_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_1_auto")
    {
      Serial.println("on_auto_Heat_22_1_auto");
      on_auto_Heat_22_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_23_1_auto")
    {
      Serial.println("on_auto_Heat_23_1_auto");
      on_auto_Heat_23_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_24_1_auto")
    {
      Serial.println("on_auto_Heat_24_1_auto");
      on_auto_Heat_24_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_25_1_auto")
    {
      Serial.println("on_auto_Heat_25_1_auto");
      on_auto_Heat_25_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_26_1_auto")
    {
      Serial.println("on_auto_Heat_26_1_auto");
      on_auto_Heat_26_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_27_1_auto")
    {
      Serial.println("on_auto_Heat_27_1_auto");
      on_auto_Heat_27_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_28_1_auto")
    {
      Serial.println("on_auto_Heat_28_1_auto");
      on_auto_Heat_28_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_29_1_auto")
    {
      Serial.println("on_auto_Heat_29_1_auto");
      on_auto_Heat_29_1_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_30_1_auto")
    {
      Serial.println("on_auto_Heat_30_1_auto");
      on_auto_Heat_30_1_auto ();
    }
    //###########
    if (ac_panasonic == "on_auto_Heat_16_2_auto")
    {
      Serial.println("on_auto_Heat_16_2_auto");
      on_auto_Heat_16_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_17_2_auto")
    {
      Serial.println("on_auto_Heat_17_2_auto");
      on_auto_Heat_17_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_18_2_auto")
    {
      Serial.println("on_auto_Heat_18_2_auto");
      on_auto_Heat_18_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_19_2_auto")
    {
      Serial.println("on_auto_Heat_19_2_auto");
      on_auto_Heat_19_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_20_2_auto")
    {
      Serial.println("on_auto_Heat_20_2_auto");
      on_auto_Heat_20_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_2_auto")
    {
      Serial.println("on_auto_Heat_21_2_auto");
      on_auto_Heat_21_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_2_auto")
    {
      Serial.println("on_auto_Heat_22_2_auto");
      on_auto_Heat_22_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_23_2_auto")
    {
      Serial.println("on_auto_Heat_23_2_auto");
      on_auto_Heat_23_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_24_2_auto")
    {
      Serial.println("on_auto_Heat_24_2_auto");
      on_auto_Heat_24_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_25_2_auto")
    {
      Serial.println("on_auto_Heat_25_2_auto");
      on_auto_Heat_25_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_26_2_auto")
    {
      Serial.println("on_auto_Heat_26_2_auto");
      on_auto_Heat_26_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_27_2_auto")
    {
      Serial.println("on_auto_Heat_27_2_auto");
      on_auto_Heat_27_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_28_2_auto")
    {
      Serial.println("on_auto_Heat_28_2_auto");
      on_auto_Heat_28_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_29_2_auto")
    {
      Serial.println("on_auto_Heat_29_2_auto");
      on_auto_Heat_29_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_30_2_auto")
    {
      Serial.println("on_auto_Heat_30_2_auto");
      on_auto_Heat_30_2_auto ();
    }
    //#######################
    if (ac_panasonic == "on_auto_Heat_16_3_auto")

    {
      Serial.println("on_auto_Heat_16_3_auto");
      on_auto_Heat_16_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_17_3_auto")
    {
      Serial.println("on_auto_Heat_17_3_auto");
      on_auto_Heat_17_2_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_18_3_auto")
    {
      Serial.println("on_auto_Heat_18_3_auto");
      on_auto_Heat_18_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_19_3_auto")
    {
      Serial.println("on_auto_Heat_19_3_auto");
      on_auto_Heat_19_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_20_3_auto")
    {
      Serial.println("on_auto_Heat_20_3_auto");
      on_auto_Heat_20_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_3_auto")
    {
      Serial.println("on_auto_Heat_21_3_auto");
      on_auto_Heat_21_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_3_auto")
    {
      Serial.println("on_auto_Heat_22_3_auto");
      on_auto_Heat_22_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_23_3_auto")
    {
      Serial.println("on_auto_Heat_23_3_auto");
      on_auto_Heat_23_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_24_3_auto")
    {
      Serial.println("on_auto_Heat_24_3_auto");
      on_auto_Heat_24_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_25_3_auto")
    {
      Serial.println("on_auto_Heat_25_3_auto");
      on_auto_Heat_25_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_26_3_auto")
    {
      Serial.println("on_auto_Heat_26_3_auto");
      on_auto_Heat_26_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_27_3_auto")
    {
      Serial.println("on_auto_Heat_27_3_auto");
      on_auto_Heat_27_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_28_3_auto")
    {
      Serial.println("on_auto_Heat_28_3_auto");
      on_auto_Heat_28_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_29_3_auto")
    {
      Serial.println("on_auto_Heat_29_3_auto");
      on_auto_Heat_29_3_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_30_3_auto")
    {
      Serial.println("on_auto_Heat_30_3_auto");
      on_auto_Heat_30_3_auto ();
    }
    //##################
    if (ac_panasonic == "on_auto_Heat_16_4_auto")

    {
      Serial.println("on_auto_Heat_16_4_auto");
      on_auto_Heat_16_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_17_4_auto")
    {
      Serial.println("on_auto_Heat_17_4_auto");
      on_auto_Heat_17_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_18_4_auto")
    {
      Serial.println("on_auto_Heat_18_4_auto");
      on_auto_Heat_18_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_19_4_auto")
    {
      Serial.println("on_auto_Heat_19_4_auto");
      on_auto_Heat_19_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_20_4_auto")
    {
      Serial.println("on_auto_Heat_20_4_auto");
      on_auto_Heat_20_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_4_auto")
    {
      Serial.println("on_auto_Heat_21_4_auto");
      on_auto_Heat_21_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_22_4_auto")
    {
      Serial.println("on_auto_Heat_22_4_auto");
      on_auto_Heat_22_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_23_4_auto")
    {
      Serial.println("on_auto_Heat_23_4_auto");
      on_auto_Heat_23_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_24_4_auto")
    {
      Serial.println("on_auto_Heat_24_4_auto");
      on_auto_Heat_24_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_25_4_auto")
    {
      Serial.println("on_auto_Heat_25_4_auto");
      on_auto_Heat_25_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_26_4_auto")
    {
      Serial.println("on_auto_Heat_26_4_auto");
      on_auto_Heat_26_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_27_4_auto")
    {
      Serial.println("on_auto_Heat_27_4_auto");
      on_auto_Heat_27_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_28_4_auto")
    {
      Serial.println("on_auto_Heat_28_4_auto");
      on_auto_Heat_28_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_29_4_auto")
    {
      Serial.println("on_auto_Heat_29_4_auto");
      on_auto_Heat_29_4_auto ();
    }
    if (ac_panasonic == "on_auto_Heat_30_4_auto")
    {
      Serial.println("on_auto_Heat_30_4_auto");
      on_auto_Heat_30_4_auto ();
    }

//############################################################ AUTO
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
    //########################
    if (ac_panasonic == "on_auto_Auto_16_0_auto")

    {
      Serial.println("on_auto_Auto_16_0_auto");
      on_auto_Auto_16_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_17_0_auto")
    {
      Serial.println("on_auto_Auto_17_0_auto");
      on_auto_Auto_17_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_18_0_auto")
    {
      Serial.println("on_auto_Auto_18_0_auto");
      on_auto_Auto_18_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_19_0_auto")
    {
      Serial.println("on_auto_Auto_19_0_auto");
      on_auto_Auto_19_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_20_0_auto")
    {
      Serial.println("on_auto_Auto_20_0_auto");
      on_auto_Auto_20_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_0_auto")
    {
      Serial.println("on_auto_Auto_21_0_auto");
      on_auto_Auto_21_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_0_auto")
    {
      Serial.println("on_auto_Auto_22_0_auto");
      on_auto_Auto_22_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_23_0_auto")
    {
      Serial.println("on_auto_Auto_23_0_auto");
      on_auto_Auto_23_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_20_0_auto")
    {
      Serial.println("on_auto_Auto_20_0_auto");
      on_auto_Auto_20_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_25_0_auto")
    {
      Serial.println("on_auto_Auto_25_0_auto");
      on_auto_Auto_25_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_26_0_auto")
    {
      Serial.println("on_auto_Auto_26_0_auto");
      on_auto_Auto_26_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_27_0_auto")
    {
      Serial.println("on_auto_Auto_27_0_auto");
      on_auto_Auto_27_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_28_0_auto")
    {
      Serial.println("on_auto_Auto_28_0_auto");
      on_auto_Auto_28_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_29_0_auto")
    {
      Serial.println("on_auto_Auto_29_0_auto");
      on_auto_Auto_29_0_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_30_0_auto")
    {
      Serial.println("on_auto_Auto_30_0_auto");
      on_auto_Auto_30_0_auto ();
    }
    //#########################
    if (ac_panasonic == "on_auto_Auto_16_1_auto")
    {
      Serial.println("on_auto_Auto_16_1_auto");
      on_auto_Auto_16_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_17_1_auto")
    {
      Serial.println("on_auto_Auto_17_1_auto");
      on_auto_Auto_17_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_18_1_auto")
    {
      Serial.println("on_auto_Auto_18_1_auto");
      on_auto_Auto_18_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_19_1_auto")
    {
      Serial.println("on_auto_Auto_19_1_auto");
      on_auto_Auto_19_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_20_1_auto")
    {
      Serial.println("on_auto_Auto_20_1_auto");
      on_auto_Auto_20_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_21_1_auto")
    {
      Serial.println("on_auto_Auto_21_1_auto");
      on_auto_Auto_21_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_1_auto")
    {
      Serial.println("on_auto_Auto_22_1_auto");
      on_auto_Auto_22_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_23_1_auto")
    {
      Serial.println("on_auto_Auto_23_1_auto");
      on_auto_Auto_23_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_24_1_auto")
    {
      Serial.println("on_auto_Auto_24_1_auto");
      on_auto_Auto_24_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_25_1_auto")
    {
      Serial.println("on_auto_Auto_25_1_auto");
      on_auto_Auto_25_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_26_1_auto")
    {
      Serial.println("on_auto_Auto_26_1_auto");
      on_auto_Auto_26_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_27_1_auto")
    {
      Serial.println("on_auto_Auto_27_1_auto");
      on_auto_Auto_27_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_28_1_auto")
    {
      Serial.println("on_auto_Auto_28_1_auto");
      on_auto_Auto_28_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_29_1_auto")
    {
      Serial.println("on_auto_Auto_29_1_auto");
      on_auto_Auto_29_1_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_30_1_auto")
    {
      Serial.println("on_auto_Auto_30_1_auto");
      on_auto_Auto_30_1_auto ();
    }
    //###########
    if (ac_panasonic == "on_auto_Auto_16_2_auto")
    {
      Serial.println("on_auto_Auto_16_2_auto");
      on_auto_Auto_16_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_17_2_auto")
    {
      Serial.println("on_auto_Auto_17_2_auto");
      on_auto_Auto_17_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_18_2_auto")
    {
      Serial.println("on_auto_Auto_18_2_auto");
      on_auto_Auto_18_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_19_2_auto")
    {
      Serial.println("on_auto_Auto_19_2_auto");
      on_auto_Auto_19_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_20_2_auto")
    {
      Serial.println("on_auto_Auto_20_2_auto");
      on_auto_Auto_20_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_2_auto")
    {
      Serial.println("on_auto_Auto_21_2_auto");
      on_auto_Auto_21_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_2_auto")
    {
      Serial.println("on_auto_Auto_22_2_auto");
      on_auto_Auto_22_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_23_2_auto")
    {
      Serial.println("on_auto_Auto_23_2_auto");
      on_auto_Auto_23_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_24_2_auto")
    {
      Serial.println("on_auto_Auto_24_2_auto");
      on_auto_Auto_24_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_25_2_auto")
    {
      Serial.println("on_auto_Auto_25_2_auto");
      on_auto_Auto_25_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_26_2_auto")
    {
      Serial.println("on_auto_Auto_26_2_auto");
      on_auto_Auto_26_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_27_2_auto")
    {
      Serial.println("on_auto_Auto_27_2_auto");
      on_auto_Auto_27_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_28_2_auto")
    {
      Serial.println("on_auto_Auto_28_2_auto");
      on_auto_Auto_28_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_29_2_auto")
    {
      Serial.println("on_auto_Auto_29_2_auto");
      on_auto_Auto_29_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_30_2_auto")
    {
      Serial.println("on_auto_Auto_30_2_auto");
      on_auto_Auto_30_2_auto ();
    }
    //#######################
    if (ac_panasonic == "on_auto_Auto_16_3_auto")

    {
      Serial.println("on_auto_Auto_16_3_auto");
      on_auto_Auto_16_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_17_3_auto")
    {
      Serial.println("on_auto_Auto_17_3_auto");
      on_auto_Auto_17_2_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_18_3_auto")
    {
      Serial.println("on_auto_Auto_18_3_auto");
      on_auto_Auto_18_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_19_3_auto")
    {
      Serial.println("on_auto_Auto_19_3_auto");
      on_auto_Auto_19_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_20_3_auto")
    {
      Serial.println("on_auto_Auto_20_3_auto");
      on_auto_Auto_20_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_3_auto")
    {
      Serial.println("on_auto_Auto_21_3_auto");
      on_auto_Auto_21_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_3_auto")
    {
      Serial.println("on_auto_Auto_22_3_auto");
      on_auto_Auto_22_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_23_3_auto")
    {
      Serial.println("on_auto_Auto_23_3_auto");
      on_auto_Auto_23_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_24_3_auto")
    {
      Serial.println("on_auto_Auto_24_3_auto");
      on_auto_Auto_24_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_25_3_auto")
    {
      Serial.println("on_auto_Auto_25_3_auto");
      on_auto_Auto_25_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_26_3_auto")
    {
      Serial.println("on_auto_Auto_26_3_auto");
      on_auto_Auto_26_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_27_3_auto")
    {
      Serial.println("on_auto_Auto_27_3_auto");
      on_auto_Auto_27_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_28_3_auto")
    {
      Serial.println("on_auto_Auto_28_3_auto");
      on_auto_Auto_28_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_29_3_auto")
    {
      Serial.println("on_auto_Auto_29_3_auto");
      on_auto_Auto_29_3_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_30_3_auto")
    {
      Serial.println("on_auto_Auto_30_3_auto");
      on_auto_Auto_30_3_auto ();
    }
    //##################
    if (ac_panasonic == "on_auto_Auto_16_4_auto")

    {
      Serial.println("on_auto_Auto_16_4_auto");
      on_auto_Auto_16_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_17_4_auto")
    {
      Serial.println("on_auto_Auto_17_4_auto");
      on_auto_Auto_17_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_18_4_auto")
    {
      Serial.println("on_auto_Auto_18_4_auto");
      on_auto_Auto_18_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_19_4_auto")
    {
      Serial.println("on_auto_Auto_19_4_auto");
      on_auto_Auto_19_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_20_4_auto")
    {
      Serial.println("on_auto_Auto_20_4_auto");
      on_auto_Auto_20_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_4_auto")
    {
      Serial.println("on_auto_Auto_21_4_auto");
      on_auto_Auto_21_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_22_4_auto")
    {
      Serial.println("on_auto_Auto_22_4_auto");
      on_auto_Auto_22_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_23_4_auto")
    {
      Serial.println("on_auto_Auto_23_4_auto");
      on_auto_Auto_23_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_24_4_auto")
    {
      Serial.println("on_auto_Auto_24_4_auto");
      on_auto_Auto_24_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_25_4_auto")
    {
      Serial.println("on_auto_Auto_25_4_auto");
      on_auto_Auto_25_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_26_4_auto")
    {
      Serial.println("on_auto_Auto_26_4_auto");
      on_auto_Auto_26_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_27_4_auto")
    {
      Serial.println("on_auto_Auto_27_4_auto");
      on_auto_Auto_27_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_28_4_auto")
    {
      Serial.println("on_auto_Auto_28_4_auto");
      on_auto_Auto_28_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_29_4_auto")
    {
      Serial.println("on_auto_Auto_29_4_auto");
      on_auto_Auto_29_4_auto ();
    }
    if (ac_panasonic == "on_auto_Auto_30_4_auto")
    {
      Serial.println("on_auto_Auto_30_4_auto");
      on_auto_Auto_30_4_auto ();
    }


    //###############################
  }
}
