int k = 5;
int m = 7;
int y = 6;

void setup()
{
  pinMode(k, OUTPUT);
  pinMode(m, OUTPUT);
  pinMode(y, OUTPUT);
}

void loop()
{
  digitalWrite(m, HIGH);
  delay(700);
  digitalWrite(m, LOW);
  digitalWrite(y, HIGH);
  delay(700);
  digitalWrite(y, LOW);
  digitalWrite(k, HIGH);
  delay(700);
  digitalWrite(k, LOW);
}
