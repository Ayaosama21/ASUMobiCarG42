int LED1=4;
int LED2=5;
int LED3=6;
int LED4=7;
void setup(){
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}
void loop(){
  digitalWrite(LED1,HIGH);
  delay(500);
  digitalWrite(LED1,LOW);
  delay(500*4);
  digitalWrite(LED2,HIGH);
  delay(500);
  digitalWrite(LED2,LOW);
  delay(500*4);
  digitalWrite(LED3,HIGH);
  delay(500);
  digitalWrite(LED3,LOW);
  delay(500*4);
  digitalWrite(LED4,HIGH);
  delay(500);
  digitalWrite(LED4,LOW);
  delay(500*4);
  digitalWrite(LED3,HIGH);
  delay(500);
  digitalWrite(LED3,LOW);
  delay(500*4);
  digitalWrite(LED2,HIGH);
  delay(500);
  digitalWrite(LED2,LOW);
  delay(500*4);
  
}

