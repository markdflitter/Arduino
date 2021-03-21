void setup()
{
  Serial.begin (9600);
}


void loop()
{

 int val0 = analogRead(A0);
 String s0 (val0);
 
 int val1 = analogRead(A1);
 String s1 (val1);
 
 int val2 = analogRead(A2);
 String s2 (val2);
 
 int val3 = analogRead(A3);
 String s3 (val3);
 
 delay (10000);

 Serial.print ("0 - ");
 Serial.println (s0.c_str ());
 
 Serial.print ("1 - ");
 Serial.println (s1.c_str ());

 Serial.print ("2 - ");
 Serial.println (s2.c_str ());

 Serial.print ("3 - ");
 Serial.println (s3.c_str ());
}
