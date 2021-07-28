void mysql_upload(){
   //Initializing HTTP
   Serial2.println("AT+HTTPINIT");
   delay(2000); 
   toSerial();
   
  // sample quiry update using using AT command
  // Serial2.println("AT+HTTPPARA=\"URL\",\"http://dsi_database.netau.net/uploader.php?id=0&p_pairs=45&temp1=105&temp2=230&temp3=100&temp4=2500&temp5=570&avg_current=100&avg_voltage=250&kw=1000.0&kwh=1024.0\"");
  

  String cmd= "AT+HTTPPARA=\"URL\",\"http://dsi_database.netau.net/uploader.php?id=0&p_pairs=";
    cmd+= 100;
    cmd+= "&temp1=";
    cmd+= 256.10;
    cmd+= "&temp2=";
    cmd+= 743.85;
    cmd+= "&temp3=";
    cmd+= 781.80;
    cmd+= "&temp4=";
    cmd+= 400.54;
    cmd+= "&temp5=";
    cmd+= 384.59;
    cmd+= "&avg_current=";
    cmd+= kVAh;
    cmd+= "&avg_voltage=";
    cmd+= kWh;
    cmd+= "&kw=";
    cmd+= pf;
    cmd+= "&kwh=";
    cmd+= kVArh;
    cmd+= "\"";


  Serial2.println(cmd);
  Serial.println(cmd);


   toSerial();
   delay(2000);
   // set http action type 0 = GET, 1 = POST, 2 = HEAD
   Serial2.println("AT+HTTPACTION=0");
   delay(2000);
   toSerial();

   // read server response
   Serial2.println("AT+HTTPREAD"); 
   delay(2000);
   toSerial();

   Serial2.println("");
   Serial2.println("AT+HTTPTERM");
   toSerial();
   delay(2000);

   Serial2.println("");
   delay(1000);
}

void toSerial(){
  while(Serial2.available()!=0){
    Serial.write(Serial2.read());
  }
}
