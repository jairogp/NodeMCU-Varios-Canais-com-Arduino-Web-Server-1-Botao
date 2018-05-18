
 /* Muda o estado dos canais com um
 pulso BAIXO ao APERTAR o botão*/
 
 #define ch1 18
 #define ch2 19
 #define botao1 2
 #define botao2 3
 int estado_ch1 = 0;
 int estado_ch2 = 0;

 void setup() {
   Serial.begin(9600);
   pinMode(ch1, OUTPUT);
   pinMode(ch2, OUTPUT);
   pinMode(botao1, INPUT_PULLUP);
   pinMode(botao2, INPUT_PULLUP);
   digitalWrite(ch1, HIGH);
   digitalWrite(ch2, HIGH); } 

 void Canal1() {
     Canal_01:
  if(digitalRead(botao1)== 0 && estado_ch1 == 0)
  { digitalWrite(ch1,!digitalRead(ch1));
    delay(200);
    estado_ch1 = 1;
    if(digitalRead(ch1) == 1){
    Serial.println("j");}}
  if(digitalRead(botao1) == 1 && estado_ch1 == 1)
  { delay(200);
    estado_ch1 = 0;
    if(digitalRead(ch1) == 0){
    Serial.println("J");}}
  }
     
 void Canal2() {    
     Canal_02:
  if(digitalRead(botao2)== 0 && estado_ch2 == 0)
  { digitalWrite(ch2,!digitalRead(ch2));
    delay(200);
    estado_ch2 = 1;
    if(digitalRead(ch2) == 1){
    Serial.println("k");}}
  if(digitalRead(botao2) == 1 && estado_ch2 == 1)
  { delay(200);
    estado_ch2 = 0;
    if(digitalRead(ch2) == 0){
    Serial.println("K");}
  }}

  
   
 void loop() {
   Canal1();
   Canal2();

  char caracter = Serial.read();
  if(caracter == 'A')
  {digitalWrite(ch1,LOW);}
  if(caracter == 'a')
  {digitalWrite(ch1,HIGH);}
  if(caracter == 'B')
  {digitalWrite(ch2,LOW);}
  if(caracter == 'b')
  {digitalWrite(ch2,HIGH);}
  delay(10);
   }
