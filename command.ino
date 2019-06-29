void ac_on_cold (){
{
  Serial.println("invio il comando on cold  A/C.");
  ac.setModel(kPanasonicRkr);
  ac.on();
  ac.setFan(kPanasonicAcFanAuto);
  ac.setMode(kPanasonicAcCool);
  ac.setTemp(23);
  ac.setSwingVertical(kPanasonicAcSwingVAuto);
  ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  
  
  }
  #if SEND_PANASONIC_AC
  Serial.println("Invio il codice power-on... mode freddo...");
  ac.send();
  #endif  
  printState();
  }
void ac_off_cold (){
{
  Serial.println("invio il comando off cold  A/C.");
  ac.setModel(kPanasonicRkr);
  ac.off();
  ac.setFan(kPanasonicAcFanAuto);
  ac.setMode(kPanasonicAcCool);
  ac.setTemp(23);
  ac.setSwingVertical(kPanasonicAcSwingVAuto);
  ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  
  
  }
  #if SEND_PANASONIC_AC
  Serial.println("Invio il codice power-off... mode freddo...");
  ac.send();
  #endif  
  printState();
  }
void ac_on_hot (){
  {
  Serial.println("invio il comando heat on   A/C.");
  ac.setModel(kPanasonicRkr);
  ac.on();
  ac.setFan(kPanasonicAcFanAuto);
  ac.setMode(kPanasonicAcHeat);
  ac.setTemp(23);
  ac.setSwingVertical(kPanasonicAcSwingVAuto);
  ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  
   }
  #if SEND_PANASONIC_AC
  Serial.println("Invio il codice power-on... mode caldo...");
  ac.send();
  #endif 
  printState();
  }
void ac_off_hot (){
  {
  Serial.println("invio il comando hot off   A/C.");
  ac.setModel(kPanasonicRkr);
  ac.off();
  ac.setFan(kPanasonicAcFanAuto);
  ac.setMode(kPanasonicAcHeat);
  ac.setTemp(23);
  ac.setSwingVertical(kPanasonicAcSwingVAuto);
  ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  
   }
  #if SEND_PANASONIC_AC
  Serial.println("Invio il codice power-ff... mode caldo...");
  ac.send();
  #endif 
  printState();
  }
void ac_off_dry (){
  {
  Serial.println("invio il comando dry off   A/C.");
  ac.setModel(kPanasonicRkr);
  ac.off();
  ac.setFan(kPanasonicAcFanAuto);
  ac.setMode(kPanasonicAcDry);
  ac.setTemp(23);
  ac.setSwingVertical(kPanasonicAcSwingVAuto);
  ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  
   }
  #if SEND_PANASONIC_AC
  Serial.println("Invio il codice power-off... mode deumidificatore...");
  ac.send();
  #endif 
  printState();
  }
void ac_on_dry (){
  {
  Serial.println("invio il comando dry on   A/C.");
  ac.setModel(kPanasonicRkr);
  ac.on();
  ac.setFan(kPanasonicAcFanAuto);
  ac.setMode(kPanasonicAcDry);
  ac.setTemp(23);
  ac.setSwingVertical(kPanasonicAcSwingVAuto);
  ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  
   }
  #if SEND_PANASONIC_AC
  Serial.println("Invio il codice power-on... mode deumidificatore...");
  ac.send();
  #endif 
  printState();
  }
void ac_off_auto (){
  {
  Serial.println("invio il comando auto on   A/C.");
  ac.setModel(kPanasonicRkr);
  ac.off();
  ac.setFan(kPanasonicAcFanAuto);
  ac.setMode(kPanasonicAcAuto);
  ac.setTemp(23);
  ac.setSwingVertical(kPanasonicAcSwingVAuto);
  ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  
   }
  #if SEND_PANASONIC_AC
  Serial.println("Invio il codice power-off... mode auto...");
  ac.send();
  #endif 
  printState();
  }
void ac_on_auto (){
  {
  Serial.println("invio il comando auto off   A/C.");
  ac.setModel(kPanasonicRkr);
  ac.on();
  ac.setFan(kPanasonicAcFanAuto);
  ac.setMode(kPanasonicAcAuto);
  ac.setTemp(23);
  ac.setSwingVertical(kPanasonicAcSwingVAuto);
  ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
  
   }
  #if SEND_PANASONIC_AC
  Serial.println("Invio il codice power-on... mode auto...");
  ac.send();
  #endif 
  printState();
  }
