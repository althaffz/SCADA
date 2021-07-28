#define myID 2
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
    
    Serial.print(70);
    Serial.print(',');
    Serial.print(80);
    Serial.print(',');
    Serial.print(90);
    Serial.print(',');
    Serial.print(100);
    Serial.print(',');
    Serial.print(110);
    Serial.print(',');
    Serial.println(120);   

    delay(20);
    digitalWrite(controlPin, LOW);
    

    called_ID = 0;
  }

}
