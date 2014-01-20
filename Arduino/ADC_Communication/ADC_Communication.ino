/*
Created By: Daniel Ashley

Arduino code to read SPI data from ADC and send to the serial port to the PC
*/

#include <SPI.h>

const int busyPin = 5;
const int readInputPin = 6;
const int conversionStart = 7;


void setup() {
  Serial.begin(9600);

  // start the SPI library:
  SPI.begin();

  // initalize the  readyInput, conversionStart, and busyPin pins:
  pinMode(readInputPin, OUTPUT);
  pinMode(conversionStart, OUTPUT);
  pinMode(busyPin, INPUT);

  // give the sensor time to set up:
  delay(100);
}


void loop() 
{
}

void initializeADC()
{
  byte dataToSend;
}

