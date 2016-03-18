int emergency = 0;
void setup() {
  //sets up pins 3,4,5 as outputs
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT); //set up pin13LED as output
  pinMode(2, INPUT); //set up emergency switch as input
}

void loop() {
  emergency = digitalRead(2);
  if (emergency == LOW) {
   // do RED for 10sec, green for 10sec, and yellow for 3sec.
digitalWrite(13, LOW);
digitalWrite(3 , HIGH);
delay(10000);
digitalWrite(13, HIGH);
digitalWrite(3 ,LOW);
digitalWrite(5 ,HIGH);
delay(10000);
digitalWrite(5 ,LOW);
digitalWrite(4 ,HIGH);
delay(3000);
digitalWrite(4 , LOW);
  }
    else{
   digitalWrite(3, HIGH);
    digitalWrite(13, LOW);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(13, HIGH);
    delay(1000);
}
}
/* Notes:
Press the RESET button on your board to restart the circuit, putting it back on RED.
To go into Emergency Mode: Hold the Emergency Button and press RESET.
*/
