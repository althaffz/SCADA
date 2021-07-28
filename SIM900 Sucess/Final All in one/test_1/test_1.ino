#define controlPin 22

float kVAh, kWh, pf, kVArh; 


void setup() {
  //Serial Initialization
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial2.begin(9600);
  while(!Serial && !Serial1){
    //wait until Seral is ready
  }
  Serial.println("Welcome to GPRS...");


  //Intiating GPRS connection
  Serial1.println("AT+CGATT?");
  delay(100);
  toSerial();
  Serial.println("GPRS connection initiated...!");

  // bearer settings
  // set connection type to GPRS
  Serial1.println("AT+SAPBR=3,1,\"CONTYPE\",\"GPRS\"");
  delay(1000);
  toSerial();
  Serial.println("Connection Type was set to GPRS...");

  //Set APN
  Serial1.println("AT+SAPBR=3,1,\"APN\",\"AirtelLive\"");
  delay(1000);
  toSerial();
  Serial.println("APN set to dialogbb...!");

  //Finalizing the bearer settings
  Serial1.println("AT+SAPBR=1,1");
  delay(1000);
  toSerial();
  Serial.println("GPRS connected...!");
  pinMode(controlPin, OUTPUT);
}


void loop() {
  //kVAh
  //Serial.print("kVAh: ");
  kVAh = read_modbus(0x01, 0x04, 0x00, 0x3D, 0x00, 0x01,0xA0, 0x06);


  //kWh
  //Serial.print("kWh: ");
  kWh = read_modbus(0x01, 0x04, 0x00, 0x3B, 0x00, 0x01, 0x40, 0x07);
  

  //Power factor
  //Serial.print("Power factor: ");
  pf = read_modbus(0x01, 0x04, 0x00, 0x31, 0x00, 0x01, 0x60, 0x05);

  //kVArh
  //Serial.print("kVArh: ");
  kVArh = read_modbus(0x01, 0x04, 0x00, 0x3F, 0x00, 0x01,0x01, 0xC6);

  Serial.println("Loop completed!");
  Serial.println("******************************************************************************************");
}


