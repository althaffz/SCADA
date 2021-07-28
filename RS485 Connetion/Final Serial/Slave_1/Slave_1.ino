#define myID 1
#define controlPin 3

int called_ID;

void setup() {
  Serial.begin(9600);
  //pinMode(controlPin, OUTPUT);
  //digitalWrite(controlPin, LOW);
}

void loop() {

  
  called_ID = Serial.read();
  //digitalWrite(controlPin, HIGH);

  if(called_ID == myID){
    
    Serial.println("" + String(10)+","+ String(20)+","+ String(30)+","+ String(40)+","+ String(50)+","+ String(60));
    delay(100);
    //digitalWrite(controlPin, LOW);

    called_ID = 0;
  }

}
