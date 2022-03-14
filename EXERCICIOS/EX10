const int led1 = 5;
const int led2 = 6;
const int led3 = 7;
const int led4 = 8;
const int led5 = 9;
const int led6 = 10;
const int led7 = 11;
const int led8 = 12;
const int led9 = 13;
const int led10 = 4;
const int botao = 3;

const int port = 0;
int var = 0;
int var2 = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop()
{
  var = analogRead(port);
  Serial.println(var);
  var2 = digitalRead(botao);
  
  if (var2){
    
    
  if(var > 50){
   digitalWrite(led1,HIGH);
  }else{
  delay(200);
  digitalWrite(led1,LOW);
}
  if(var > 100){
   digitalWrite(led2,HIGH);
  }else{
  delay(200);
  digitalWrite(led2,LOW);
}
  if(var > 200){
   digitalWrite(led3,HIGH);
  }else{
  delay(200);
  digitalWrite(led3,LOW);
}
  if(var > 300){
   digitalWrite(led4,HIGH);
  }else{
  delay(200);
  digitalWrite(led4,LOW);
}
  if(var > 400){
   digitalWrite(led5,HIGH);
  }else{
   delay(200);
  digitalWrite(led5,LOW);
}
  if(var > 500){
   digitalWrite(led6,HIGH);
  }else{
  delay(200);
  digitalWrite(led6,LOW);
}
  if(var > 600){
   digitalWrite(led7,HIGH);
  }else{
    delay(200);
  digitalWrite(led7,LOW);
}
  if(var > 750){
   digitalWrite(led8,HIGH);
  }else{
  delay(200);
  digitalWrite(led8,LOW);
}
  if(var > 830){
   digitalWrite(led9,HIGH);
  }else{
  delay(200);
  digitalWrite(led9,LOW);
}
  
  if(var > 900){
   digitalWrite(led10,HIGH);
  }else{
    delay(200);
  digitalWrite(led10,LOW);

  }
  }
}
