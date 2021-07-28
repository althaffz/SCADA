

void setup()
{
  Serial.begin(19200);  //Default serial port setting for the GPRS modem is 19200bps 8-N-1
  Serial.print("\r");
  delay(1000);                    //Wait for a second while the modem sends an "OK"
  Serial.print("AT+CMGF=1\r");    //Because we want to send the SMS in text mode
  delay(1000);
 
  //Serial.print("AT+CSCA=\"+94777478504\"\r");  //Setting for the SMS Message center number,  
  //delay(1000);                                  //uncomment only if required and replace with
                                                  //the message center number obtained from
                                                  //your GSM service provider.
                                                  //Note that when specifying a tring of characters
                                                  // " is entered as \"
 
  Serial.print("AT+CMGS=\"+94777478504\"\r");    //Start accepting the text for the message
                                                  //to be sent to the number specified.
                                                  //Replace this number with the target mobile number.
  delay(1000);
  Serial.print("SIM900 and Arduino say Hi!\r");   //The text for the message
  delay(1000);
  Serial.print(26);  //Equivalent to sending Ctrl+Z 
}
 
void loop()
{
      //We just want to send the SMS only once, so there is nothing in this loop.
      //If we put the code for SMS here, it will be sent again and again and cost us a lot.
}
