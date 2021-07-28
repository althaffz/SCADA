void GPRS_upload(){
  
   my_SIM900_SETUP();
   //Initializing HTTP
   Serial.println("INSIDE Uploading LOOP................");
   Serial1.println("AT+HTTPINIT");
   delay(1000); 
   toSerial();
  
   //sample quiry update using using AT command
   Serial1.println("AT+HTTPPARA=\"URL\",\"http://www.dsi_database.netau.net/uploader.php?id=0&p_pairs=48&temp1=105&temp2=230&temp3=100&temp4=2500&temp5=570&avg_current=100&avg_voltage=250&kw=1000.0&kwh=1024.0\"");  
   Serial.println("AT+HTTPPARA=\"URL\",\"http://www.dsi_database.netau.net/uploader.php?id=0&p_pairs=48&temp1=105&temp2=230&temp3=100&temp4=2500&temp5=570&avg_current=100&avg_voltage=250&kw=1000.0&kwh=1024.0\"");

   //AT+HTTPPARA="URL","http://www.dsi_database.netau.net/uploader.php?id=0&p_pairs=48&temp1=105&temp2=230&temp3=100&temp4=2500&temp5=570&avg_current=100&avg_voltage=250&kw=1000.0&kwh=1024.0"
   

//  String cmd= "AT+HTTPPARA=\"URL\",\"http://dsi_database.netau.net/uploader.php?id=0&p_pairs=";
//    cmd+= <value>;
//    cmd+= "&temp1=";
//    cmd+= <value>;
//    cmd+= "&temp2=";
//    cmd+= <value>;
//    cmd+= "&temp3=";
//    cmd+= <value>;
//    cmd+= "&temp4=";
//    cmd+= <value>;
//    cmd+= "&temp5=";
//    cmd+= <value>;
//    cmd+= "&avg_current=";
//    cmd+= <value>;
//    cmd+= "&avg_voltage=";
//    cmd+= <value>;
//    cmd+= "&kw=";
//    cmd+= <value>;
//    cmd+= "&kwh=";
//    cmd+= <value>;
//    cmd+= "\"";
//
//
//  Serial1.println(cmd);
//  Serial.println(cmd);


   toSerial();
   delay(1000);
   // set http action type 0 = GET, 1 = POST, 2 = HEAD
   Serial1.println("AT+HTTPACTION=0");
   delay(1000);
   toSerial();

   Serial1.println("");
}
