void setup () {
    Serial.begin (9600);
}

void loop () {

    float sensor_volt;
    float RS_gas; // Obter valor de RS em um GAS
    relação de flutuação; // Obter relação RS_GAS / RS_air
    int sensorValue = analogRead (A0);
    sensor_volt = (float) sensorValue / 1024 * 5,0;
    RS_gas = (5,0-sensor_volt) / sensor_volt; // omitir * RL

          / * - Substitua o nome "R0" pelo valor de R0 na demonstração do primeiro teste - * /
    proporção = RS_gas / R0; // ratio = RS / R0
          / * ------------------------------------------------ ----------------------- * /

    Serial.print ("sensor_volt =");
    Serial.println (sensor_volt);
    Serial.print ("RS_ratio =");
    Serial.println (RS_gas);
    Serial.print ("Rs / R0 =");
    Serial.println (proporção);

    Serial.print ("\ n \ n");

   delay (1000);

}
