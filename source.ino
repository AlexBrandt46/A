const unsigned short int btnPin = 12; //the pin of the pushbutton
const short int btnState = 0; //keeps track of whether or not the button has been pushed

void setup() {
  pinMode(btnPin, INPUT); //marks the pin as an input
}

void loop() {

  buttonState = digitalRead(buttonPin); //reads the current state of the button

  //checks if the button is being pushed or not
  if (buttonState == HIGH) {
    
  }
  else {
    
  }

}
