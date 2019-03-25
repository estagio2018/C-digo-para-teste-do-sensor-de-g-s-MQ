const int MQ_PIN = A0;
const int MQ_DELAY = 10000;
int analog,i;
float VRL, Rs, Media, Soma;

void setup()
{
  Serial.begin(9600);
 
}
 
void loop()
{
  analog = analogRead(MQ_PIN);
  Media = 0;
  Soma = 0;
  for (i=0; i < 6; i++) {
    analogRead (MQ_PIN);
    Soma = Soma + analog;
    delay (MQ_DELAY);
  }
  Media = Soma/6;
  VRL = Media * (5.0 / 1023.0);
  Rs = (5.0 - VRL) / VRL; 
  Serial.print("Media: ");
  Serial.print(Media);
  Serial.print("    VRL: ");
  Serial.print(VRL);
  Serial.print("V");
  Serial.print("    Rs: ");
  Serial.print(Rs);
  Serial.println("kΩ");
}
