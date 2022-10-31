#include
#define pino_trigger D4
#define pino_echo D5

Ultrasonic ultrasonic(pino_trigger, pino_echo);
void setup()
{
	
Serial.begin(115200);
Serial.println(“Lendo dados do sensor…”);

}

void loop()
{
	
float cmMsec, inMsec;
cmMsec = ultrasonic.distanceRead(CM);
inMsec = ultrasonic.distanceRead(INC);
Serial.print(“Distancia em cm: “);
Serial.print(cmMsec);
Serial.print(” – Distancia em polegadas: “);
Serial.println(inMsec);
delay(1000);

}
