int clearPin = 5; // Clear/Reset
int serialData = 6; //Serial Input
int shiftClock = 7; //Shift Clock
int latchClock = 8; //Latch/Storage Clock
int Val1[8] = {1,2,4,8,16,32,64,128}; 

void setup()
{
  pinMode(clearPin,OUTPUT);
  pinMode(serialData,OUTPUT);
  pinMode(shiftClock,OUTPUT);
  pinMode(latchClock,OUTPUT);
  
  digitalWrite(clearPin,LOW);
  digitalWrite(clearPin,HIGH);
  Serial.begin(9600);
}

void loop()
{
  //This is my first looop. LEDs blink Left to Right
  for (int j=0; j<=7; j++)
  {
  for (int shiftCount=Val1[j]; shiftCount<=Val1[j]; shiftCount=shiftCount+1)
  {
   digitalWrite(latchClock,LOW); 
   shiftOut(serialData, shiftClock, MSBFIRST, shiftCount);
   digitalWrite(latchClock, HIGH);
   delay(500);
  }
 }
  
  //This is my second loop. LEDs move right to left
  for (int j=0; j<=7; j++)
  {
  for (int shiftCount=Val1[j]; shiftCount<=Val1[j]; shiftCount=shiftCount+1)
  {
   digitalWrite(latchClock,LOW); 
   shiftOut(serialData, shiftClock, LSBFIRST, shiftCount);
   digitalWrite(latchClock, HIGH);
   delay(500);
  }
 }
  
}