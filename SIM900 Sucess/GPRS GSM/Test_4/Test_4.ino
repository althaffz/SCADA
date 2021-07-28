#define  rxPin  19
#define  txPin  18

//#include <SoftwareSerial.h>
//SoftwareSerial Serial1(2, 3);

void setup()
{
  Serial1.begin(19200);
  Serial.begin(19200);

  Serial.println("Config SIM900...");
  delay(2000);
  Serial.println("Done!...");
  Serial1.flush();
  Serial.flush();

  // attach or detach from GPRS service 
  Serial1.println("AT+CGATT?");
  delay(100);
  toSerial();


  // bearer settings
  Serial1.println("AT+SAPBR=3,1,\"CONTYPE\",\"GPRS\"");
  delay(2000);
  toSerial();

  // bearer settings
  Serial1.println("AT+SAPBR=3,1,\"APN\",\"epc.tmobile.com\"");
  delay(2000);
  toSerial();

  // bearer settings
  Serial1.println("AT+SAPBR=1,1");
  delay(2000);
  toSerial();
}


void loop()
{
   // initialize http service
   Serial1.println("AT+HTTPINIT");
   delay(2000); 
   toSerial();

   // set http param value
   Serial1.println("AT+HTTPPARA=\"URL\",\"http://YOUR.DOMAIN.COM/rest/receiveSensorData?sensorval1=blah&sensorval2=blah\"");
   delay(2000);
   toSerial();

   // set http action type 0 = GET, 1 = POST, 2 = HEAD
   Serial1.println("AT+HTTPACTION=0");
   delay(6000);
   toSerial();

   // read server response
   Serial1.println("AT+HTTPREAD"); 
   delay(1000);
   toSerial();

   Serial1.println("");
   Serial1.println("AT+HTTPTERM");
   toSerial();
   delay(300);

   Serial1.println("");
   delay(10000);
}

void toSerial()
{
  while(Serial1.available()!=0)
  {
    Serial.write(Serial1.read());
  }
}
