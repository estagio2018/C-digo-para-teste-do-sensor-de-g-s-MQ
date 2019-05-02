 #define MQ 13
 unsigned long tempAnt = 0;
 unsigned long tempAtual;

 void setup(){
   pinMode(MQ, OUTPUT);
   digitalWrite(MQ, HIGH);
 }

//Função Alto
 void Alto(){
  tempAtual = millis();
   if(tempAtual - tempAnt > 6000 && digitalRead(MQ) == HIGH){
     digitalWrite(MQ, LOW);
     tempAnt = tempAtual;
   }
 }

//Função Baixo 
 void Baixo(){
    if(tempAtual - tempAnt >9000 && digitalRead(MQ) == LOW){
     digitalWrite(MQ, HIGH); tempAnt = tempAtual;
     }
 }
    
 void loop(){
    Alto(); 
    Baixo(); 
 }
