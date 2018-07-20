// マイコン入門

const int THRESHOLD = 100;  //  アナログの閾値
boolean flag = false;	// 点灯フラグ
boolean pushed = false;   //  押されたフラグ

void setup(){
  //  おまじない
  pinMode(6,OUTPUT);
  pinMode(2,OUTPUT);  
}

void loop(){
  //  可変抵抗によるLEDのPWM制御
  int val = analogRead(1);
  analogWrite(6,val/2);
  
  //  スイッチによるLEDの点灯制御
  int val2 = analogRead(5);
  if( val2 < THRESHOLD){  //  スイッチが押されているとき
    pushed = true;    //  押したフラグを立てる
  }else{                  //  スイッチが押されていないとき
    if( pushed ){
      /* 現在押されておらず、押された履歴がある 
         つまりここは離したタイミングのみ実行する
      */
      pushed = false;    //  押したフラグを消す  
      flag = !flag;      //  点灯の切り替え
    }
    digitalWrite(2,HIGH); 
  }
  
  //  点灯フラグによって点灯・消灯を切り替える
  if( flag ) digitalWrite(2,HIGH);
  else digitalWrite(2,LOW);
  
  delay(100);
}
