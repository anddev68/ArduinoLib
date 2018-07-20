//  放電キーボード（仮）
//  Visual C#と連携する


int BEAT = 300;

void setup(){
  pinMode(3,OUTPUT); 
 
     //おまじない
  DDRD  |=  B00001000;                             // PD3 (OC2B) (Arduino D3)
  TCCR2A = _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);  // 8bit高速PWM
  TCCR2B = _BV(CS20);  
 
  Serial.begin(9600);
}
  
void loop(){
  
  /* Windowsからの通信を読み取る */
  if( Serial.available() > 0){
    char var = Serial.read();
    
    switch( var ){
    case 0: tone(3,262,BEAT); break;  //  ド
    case 1: tone(3,294,BEAT); break;  //  レ
    case 2: tone(3,330,BEAT); break;
    case 3: tone(3,349,BEAT); break;
    case 4: tone(3,392,BEAT); break;
    case 5: tone(3,440,BEAT); break;
    case 6: tone(3,494,BEAT); break;
    case 7: tone(3,523,BEAT); break;  //  ド
    default:
      Serial.println("信号が読み取れません");
    }
  }
 
  delay(1);
  
}
