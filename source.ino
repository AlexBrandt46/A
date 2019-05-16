const unsigned short int btnPin = 12; //the pin of the pushbutton
short int btnState = 0; //keeps track of whether or not the button has been pushed
short int lastBtnState = 0; //the previous state of the button, checks that the 
int startPushed = 0; //the time the button was pressed
int endPushed = 0; //the time the button was released
int timePushed = 0; //length of time the button spent in the pushedState
int timeReleased; //length of time the button spent in the released state

void setup() {
  Serial.begin(9600);
  pinMode(btnPin, INPUT); //marks the pin as an input
}

void loop() {

  btnState = digitalRead(btnPin); //reads the current state of the button

  //checks if the button state has been changed
  if (btnState != lastBtnState) {
    updateState();
  }

  lastBtnState = btnState; //assigns lastBtnState to the current button state

}

void updateState() {
  
   //checks if the button is being pushed or not
  if (btnState == HIGH) {
    
    startPushed = millis(); //assigns the time the button was pressed as the time since the program's started running
    timeReleased = startPushed - endPushed; //substracts the time that the button was most recently released from the next time the button was pushed 
    Serial.print(timeReleased);
    
  }

  //used for if the button has been released
  else {

    endPushed = millis(); //gets the current time in milliseconds since the program began running
    timePushed = endPushed - startPushed; //substracts the time that the button was most recently pushed from the time that was just recorded as the button was released
    Serial.print(timePushed);
    
  }
}
