#include <Servo.h>
Servo luci;
void setup()
{
  luci.attach(7);
  
}

void loop()
{
  for (int i=0;i<=180;i++)
  {
    luci.write(i);
    delay(30);
  }
  for (int i=180;i>=0;i--)
  {
    luci.write(i);
    delay(30);
  }
}