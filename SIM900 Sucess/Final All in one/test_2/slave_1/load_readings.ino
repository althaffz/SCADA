void load_readings(){
  
/*
 * Temperature Meter Readings!!!
 * These values Need to be assigned!!!
 */
//  Serial.print("temp1");          
//  temp1 = read_modbus();
//
//  Serial.print("temp2");
//  temp2 = read_modbus();
//
//  Serial.print("temp3");
//  temp3 = read_modbus();
//
//  Serial.print("temp4");
//  temp4 = read_modbus();
//
//  Serial.print("temp5");
//  temp5 = read_modbus();


/*
 * Energy Meter Readings!!!
 */

  Serial.print("avg_current = ");
  avg_current = read_modbus(0x01,0x04,0x00,0x17,0x00,0x01,0x81,0xCE);

  Serial.print("avg_voltage LN = ");
  avg_voltage = read_modbus(0x01,0x04,0x00,0x07,0x0,0x01,0x80,0x0B);

  Serial.print("kw = ");
  kw = read_modbus(0x01,0x04,0x00,0x2B,0x00,0x01,0x41,0xC2);

  Serial.print("kwh = ");
  kwh = read_modbus(0x01,0x04,0x00,0x3B,0x00,0x01,0x40,0x07);

  Serial.println("******************************************************************************************");
}

