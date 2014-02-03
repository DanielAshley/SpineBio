/*
Created By: Daniel Ashley

Arduino code to read SPI data from ADC and send to the serial port to the PC
*/

//#include <SPI.h>

const int pinCLK = 13;
const int pinDataIn = 12;
const int pinDataOut = 11;
const int pinCS = 10;

const int busyPin = 7;
const int readInputPin = 8; // Try pin 4
const int conversionStart = 9;


void setup() {
  Serial.begin(9600);

  // start the SPI library:
 // SPI.begin();
  delay(100);
 // SPI.setBitOrder(MSBFIRST);
 // SPI.setDataMode(SPI_MODE0);
  

  // initalize the  readyInput, conversionStart, and busyPin pins:
  pinMode(readInputPin, OUTPUT);
  pinMode(conversionStart, OUTPUT);
  pinMode(busyPin, INPUT);
  pinMode(pinDataOut, OUTPUT);
  pinMode(pinDataIn, INPUT);
  pinMode(pinCLK, OUTPUT);
  pinMode(pinCS, OUTPUT);
  
  digitalWrite(pinCLK, LOW);
  digitalWrite(pinCS, HIGH);

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
  digitalWrite(pinCLK, LOW);
  digitalWrite(pinCS, LOW);
  shiftOut(pinDataOut, pinCLK, MSBFIRST, 0x80);
  shiftOut(pinDataOut, pinCLK, MSBFIRST, 0x80);
  digitalWrite(pinCS, HIGH);
  if(digitalRead(busyPin)==HIGH)
  {
    Serial.print("Busy HIGH\t");
  }
  else
  {
    Serial.print("Busy LOW\t");
  }
  while(digitalRead(busyPin)==LOW){}
  
  delay(100);
  
  digitalWrite(pinCLK, LOW);
  digitalWrite(pinCS, LOW);
  byte incoming = shiftIn(pinDataIn, pinCLK, MSBFIRST);
  byte incoming2 = shiftIn(pinDataIn, pinCLK, MSBFIRST);
  digitalWrite(pinCS, HIGH);
  
  Serial.print(incoming);
  Serial.print("\t");
  Serial.println(incoming2);
}

