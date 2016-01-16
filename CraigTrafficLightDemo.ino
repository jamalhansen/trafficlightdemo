/*
  Traffic Light Demo
*/

bool testMode = false;

// First light
int firstLightGreen = 3;
int firstLightYellow = 4;
int firstLightRed = 5;

// First light
int secondLightGreen = 10;
int secondLightYellow = 11;
int secondLightRed = 12;

// Input detection
int inputSecondaryRoad = 13;

// the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(firstLightGreen, OUTPUT);
  pinMode(firstLightYellow, OUTPUT);
  pinMode(firstLightRed, OUTPUT);

  pinMode(secondLightGreen, OUTPUT);
  pinMode(secondLightYellow, OUTPUT);
  pinMode(secondLightRed, OUTPUT);
  
  pinMode(inputSecondaryRoad, INPUT);
}

void runLightsTestPattern()
{
    digitalWrite(firstLightGreen, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(secondLightGreen, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);              // wait for a second
    digitalWrite(firstLightGreen, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(secondLightGreen, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);              // wait for a second
    
    digitalWrite(firstLightYellow, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(secondLightYellow, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);              // wait for a second
    digitalWrite(firstLightYellow, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(secondLightYellow, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);              // wait for a second
    
    digitalWrite(firstLightRed, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(secondLightRed, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);              // wait for a second
    digitalWrite(firstLightRed, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(secondLightRed, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);              // wait for a second
}

void allLightsOnPattern()
{
    digitalWrite(firstLightGreen, HIGH);
    digitalWrite(firstLightYellow, HIGH);
    digitalWrite(firstLightRed, HIGH);
    digitalWrite(secondLightGreen, HIGH);
    digitalWrite(secondLightYellow, HIGH);
    digitalWrite(secondLightRed, HIGH);  
}


// the loop function runs over and over again forever
void loop()
{

  if (testMode)
  {
    runLightsTestPattern();
  }

    //default pattern
    digitalWrite(firstLightGreen, HIGH);
    digitalWrite(firstLightYellow, LOW);
    digitalWrite(firstLightRed, LOW);
    digitalWrite(secondLightGreen, LOW);
    digitalWrite(secondLightYellow, LOW);
    digitalWrite(secondLightRed, HIGH);


  
  /*
  if (digitalRead(inputSecondaryRoad) == HIGH)
  {

  }  */
}
