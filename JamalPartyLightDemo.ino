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
  pinMode(firstLightGreen, OUTPUT);  //Configures a pin to be used for output
  pinMode(firstLightYellow, OUTPUT);
  pinMode(firstLightRed, OUTPUT);

  pinMode(secondLightGreen, OUTPUT);
  pinMode(secondLightYellow, OUTPUT);
  pinMode(secondLightRed, OUTPUT);

  pinMode(inputSecondaryRoad, INPUT);  //Configures a pin to be used for input
}

void runLightsTestPattern()
{
  //code provided to test the system

  digitalWrite(firstLightGreen, HIGH);   //delivers a high voltage to the pin, lighting the LED
  digitalWrite(secondLightGreen, HIGH);
  delay(1000);   //a wait of 1 second
  digitalWrite(firstLightGreen, LOW);
  digitalWrite(secondLightGreen, LOW);   //delivers no voltage to the pin, keeping the LED off
  delay(1000);

  digitalWrite(firstLightYellow, HIGH);
  digitalWrite(secondLightYellow, HIGH);
  delay(1000);
  digitalWrite(firstLightYellow, LOW);
  digitalWrite(secondLightYellow, LOW);
  delay(1000);

  digitalWrite(firstLightRed, HIGH);
  digitalWrite(secondLightRed, HIGH);
  delay(1000);
  digitalWrite(firstLightRed, LOW);
  digitalWrite(secondLightRed, LOW);
  delay(1000);
}

void allLightsOnPattern()
{
  // more code to test lights. Can be used to make sure no lights are burned out

  digitalWrite(firstLightGreen, HIGH);
  digitalWrite(firstLightYellow, HIGH);
  digitalWrite(firstLightRed, HIGH);
  digitalWrite(secondLightGreen, HIGH);
  digitalWrite(secondLightYellow, HIGH);
  digitalWrite(secondLightRed, HIGH);
}

void allLightsOffPattern()
{
  // Lights off!
  digitalWrite(firstLightGreen, LOW);
  digitalWrite(firstLightYellow, LOW);
  digitalWrite(firstLightRed, LOW);
  digitalWrite(secondLightGreen, LOW);
  digitalWrite(secondLightYellow, LOW);
  digitalWrite(secondLightRed, LOW);
}

void greenLightsOnPattern()
{
  // Turns on green lights
  digitalWrite(firstLightGreen, HIGH);
  digitalWrite(firstLightYellow, LOW);
  digitalWrite(firstLightRed, LOW);
  digitalWrite(secondLightGreen, HIGH);
  digitalWrite(secondLightYellow, LOW);
  digitalWrite(secondLightRed, LOW);
}

void yellowLightsOnPattern()
{
  // Turns on yellow lights
  digitalWrite(firstLightGreen, LOW);
  digitalWrite(firstLightYellow, HIGH);
  digitalWrite(firstLightRed, LOW);
  digitalWrite(secondLightGreen, LOW);
  digitalWrite(secondLightYellow, HIGH);
  digitalWrite(secondLightRed, LOW);
}

void redLightsOnPattern()
{
  // Turns on red lights
  digitalWrite(firstLightGreen, LOW);
  digitalWrite(firstLightYellow, LOW);
  digitalWrite(firstLightRed, HIGH);
  digitalWrite(secondLightGreen, HIGH);
  digitalWrite(secondLightYellow, LOW);
  digitalWrite(secondLightRed, LOW);
}
// the loop function runs over and over again forever
void loop()
{

  if (testMode)
  {
    runLightsTestPattern();
  }
  else
  {
      greenLightsOnParttern();
      delay(500);
      yellowLightsOnParttern();
      delay(500);
      redLightsOnParttern();
      delay(500);
      allLightsOffPattern();
      delay(1000);
      allLightsOnPattern();
      delay(1000);
      allLightsOffPattern();
      delay(1000);
      allLightsOnPattern();
      delay(1000);

    }
  }
}