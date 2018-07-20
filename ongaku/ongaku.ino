 
void setup() {
 
  // PWM初期化
  DDRD  |=  B00001000;                             // PD3 (OC2B) (Arduino D3)
  TCCR2A = _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);  // 8bit高速PWM
  TCCR2B = _BV(CS20);                              // 分周なし

  Serial.begin(9600);
}

 
void loop()
{
  int val = analogRead(0) * 2;
  
  OCR2B = val;
  Serial.println(val);
  
         
}
    
    
