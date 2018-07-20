//  音を出してみる

int BEAT = 300;

void setup(){
  pinMode(3,OUTPUT); 
}
  
void loop(){
  
  tone(3,262,BEAT);
  delay(BEAT);
  tone(3,294,BEAT);
  delay(BEAT);
  tone(3,330,BEAT);
  delay(BEAT);
  tone(3,349,BEAT);
  delay(BEAT);
  tone(3,392,BEAT);
  delay(BEAT);
  tone(3,440,BEAT);
  delay(BEAT);
  tone(3,494,BEAT);
  delay(BEAT);
  tone(3,523,BEAT);
  delay(BEAT);
  
  delay(3000);
  
}
