

//Ligacoes de Hardware
#define Buzzer 10
#define MQ2_Analog 0
#define MQ2_Digital 2
#define SensorLevel 35
#define LCD_RS 9

int digital_read = 0;
int analog_read = 0;


void setup()
{
  // Configura os IOs
  pinMode(MQ2_Digital, INPUT);
  pinMode(Buzzer, OUTPUT);
  // Inicializa a serial
  Serial.begin(9600);
}

void loop()
{

  digital_read = digitalRead(MQ2_Digital);
  analog_read = analogRead(MQ2_Analog);
  

  //apresenta as leituras na porta serial
  Serial.print("Saida Digital:");
  Serial.println(digital_read);
  Serial.print(" Saida Analogica:");
  Serial.println(analog_read);

  if (analog_read > SensorLevel)
  {
    
    Serial.print("Ar contaminado!");
    // Aciona o Buzzer
    digitalWrite(Buzzer, HIGH);

  }
  else
  {
   
   
   Serial.print("Ar normal");
    // Desliga o buzzer e o led vermelho
    digitalWrite(Buzzer, LOW);
  }
  
  delay(2000);
}
