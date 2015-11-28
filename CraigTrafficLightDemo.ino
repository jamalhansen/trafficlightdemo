/*
  Traffic Light Demo
*/

// First light
int firstLightGreen = 3;
int firstLightYellow = 4;
int firstLightRed = 5;

// the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(firstLightGreen, OUTPUT);
  pinMode(firstLightYellow, OUTPUT);
  pinMode(firstLightRed, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(firstLightGreen, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(firstLightGreen, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
  
  digitalWrite(firstLightYellow, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(firstLightYellow, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
  
  digitalWrite(firstLightRed, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(firstLightRed, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second  
}
