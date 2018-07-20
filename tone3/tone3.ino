//  音を出してみる

int BEAT = 300;

void setup(){
  pinMode(3,OUTPUT); 

  //おまじない
  DDRD  |=  B00001000;                             // PD3 (OC2B) (Arduino D3)
  TCCR2A = _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);  // 8bit高速PWM
  TCCR2B = _BV(CS20);  

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
  
  delay(1);
  
}
