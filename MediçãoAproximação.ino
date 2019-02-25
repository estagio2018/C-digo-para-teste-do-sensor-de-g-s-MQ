void setup () {
    Serial.begin (9600);
}

void loop () {
    float sensor_volt;
    float RS_air; // Obtém o valor de RS via em um ar claro
    flutuar R0; // Obtém o valor de R0 via in H2
    float sensorValue;

        / * --- Obter uma média de dados testando 100 vezes --- * /
    para (int x = 0; x <100; x ++)
    {
        sensorValue = sensorValue + analogRead (A0);
    }
    sensorValue = sensorValue / 100.0;
        / * ----------------------------------------------- * /

    sensor_volt = sensorValue / 1024 * 5,0;
    RS_air = (5,0-sensor_volt) / sensor_volt; // omitir * RL
    R0 = RS_air / 6,5; // A relação RS / R0 é 6,5 em um ar limpo do Graph (encontrado usando o WebPlotDigitizer)

    Serial.print ("sensor_volt =");
    Serial.print (sensor_volt);
    Serial.println ("V");

    Serial.print ("R0 =");
    Serial.println (R0);
    delay (1000);
}
