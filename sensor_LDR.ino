const int pino_sensor = A0;
const int pino_led = 7;
const int luz_ambiente = 100;

void setup(){
  
  pinMode(pino_sensor, INPUT);
  pinMode(pino_led, OUTPUT);
  Serial.begin(9600);

}

void loop(){

  int leitura_LDR = analogRead(pino_sensor);
  Serial.print("Luminosidade: ");
  Serial.println(leitura_LDR);

  if (leitura_LDR <= luz_ambiente){

    digitalWrite(pino_led, HIGH);
    
  }
  else{
    
    digitalWrite(pino_led, LOW);
    
  }


}
