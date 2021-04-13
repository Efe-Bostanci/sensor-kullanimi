int led = 3;
int sensor = 2;
int deger;

void setup () {
  Serial.begin(9600);
  pinMode (led, OUTPUT);
  pinMode (sensor, INPUT);
}

void loop () 
{
  deger = digitalRead (sensor);
  Serial.println(deger);

  if (deger == HIGH )
  {
    digitalWrite(led, LOW);
  } 
  else
  {
    digitalWrite (led, HIGH);
  }

}
