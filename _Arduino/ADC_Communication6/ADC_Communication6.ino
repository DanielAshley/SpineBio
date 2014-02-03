#define SELPIN 10 //Selection Pin  -  CS
#define DATAOUT 11//MOSI 
#define DATAIN  12//MISO 
#define SPICLOCK  13//Clock 
#define CONVERT 9
int readvalue; 
int count;
int initialized;

void setup(){ 
 //set pin modes 
 pinMode(SELPIN, OUTPUT); 
 pinMode(DATAOUT, OUTPUT); 
 pinMode(DATAIN, INPUT); 
 pinMode(SPICLOCK, OUTPUT);
 pinMode(CONVERT, OUTPUT); 
 //disable device to start with 
 digitalWrite(SELPIN,HIGH); 
 digitalWrite(DATAOUT,LOW); 
 digitalWrite(SPICLOCK,LOW); 
 digitalWrite(CONVERT,LOW); 

 count = 0;
 initialized = 0;
 Serial.begin(9600); 
} 

int init_adc()
{
  char commandbits = 0x80; //command bits - Sets to read channel 0 of the ADC
  digitalWrite(SELPIN,LOW); //Select adc
  for (int i=5; i>=0; i--){
    int binaryVal = ((commandbits>>i)&1);
    //Serial.println(binaryVal);
    digitalWrite(DATAOUT,((commandbits>>i)&1));
    
    //cycle clock
    digitalWrite(SPICLOCK,HIGH);
    digitalWrite(SPICLOCK,LOW);    
  }
  digitalWrite(SELPIN, HIGH); //turn off device
  
  digitalWrite(CONVERT,HIGH);
  delay(1); 
  digitalWrite(CONVERT,LOW);
  initialized = 1;
  
}

int read_adc(){
  int adcvalue = 0;
  int commandbits = 0x8000; //command bits - Sets to read channel 0 of the ADC
  boolean inVal;  
    
  //digitalWrite(CONVERT,LOW);
  //delay(1); 
  digitalWrite(SELPIN,LOW); //Select adc
  // setup bits to be written
  for (int i=15; i>=0; i--){
    int binaryVal = ((commandbits>>i)&1);
    //Serial.println(binaryVal);
    digitalWrite(DATAOUT,((commandbits>>i)&1));
    
    //cycle clock
    digitalWrite(SPICLOCK,HIGH);
    inVal = digitalRead(DATAIN);
    Serial.println(inVal);
    adcvalue+=inVal;
    adcvalue = adcvalue << 1;
    digitalWrite(SPICLOCK,LOW);    
  }  
  adcvalue = adcvalue >> 1;
  digitalWrite(SELPIN, HIGH); //turn off device
  Serial.println(' ');
  //digitalWrite(CONVERT,HIGH); 
  return adcvalue;  
}

void loop() {
 /*while(count <10)
 {
   count++;
   Serial.println(digitalRead(DATAIN)); 
 }*/
 if(!initialized)
   init_adc();
 readvalue = read_adc(); 
 Serial.println(readvalue,DEC); 
 Serial.println(" ");
 digitalWrite(CONVERT,HIGH);
 delay(1); 
 digitalWrite(CONVERT,LOW);
 
 delay(250); 
} 
