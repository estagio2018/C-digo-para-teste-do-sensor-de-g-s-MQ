int Gassensor = 1; //define the 1th digital pin for gss sensor brick
int Buzzer = 8; //define the 8th digital pin for buzzer brick
void setup()
{
pinMode(Buzzer,OUTPUT); //set the LED pin for digital output
}
void loop()
{
int val=0;
val=analogRead(Gassensor); //Read the gas sensor for gas density
if (val>0x300) // if gas dense
{
digitalWrite(Buzzer,HIGH); // ring the Buzzer for alarm
}
else
{
digitalWrite(Buzzer,LOW); // turn off the buzzer
}
}
