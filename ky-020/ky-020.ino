int tiltPin = 2;
int ledPin =  3; 
int deger = 0;

void setup() 
{  
  pinMode(ledPin, OUTPUT);      
  pinMode(tiltPin, INPUT);
}

void loop()
{
  deger = digitalRead(tiltPin);

  if (deger == HIGH) 
  {     
    digitalWrite(ledPin, HIGH);  
  } 
  
  else 
  {
    digitalWrite(ledPin, LOW); 
  }
}
