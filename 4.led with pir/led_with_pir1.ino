// C++ code
//
void setup()
{
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int a=digitalRead(3);
  Serial.println(a);
  if(a==0)
  {
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}


