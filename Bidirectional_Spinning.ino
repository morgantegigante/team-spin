// This code should read the state of the buttons and turn the motor on/off and c/c-c

// Set up pin numbers
const int forwardbuttonPin = 2;
const int reversebuttonPin = 3;
const int forwardrelayPin = 4;
const int reverserelayPin = 5;

// Variable for the motor states
int forwardmotorState = 0;
int reversemotorState = 0;

void setup() {
  // Initalize inputs and outputs
  pinMode(forwardbuttonPin, INPUT);
  pinMode(reversebuttonPin, INPUT);
  pinMode(forwardrelayPin, OUTPUT);
  pinMode(reverserelayPin, OUTPUT);
}

void loop(){
  // Read the state of the button
  forwardmotorState = digitalRead(forwardbuttonPin);
  reversemotorState = digitalRead(reversebuttonPin);
  
  // Check which button is pressed
  if (forwardmotorState == HIGH) {
   // Turns one relay on
  digitalWrite(forwardrelayPin, HIGH);
  }
  else if (reversemotorState == HIGH) {
    digitalWrite(forwardrelayPin, HIGH);
    digitalWrite(reverserelayPin, HIGH);
  }
  else {
    // Turns the motor off
    digitalWrite(forwardrelayPin, LOW);
    digitalWrite(reverserelayPin, LOW);
  }
}
    
