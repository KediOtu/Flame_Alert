#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10, 11); // RX, TX
String text;
String text2;
int digitalPin = 2; 
int digitalVal; 
int Data;

void setup(){ 
  pinMode(digitalPin, INPUT);
  Serial.begin(9600);
  BTSerial.begin(9600);
}
void loop(){ 

  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // Eğer Alev tespit edilirse
  {
    text="*y !!FIRE ALERT!! *";
    text2="*S ses*";
    BTSerial.print(text);
    BTSerial.print(text2);
  }
  else
  {
    text="*y ..all is good.. *";
    BTSerial.print(text);
  }
  delay(500);  
}