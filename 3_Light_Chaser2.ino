/*
  Blink (Light Chaser 2)
  Turns on LED one at a time, on for 200 ms, then off for 200 ms using an integer to set delay for each LED
  Turns LEDs from LED 1 to LED 4, and then reverses from LED to 4-1 repeatedly
  Use pinMode to set pins as outputs, and use digital write to set state of outputs (LEDs)
  State of LED can either be High having LED on or low having the LED off
*/

int wait_time= 200; // set value for delay
  
// the setup function runs once when you press reset or power the board
void setup() { 
  pinMode(10, OUTPUT); // setting pin 10 as output (LED 1)
  pinMode(11, OUTPUT); // setting pin 11 as output (LED 2)
  pinMode(12, OUTPUT); // setting pin 12 as output (LED 3)
  pinMode(13, OUTPUT); // setting pin 13 as output (LED 4)
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(10, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(wait_time); // wait time
  digitalWrite(10, LOW); // turn the LED off by making the voltage LOW
  delay(wait_time); // wait time
  digitalWrite(11, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(wait_time); // wait time
  digitalWrite(11, LOW); // turn the LED off by making the voltage LOW
  delay(wait_time); // wait time
  digitalWrite(12, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(wait_time); // wait time
  digitalWrite(12, LOW); // turn the LED off by making the voltage LOW
  delay(wait_time); // wait time
  digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(wait_time); // wait time
  digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
  delay(wait_time); // wait time
  digitalWrite(12, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(wait_time); // wait time
  digitalWrite(12, LOW); // turn the LED off by making the voltage LOW
  delay(wait_time); // wait time
  digitalWrite(11, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(wait_time); // wait time
  digitalWrite(11, LOW); // turn the LED off by making the voltage LOW
  delay(wait_time); // wait time
}