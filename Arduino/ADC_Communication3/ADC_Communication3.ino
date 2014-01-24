/*
Created By: Daniel Ashley

Arduino code to read SPI data from ADC and send to the serial port to the PC
*/

#include <SPI.h>

const int busyPin = 7;
const int readInputPin = 8; // Try pin 4
const int conversionStart = 9;


void setup() {
  Serial.begin(9600);

  // start the SPI library:
  SPI.begin();
  delay(100);
  SPI.setBitOrder(MSBFIRST);
  SPI.setDataMode(SPI_MODE0);
  

  // initalize the  readyInput, conversionStart, and busyPin pins:
  pinMode(readInputPin, OUTPUT);
  pinMode(conversionStart, OUTPUT);
  pinMode(busyPin, INPUT);

  // give the sensor time to set up:
  delay(100);
  digitalWrite(conversionStart, LOW);
  digitalWrite(readInputPin, HIGH);
/*  Serial.print("Con: HIGH   RD: LOW\t");
  delay(1000);
  if(digitalRead(busyPin)==HIGH)
  {
    Serial.print("Busy HIGH\n");
  }
  else
  {
    Serial.print("Busy LOW\n");
  }
*/
  delay(1000);
}


void loop() 
{
  byte response = SPI.transfer(0x80);
  byte response2 = SPI.transfer(0x80);
  byte response2 = SPI.transfer(0x80);
  if(digitalRead(busyPin)==HIGH)
  {
    Serial.print("Busy HIGH\t");
  }
  else
  {
    Serial.print("Busy LOW\t");
  }
  Serial.print(response);
  Serial.print("\t");
  Serial.println(response2);
  Serial.print("\t");
  Serial.println(response3);
}

