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

  pinMode(controlPin, OUTPUT);
  Serial.println("Setup is ready!");
  Serial.println("Waiting for the communication process...");
  digitalWrite(controlPin, LOW);
}

void loop() {
  read_slave_1();
}


