/*
 * IMPORTENT NOTE:
 * Here Serial0 is used for Serial monitoring purpose
 * Serial2 is connected with the GPRS SIM900 Shield
 * Serial1 need to be connected with multi drop Master Slave network with RS-485 shield (MAX485 chip built in Shield)
 */
 
char val_slave_1[32];
char val_slave_2[32];
char val_slave_3[32];
char val_slave_4[32];
char val_slave_5[32];
char val_slave_6[32];

#define slave_1 1
#define slave_2 2
#define slave_3 3
#define slave_4 4
#define slave_5 5
#define slave_6 6

#define controlPin 3



void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial2.begin(9600);

  pinMode(controlPin, OUTPUT);
  Serial.println("Setup is ready!");
  Serial.println("Waiting for the communication process...");
  digitalWrite(controlPin, LOW);
}

void loop() {
  
  read_slave_1();
  upload_data();
}


