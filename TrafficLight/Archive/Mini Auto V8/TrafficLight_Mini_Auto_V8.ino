void setup() {
  //sets up pins 2,3,4 as outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // do RED for 10sec, green for 10sec, and yellow for 3sec.
digitalWrite(2 , HIGH);
delay(10000);
digitalWrite(2 ,LOW);
digitalWrite(4 ,HIGH);
delay(10000);
digitalWrite(4 ,LOW);
digitalWrite(3 ,HIGH);
delay(3000);
digitalWrite(3 , LOW);
}

