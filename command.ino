void ac_on_cold () {
  {
    ac.setModel(kPanasonicRkr);
    ac.on();
    ac.setFan(kPanasonicAcFanAuto);
    ac.setMode(kPanasonicAcCool);
    ac.setTemp(23);
    ac.setSwingVertical(kPanasonicAcSwingVAuto);
    ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  }
#if SEND_PANASONIC_AC
  Serial.println(" power-on... mode freddo... ventola AUTO... swing verticale AUTO... swing orizzontale AUTO...");
  ac.send();
#endif
  printState();
  Serial.println("invio effettuato");
}
void ac_off_cold () {
  {
    ac.setModel(kPanasonicRkr);
    ac.off();
    ac.setFan(kPanasonicAcFanAuto);
    ac.setMode(kPanasonicAcCool);
    ac.setTemp(23);
    ac.setSwingVertical(kPanasonicAcSwingVAuto);
    ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  }
#if SEND_PANASONIC_AC
  Serial.println(" power-off... mode freddo... ventola AUTO... swing verticale AUTO... swing orizzontale AUTO...");
  ac.send();
#endif
  printState();
  Serial.println("invio effettuato");
}
void ac_on_hot () {
  {
    ac.setModel(kPanasonicRkr);
    ac.on();
    ac.setFan(kPanasonicAcFanAuto);
    ac.setMode(kPanasonicAcHeat);
    ac.setTemp(23);
    ac.setSwingVertical(kPanasonicAcSwingVAuto);
    ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  }
#if SEND_PANASONIC_AC
  Serial.println(" power-on... mode caldo... ventola AUTO... swing verticale AUTO... swing orizzontale AUTO...");
  ac.send();
#endif
  printState();
  Serial.println("invio effettuato");
}
void ac_off_hot () {
  {
    ac.setModel(kPanasonicRkr);
    ac.off();
    ac.setFan(kPanasonicAcFanAuto);
    ac.setMode(kPanasonicAcHeat);
    ac.setTemp(23);
    ac.setSwingVertical(kPanasonicAcSwingVAuto);
    ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  }
#if SEND_PANASONIC_AC
  Serial.println(" power-off... mode caldo... ventola AUTO... swing verticale AUTO... swing orizzontale AUTO...");
  ac.send();
#endif
  printState();
  Serial.println("invio effettuato");
}
void ac_off_dry () {
  {
    ac.setModel(kPanasonicRkr);
    ac.off();
    ac.setFan(kPanasonicAcFanAuto);
    ac.setMode(kPanasonicAcDry);
    ac.setTemp(23);
    ac.setSwingVertical(kPanasonicAcSwingVAuto);
    ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  }
#if SEND_PANASONIC_AC
  Serial.println(" power-off... mode deumidificatore... ventola AUTO... swing verticale AUTO... swing orizzontale AUTO...");
  ac.send();
#endif
  printState();
  Serial.println("invio effettuato");
}
void ac_on_dry () {
  {
    ac.setModel(kPanasonicRkr);
    ac.on();
    ac.setFan(kPanasonicAcFanAuto);
    ac.setMode(kPanasonicAcDry);
    ac.setTemp(23);
    ac.setSwingVertical(kPanasonicAcSwingVAuto);
    ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  }
#if SEND_PANASONIC_AC
  Serial.println(" power-on... mode deumidificatore... ventola AUTO... swing verticale AUTO... swing orizzontale AUTO...");
  ac.send();
#endif
  printState();
  Serial.println("invio effettuato");
}
void ac_off_auto () {
  {
    ac.setModel(kPanasonicRkr);
    ac.off();
    ac.setFan(kPanasonicAcFanAuto);
    ac.setMode(kPanasonicAcAuto);
    ac.setTemp(23);
    ac.setSwingVertical(kPanasonicAcSwingVAuto);
    ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  }
#if SEND_PANASONIC_AC
  Serial.println(" power-off... mode AUTO... ventola AUTO... swing verticale AUTO... swing orizzontale AUTO...");
  ac.send();
#endif
  printState();
  Serial.println("invio effettuato");
}
void ac_on_auto () {
  {
    ac.setModel(kPanasonicRkr);
    ac.on();
    ac.setFan(kPanasonicAcFanAuto);
    ac.setMode(kPanasonicAcAuto);
    ac.setTemp(23);
    ac.setSwingVertical(kPanasonicAcSwingVAuto);
    ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  }
#if SEND_PANASONIC_AC
  Serial.println(" power-on... mode AUTO... ventola AUTO... swing verticale AUTO... swing orizzontale AUTO...");
  ac.send();
#endif
  printState();
  Serial.println("invio effettuato");
}
