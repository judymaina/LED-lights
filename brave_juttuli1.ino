// C++ code
//
int red = 10;
int yellow =11;
int green =8; 
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  digitalWrite(yellow,LOW); 
  digitalWrite(green, LOW);
  delay(9000);
  
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  delay(5000);
  
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(9000);
 
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  delay(5000);
}