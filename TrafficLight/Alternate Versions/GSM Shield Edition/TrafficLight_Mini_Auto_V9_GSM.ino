//This program has been modified for users of the GSM Shield
int emergency = 0;
void setup() {
  //sets up pins 5,6,8 as outputs
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, INPUT); //set up emergency switch as input
}

void loop() {
  emergency = digitalRead(4);
  if (emergency == LOW) {
   // do RED for 10sec, green for 10sec, and yellow for 3sec.
digitalWrite(5 , HIGH);
delay(10000);
digitalWrite(5 ,LOW);
digitalWrite(8 ,HIGH);
delay(10000);
digitalWrite(8 ,LOW);
digitalWrite(6 ,HIGH);
delay(3000);
digitalWrite(6 , LOW);
  }
    else{
   digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay(1000);
}
}
/* Notes:
Press the RESET button on your board to restart the circuit, putting it back on RED.
To go into Emergency Mode: Hold the Emergency Button and press RESET.
*/
