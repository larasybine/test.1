const int botao1 = 2;
const int led1 = 4;

//constantes

int var1;
int var2;
 

void setup()
{
  pinMode(botao1, INPUT);
  pinMode(led1, OUTPUT);
  //Serial.begin(9600);
}

//Esta função se repete.
void loop()
{
  var1 = digitalRead(botao1);
  
  if(var1){
    digitalWrite(led1, LOW);
   
  }else{
    digitalWrite(led1,HIGH);
  }
}
