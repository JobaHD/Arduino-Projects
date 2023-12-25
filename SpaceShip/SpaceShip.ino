void setup() {
  // put your setup code here, to run once:  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}
int switchState = 0;

void loop() {
  // put your main code here, to run repeatedly:
  // read if button pressed
  switchState = digitalRead(2);

  if (!switchState) {
    // button not pressed
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);


  } else {
    // button pressed!
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250); //wait a .25 seconds
    //toggle LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); // wait .25 seconds
  }
}
