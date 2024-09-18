#include<Servo.h>
Servo luci;
void setup()
{
  pinMode(6,INPUT);
  luci.attach(8);
}

void loop()
{
  int t=digitalRead(6);
  if(t==1)
  {
   for (int i=0;i<=180;i++)
   {
     luci.write(i);
     delay(10);
   }
    for (int i=180;i>=0;i--)
    {
      luci.write(1);
      delay(10);
    }
  }
  else
  { luci.write(0);}
}