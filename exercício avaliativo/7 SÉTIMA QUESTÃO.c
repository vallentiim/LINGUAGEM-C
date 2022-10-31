const int R = 9;   
const int G = 10;  
const int B = 11;  

void setup(){
	
    pinMode(R, OUTPUT); 
    pinMode(G, OUTPUT); 
    pinMode(B, OUTPUT); 
    
}

void loop(){

    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(1000);

    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    delay(1000);

    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    delay(1000);
}
