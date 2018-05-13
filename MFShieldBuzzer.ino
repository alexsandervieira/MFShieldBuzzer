#define BUZZER_DIO 3
#define BTN_1 A1
#define BTN_2 A2
#define BTN_3 A3

//Estados para Buzzer
#define OFF HIGH
#define ON LOW

void setup() {
  pinMode(BUZZER_DIO, OUTPUT);
}

void barulinhos(int timeSound, int timePause) {
  digitalWrite(BUZZER_DIO, ON);
  delay(timeSound);
  digitalWrite(BUZZER_DIO, OFF);
  delay(timePause);
}

void loop() {
  digitalWrite(BUZZER_DIO, OFF);
  
  if(!digitalRead(BTN_1)) {
    barulinhos(15,15);
  }
  
  if(!digitalRead(BTN_2)) {
    barulinhos(30,30);
  }
  
  if(!digitalRead(BTN_3)) {
    barulinhos(60,60);
  }
}
