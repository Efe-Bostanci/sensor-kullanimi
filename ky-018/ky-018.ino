int sensor = A2;
int deger = 0; 

void setup() 
{
  Serial.begin(9600); 
} 

void loop() 
{
  deger = analogRead(sensor); 
  Serial.println(deger, DEC);
  delay(100); 
}
