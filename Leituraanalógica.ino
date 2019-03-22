const int MQ_PIN = A0;
const int MQ_DELAY = 30000;

void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  int analog = analogRead(MQ_PIN);
  float VRL = analog * (5.0 / 1023.0);
  float Rs = (5.0 - VRL) / VRL; 
  Serial.print("analog:");
  Serial.print(analog);
  Serial.print("    VRL:");
  Serial.print(VRL);
   Serial.print("V");
  Serial.print("    Rs:");
  Serial.print(Rs);
  Serial.println("kΩ");
  delay(MQ_DELAY);
}
