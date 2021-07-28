/*
 * IMPORTENT NOTE:
 * Here Serial0 is used to monitor the code run using serial monitor. Keep the pins free!
 * Serial1 should be connected to multi drop arduino master slave network
 * Serial2 should be connected to the modbus enabled meters. meters 
 */

#define myID 1
#define controlPin1 3
#define controlPin2 4

int called_ID;
float temp1, temp2, temp3, temp4, temp5, avg_current, avg_voltage, kw, kwh;


void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial2.begin(9600);
  pinMode(controlPin1, OUTPUT);
  pinMode(controlPin2, OUTPUT);
  digitalWrite(controlPin1, LOW);
  digitalWrite(controlPin2, LOW);
  
}

void loop() {

  load_readings();
  
  delay(100);
  while(Serial1.available()>0){
    called_ID = Serial1.read();
  }
  delay(10);
  if(called_ID == myID){
    digitalWrite(controlPin1, HIGH);
    
    Serial1.print(10);    
    Serial1.print(',');
    Serial1.print(20);
    Serial1.print(',');
    Serial1.print(30);
    Serial1.print(',');
    Serial1.print(40);
    Serial1.print(',');
    Serial1.print(50);
    Serial1.print(',');
    Serial1.print(avg_current);
    Serial1.print(',');
    Serial1.print(avg_voltage);
    Serial1.print(',');
    Serial1.print(kw);
    Serial1.print(',');
    Serial1.println(kwh);    

    delay(30);
    digitalWrite(controlPin1, LOW);

    called_ID = 0;
  }

}
