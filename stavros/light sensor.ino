#include <SoftwareSerial.h> 
SoftwareSerial stavros(2, 3); // RX | TX 

int state = 0;
bool stavros_on = false;

void isStavrosOn ()
{
  if (stavros_on)
    stavros.println("STAVROS ON");
  else
    stavros.println("STAVROS OFF");
}


void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  stavros.begin(9600); // Default communication rate of the Bluetooth module

  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  
  isStavrosOn ();
}


void loop()
{
  if(stavros.available() > 0)
  {
    state = stavros.read();
  }
  
  if (state == '0')
  {
    digitalWrite(4, LOW);
    stavros_on = false;
    isStavrosOn();
  } else if (state == '1')
  {
    digitalWrite(4, HIGH);
    stavros_on = true;
    isStavrosOn();

  }
  else if (state == '2')
  {
    isStavrosOn();
  }
  else if (state == '3')
  {
    digitalWrite(5, HIGH);
    stavros.println("Pushed button");
    delay (500);
    digitalWrite(5, LOW);
    stavros.println("Released button");
  }
  
  state = 0;
}
