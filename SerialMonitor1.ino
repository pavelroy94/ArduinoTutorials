int RedLED = 9;
int YellowLED = 10;
int RedONtime = 250;
int RedOFFtime = 250;
int YellowONtime = 250;
int YellowOFFtime = 250;
int numYellowBlinks;
int numRedBlinks;
String RedMessage="The Red LED is blinking!";
String YellowMessage="The Yellow LED is blinking!";


void setup()
{
  Serial.begin(9600);
  String wm1="Welcome to ";
  String wm2="my program";
  String wm3=wm1+wm2;
  
  Serial.println(wm3);
  pinMode(RedLED,OUTPUT);
  pinMode(YellowLED,OUTPUT);
  
  
  Serial.println("How many times do you want the RED LED to blink? ");
  while(Serial.available()==0){}//Waiting for input from user
  numRedBlinks=Serial.parseInt();  
    
  Serial.println("How many times do you want the YELLOW LED to blink? ");
  while(Serial.available()==0){}//Waiting for input from user
  numYellowBlinks=Serial.parseInt(); 
}

void loop()
{
  Serial.println(" ");
  Serial.println(RedMessage);
  for (int j=1; j<=numRedBlinks; j++)
  {
    Serial.print("  You are on Blink #:  ");
    Serial.println(j);
    digitalWrite(RedLED,HIGH);
    delay(RedONtime);
    digitalWrite(RedLED,LOW);
    delay(RedOFFtime);
  }

  Serial.println(" ");
 
  Serial.println(YellowMessage);
  for (int j=1; j<=numYellowBlinks; j++)
  {
    Serial.print("   You are on Blink #:   ");
    Serial.println(j);
    digitalWrite(YellowLED,HIGH);
    delay(YellowONtime);
    digitalWrite(YellowLED,LOW);
    delay(YellowOFFtime);
  }
  
}
