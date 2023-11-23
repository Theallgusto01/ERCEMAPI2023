#include <ultrasonic.h>

#define pino_trigger D4
#define pino_echo D5

//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);

void setup()
{
Serial.begin(9600);
Serial.println("Lendo dados do sensor…");
}

void loop()
{
//Le as informacoes do sensor, em cm e pol
float cmMsec, inMsec;
cmMsec = ultrasonic.distanceRead(CM);
inMsec = ultrasonic.distanceRead(INC);

//Exibe informacoes no serial monitor
Serial.print("Distancia em cm: ");
Serial.print(cmMsec);
Serial.print("– Distancia em polegadas: ");
Serial.println(inMsec);
delay(1000);
}