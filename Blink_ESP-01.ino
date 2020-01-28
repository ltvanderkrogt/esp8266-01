/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// #define LED_BUILTIN 1
#define LED_RED 12  // LED Red 
#define LED_GREEN 13  // LED Green
#define LED_BLUE 15  // LED Blue
#define LED_BUILTIN 1  // LED Blue on board ESP8266-01
// #define LED_BUILTIN 2  // LED Blue on board ESP8266-01

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
//  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(LED_RED, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(LED_GREEN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(LED_BLUE, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  
}

// the loop function runs over and over again forever
void loop() {
   digitalWrite(LED_BUILTIN, HIGH);  // turn on LED with voltage HIGH
  delay(1000);                      // wait one second
 digitalWrite(LED_BUILTIN, LOW);   // turn off LED with voltage LOW
  delay(1000);                      // wait one second
 
//  digitalWrite(LED_GREEN, HIGH);  // turn on LED with voltage HIGH
//  delay(1000);                      // wait one second
//  digitalWrite(LED_GREEN, LOW);   // turn off LED with voltage LOW
//  delay(1000);                      // wait one second
//   digitalWrite(LED_BLUE, HIGH);  // turn on LED with voltage HIGH
//  delay(1000);                      // wait one second
//  digitalWrite(LED_BLUE, LOW);   // turn off LED with voltage LOW
//  delay(1000);                      // wait one second
//   digitalWrite(LED_RED, HIGH);  // turn on LED with voltage HIGH
//  delay(1000);                      // wait one second
//  digitalWrite(LED_RED, LOW);   // turn off LED with voltage LOW
//  delay(1000);                      // wait one second 
}
