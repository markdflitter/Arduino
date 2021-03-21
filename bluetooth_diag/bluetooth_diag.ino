#include <SoftwareSerial.h> 
SoftwareSerial stavros(2, 3); // RX | TX 

void setup()
{
  Serial.begin (9600);
  stavros.begin(38400); // Default communication rate of the Bluetooth module
}


void loop()
{
  if(stavros.available() > 0)
  {
    char c = stavros.read();
    Serial.write (c);
  }
  if(Serial.available() > 0)
  {
    char c = Serial.read();
    stavros.write (c);
    Serial.write (c);
  }
}
