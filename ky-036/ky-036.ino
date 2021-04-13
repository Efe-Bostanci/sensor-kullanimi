const int led_pin =  2;
const int touchPin = 7;

int touch;

unsigned long lastEvent = 0;
boolean led = 0;
 
void setup() 
{
  pinMode(led_pin, OUTPUT);
  pinMode(touchPin, INPUT);
}
 
void loop()
{
  touch = digitalRead(touchPin);
 
  if (touch == HIGH) 
  {
    if (millis() - lastEvent > 50) 
    {
      led = !led;
      digitalWrite(led_pin, led ? HIGH : LOW);
    }
 
    lastEvent = millis();
  }
}
