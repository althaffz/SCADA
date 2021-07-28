const byte numChars = 32;
char receivedChars[numChars];  // an array to store the received data

boolean newData = false;

void read_slave_1() {
  digitalWrite(controlPin, HIGH);
  Serial1.write(slave_1);
  delay(10);
  digitalWrite(controlPin, LOW);
  latchData();
  delay(50);
  //digitalWrite(controlPin, HIGH);
  printData();
}

void latchData() {
  static byte ndx = 0;
  char endMarker = '\n';
  char rc;

  while (Serial1.available() > 0 && newData == false) {
    rc = Serial1.read();

    if (rc != endMarker) {
      receivedChars[ndx] = rc;
      ndx++;
      if (ndx >= numChars) {
        ndx = numChars - 1;
      }
    }
    else {
      receivedChars[ndx] = '\0'; // terminate the string
      ndx = 0;
      newData = true;
    }
  }
}

void printData() {
  if (newData == true) {
    Serial.print("This just in ... ");
    Serial.println(receivedChars);
    newData = false;
  }
}
