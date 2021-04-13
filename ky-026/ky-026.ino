int led = 2;
int digital = 3;
int analog = A0;
int digital_okuma;  
int analog_okuma; 

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(digital, INPUT);
  //pinMode(analog, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digital_okuma = digitalRead(digital); 
  if(digital_okuma == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }

  analog_okuma = analogRead(analog); 
  Serial.println(analog_okuma);

  delay(100);
}
