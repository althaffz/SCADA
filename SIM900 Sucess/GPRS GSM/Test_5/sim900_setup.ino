void sim900_setup(){
  
  Serial.println("Config SIM900...");
  delay(200);
  Serial.println("Done!...");
  //Serial2.flush();
  //Serial.flush();
  Serial1.println("AT");
 
  toSerial();
  delay(1000);
  // attach or detach from GPRS service 
  Serial1.println("AT+CGATT?");
  toSerial();
  delay(1000);  

  // bearer settings
  Serial1.println("AT+SAPBR=3,1,\"CONTYPE\",\"GPRS\"");
  toSerial(); 
  delay(1000);
  //

  // bearer settings
  Serial1.println("AT+SAPBR=3,1,\"APN\",\"DIALOGBB\"");
  toSerial();
  // Serial1.println("AT+SAPBR=3,1,\"APN\",\"airtellive\"");
  delay(2000);
  //toSerial();

  // bearer settings
  Serial1.println("AT+SAPBR=1,1");
  toSerial();
  delay(2000);
  toSerial();
}

void my_SIM900_SETUP(){
  Bigining:
  CGATT_TEST:
  Serial1.println("AT+CGATT?");
  delay(10);
  toSerial();
  if ((toserial_string.compareTo("OK"))==0){// // if (toserial_string=="ERROR"){
    Serial.println("Retrying CGATT.");
     toserial_string="";
    delay(10);
    goto CGATT_TEST;
  }
 toserial_string="";
 delay(10);

  //*************************************************
CONTYPE_TEST:
  Serial1.println("AT+SAPBR=3,1,\"CONTYPE\",\"GPRS\"");//AT+SAPBR=3,1,"CONTYPE","GPRS"
  delay(20);
  toSerial();
  if ((toserial_string.compareTo("OK"))==0){ // if (toserial_string=="ERROR"){
    Serial.println("Retrying CGATT.");
     toserial_string="";
    delay(10);
    goto CONTYPE_TEST;
  }
   toserial_string="";
   
 delay(10);
  //*************************************************
APN_TEST:
 // Serial2.println("AT+SAPBR=3,1,\"APN\",\"DIALOGBB\"");
  Serial1.println("AT+SAPBR=3,1,\"APN\",\"dialogbb\"");//AT+SAPBR=3,1,"APN","airtellive"

  delay(20);
  toSerial();
   if ((toserial_string.compareTo("OK"))==0){ //if (toserial_string=="ERROR"){
    Serial.println("Retrying CGATT.");
     toserial_string="";
    delay(10);
    goto CGATT_TEST;
  }
 toserial_string="";
 delay(10);
 Serial1.println("AT+SAPBR=1,1");
  delay(20);
  toSerial();
 if ((toserial_string.compareTo("OK"))==0){  // if (toserial_string=="ERROR"){
    Serial.println("Retrying CGATT.");
     toserial_string="";
    delay(100);
    goto APN_TEST;
   }
  toserial_string="";
  //***************************************
  Serial.println("OK");
  Serial.println("\n");
  Serial.println("All Internet and SIM900 Configurations are OK!");
  Prograss_bar(20);
}
