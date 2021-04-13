int led = 8; 
int ky021 = 3; 

void setup() 
{
  pinMode (led, OUTPUT);
  pinMode (ky021, INPUT);
}

void loop()
{
  if(digitalRead(ky021) == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  
  else 
  {
    digitalWrite(led, LOW);
  }
}
