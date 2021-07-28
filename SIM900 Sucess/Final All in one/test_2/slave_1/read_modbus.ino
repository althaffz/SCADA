float read_modbus(int slave_ID, int function_code, int reg_adr_byte_1, int reg_adr_byte_2, int num_of_reg_byte_1, int num_of_reg_byte_2, int CRC_1, int CRC_2){

  float x;
  int input[32];
  int i = 0;

  
  digitalWrite(controlPin2, HIGH);
  /***************************************************************/
  Serial2.write(slave_ID);    //slave id
  //delay(1);
  Serial2.write(function_code);    //Function code
  //delay(1);
  Serial2.write(reg_adr_byte_1);    //First byte of the Register address to be read
  //delay(1);
  Serial2.write(reg_adr_byte_2);    //Second byte of the Register address to be read
  //delay(1);
  Serial2.write(num_of_reg_byte_1);    //Number of registers to be read byte 1
  //delay(1);
  Serial2.write(num_of_reg_byte_2);    //Number of registers to be read byte 2
  //delay(1);
  Serial2.write(CRC_1);    //CRC byte 1
  //delay(1);
  Serial2.write(CRC_2);    //CRC byte 2
  Serial2.flush();
  /***************************************************************/
  digitalWrite(controlPin2, LOW);
  delay(100);

  if(Serial2.available()>0){
    //Serial.println("Serial available: " + String(Serial2.available()));
    //Serial.flush();
    while(Serial2.available()>0){
      input[i] = Serial2.read();
      i++;
    }
  }
  
    //Serial.println(String(input[0])+","+String(input[1])+","+String(input[2])+","+String(input[3])+","+String(input[4])+","+String(input[5])+","+String(input[6])+","+String(input[7])+","+String(input[8])+","+String(input[9]));
    ((byte*)&x)[3]= input[3];
    ((byte*)&x)[2]= input[4]; 
    ((byte*)&x)[1]= input[5];
    ((byte*)&x)[0]= input[6];

    Serial.println(x);
    return x;
}

