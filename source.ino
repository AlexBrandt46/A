const unsigned short int btnPin = 12; //the pin of the pushbutton
const short int btnState = 0; //keeps track of whether or not the button has been pushed
int startPress = 0; //the time the button was pressed
int endPress = 0; //the time the button was released

void setup() {
  Serial.begin(9600);
  pinMode(btnPin, INPUT); //marks the pin as an input
}

void loop() {

  buttonState = digitalRead(buttonPin); //reads the current state of the button

  //checks if the button is being pushed or not
  if (buttonState == HIGH) {
    startPressed = millis(); //assigns the time the button was pressed as the time since the program's started running
    
  }
  else {
    
  }

}
