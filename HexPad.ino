int r1 = 9;
int r2 = 8;
int r3 = 7;
int r4 = 6;
int c1 = 5;
int c2 = 4;
int c3 = 3;
int c4 = 2;

int colm1;
int colm2;
int colm3;
int colm4;

int green = 12;
int red = 13;

String code;
String userCode;

void setup() {
  // put your setup code here, to run once:
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(c1,INPUT);
  pinMode(c2,INPUT);
  pinMode(c3,INPUT);
  pinMode(c4,INPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
  digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c4,HIGH);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(green, HIGH);
  //digitalWrite(red, HIGH);

  code = "";
  userCode = "";

 Serial.println("Enter valid code");
  while(Serial.available()==0) {}
  code = Serial.readString();
  Serial.println("you code is: " + code);

  while(!userCode.equals(code)) {
  
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  colm1=digitalRead(c1);
  colm2=digitalRead(c2);
  colm3=digitalRead(c3);
  colm4=digitalRead(c4);
  if(colm1==LOW)
  {Serial.println("1" + userCode);
   userCode += "1";
   delay(200);}
  else
  {
   if(colm2==LOW)
   {Serial.println("2" + userCode);
    userCode += "2";
    delay(200);}
   else
   {
   if(colm3==LOW)
   {Serial.println("3" + userCode);
        userCode += "3";
     delay(200);}
   else
   {
   if(colm4==LOW)
   {Serial.println("A" + userCode);
        userCode += "4";
      delay(200);}
   }}}

  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  colm1=digitalRead(c1);
  colm2=digitalRead(c2);
  colm3=digitalRead(c3);
  colm4=digitalRead(c4);
  if(colm1==LOW)
  {Serial.println("4" + userCode);
        userCode += "4";
    delay(200);}
  else
  {
   if(colm2==LOW)
   {Serial.println("5" + userCode);
        userCode += "5";
    delay(200);}
   else
   {
   if(colm3==LOW)
   {Serial.println("6" + userCode);
        userCode += "6";
      delay(200);}
   else
   {
   if(colm4==LOW)
   {Serial.println("B" + userCode);
        userCode += "B";
       delay(200);}
   }}}

  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,HIGH);
  colm1=digitalRead(c1);
  colm2=digitalRead(c2);
  colm3=digitalRead(c3);
  colm4=digitalRead(c4);
  if(colm1==LOW)
  {Serial.println("7" + userCode);
    userCode += "7";
     delay(200);}
  else
  {
   if(colm2==LOW)
   {Serial.println("8" + userCode);
    userCode += "8";
       delay(200);}
   else
   {
   if(colm3==LOW)
   {Serial.println("9" + userCode);
    userCode += "9";
        delay(200);}
   else
   {
   if(colm4==LOW)
   {Serial.println("C" + userCode);
    userCode += "C";
        delay(200);}
   }}}
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  colm1=digitalRead(c1);
  colm2=digitalRead(c2);
  colm3=digitalRead(c3);
  colm4=digitalRead(c4);
  if(colm1==LOW)
  {Serial.println("*" + userCode);
    userCode += "*";
      delay(200);}
  else
  {
   if(colm2==LOW)
   {Serial.println("0" + userCode);
    userCode += "0";
        delay(200);}
   else
   {
   if(colm3==LOW)
   {Serial.println(userCode);
    userCode = "";
      delay(200);}
   else
   {
   if(colm4==LOW)
   {Serial.println("D" + userCode);
    userCode += "D";
       delay(200);}

   }}}
   digitalWrite(red, HIGH);
   digitalWrite(green, LOW);
   //userCode = "";
}
digitalWrite(red, LOW);
digitalWrite(green, HIGH);
  }
