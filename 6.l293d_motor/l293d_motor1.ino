// C++ code
//
void setup()
{
  pinMode(8,OUTPUT);  
  pinMode(7,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(8, HIGH); 
  digitalWrite(7, LOW);
  delay(2000);  
  Serial.println("clockwise");

  digitalWrite(7, HIGH); 
  digitalWrite(8, LOW);
  delay(2000);
  Serial.println("anticlockwise");
}