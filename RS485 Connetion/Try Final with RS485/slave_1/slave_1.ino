#define myID 1
#define controlPin 3

int called_ID;

void setup() {
  Serial.begin(9600);
  pinMode(controlPin, OUTPUT);
  digitalWrite(controlPin, LOW);
}

void loop() {

  while(Serial.available()>0){
    called_ID = Serial.read();
  }
  delay(10);
  if(called_ID == myID){
    digitalWrite(controlPin, HIGH);
    
    Serial.print(10);
    Serial.print(',');
    Serial.print(20);
    Serial.print(',');
    Serial.print(30);
    Serial.print(',');
    Serial.print(40);
    Serial.print(',');
    Serial.print(50);
    Serial.print(',');
    Serial.println(60);   

    delay(20);
    digitalWrite(controlPin, LOW);
    

    called_ID = 0;
  }

}
