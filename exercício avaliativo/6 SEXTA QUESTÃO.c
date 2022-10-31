#include "Servo.h" 
 
Servo meuservo; 
int angulo = 0; 
 
void setup() {
meuservo.attach(9);
}
void loop() { 
for (angulo = 0; angulo < 90; angulo += 1) { 
meuservo.write(angulo); 
delay(15); 
}
 
delay(9000); // 
for (angulo = 90; angulo >= 1; angulo -= 5) { 
meuservo.write(angulo); 
delay(5);
}
 
delay(9000); 
}  
