void setup(){
 pinMode(0,INPUT); 
Serial.begin(9600); 
}

void loop(){
 int val = analogRead(0);
 Serial.println(val); 
 delay(1000);
  
}
