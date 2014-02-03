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

  // initalize the  readyInput, conversionStart, and busyPin pins:
  pinMode(readInputPin, OUTPUT);
  pinMode(conversionStart, OUTPUT);
  pinMode(busyPin, INPUT);

  // give the sensor time to set up:
  delay(100);
  
  delay(1000);
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
  
  digitalWrite(readInputPin, LOW);
  byte response = SPI.transfer(0x80);
  digitalWrite(readInputPin, HIGH);
  digitalWrite(conversionStart, HIGH);
  delay(10);
  if(digitalRead(busyPin)==HIGH)
  {
    Serial.print("Busy HIGH\n");
  }
  else
  {
    Serial.print("Busy LOW\n");
  }
  digitalWrite(conversionStart, LOW);
  Serial.println(response);
  
 /* 
  digitalWrite(conversionStart, LOW);
  digitalWrite(readInputPin, HIGH);
  Serial.print("Con: LOW   RD: HIGH\t");
  delay(1000);
  if(digitalRead(busyPin)==HIGH)
  {
    Serial.print("Busy HIGH\n");
  }
  else
  {
    Serial.print("Busy LOW\n");
  }

  delay(1000);
  digitalWrite(conversionStart, HIGH);
  digitalWrite(readInputPin, LOW);
  Serial.print("Con: HIGH   RD: LOW\t");
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
}

void initializeADC()
{
  byte dataToSend;
}

