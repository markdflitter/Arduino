
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);

  digitalWrite (3, LOW);
}


void loop()
{
  int c = digitalRead (2);
  if (c == HIGH)
  {
    digitalWrite (3, HIGH);
  }
  else
  {
    digitalWrite (3,LOW);
  }
}
