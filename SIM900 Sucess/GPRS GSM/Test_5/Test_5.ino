String toserial_string = "";

void setup() {
  //Serial Initialization
  Serial.begin(9600);
  Serial1.begin(9600);
  while(!Serial && !Serial1){
    //wait until Seral is ready
  }
  sim900_setup();
  Serial.println("Welcome to GPRS...");
}



void loop() {
  GPRS_upload();
  
}




void toSerial()
{
  while (Serial1.available() != 0)
  {
    char k = Serial1.read();
    toserial_string += k;
    delay(50);
  }
  Serial.println(toserial_string);
}

//void toSerial(){
//  char x;
//  while(Serial1.available()!=0){
//    x = Serial1.read();
//    Serial.write(x);
//  }
//}
