void setup()
{
 pinMode(A0,INPUT);
 Serial.begin(9600); 
}

void loop()
{
 int val = analogRead(A0); 
 int vol = (5./1022.)*val;
 Serial.print("The volume is: ");
 Serial.println(vol);
 delay(250);
}