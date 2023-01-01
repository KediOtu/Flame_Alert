#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10, 11); // RX, TX
String text;
String text2;
int digitalPin = 2; //flame sensor digital pin
int digitalVal; 
int Data;

void setup(){ 
  pinMode(digitalPin, INPUT);
  Serial.begin(9600);
  BTSerial.begin(9600);
}
void loop(){ 

  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // if flame is detected
  {
    text="*y !!FIRE ALERT!! *";
    text2="*S ses*";
    BTSerial.print(text); //we send the text via bluetooth
    BTSerial.print(text2);
  }
  else
  {
    text="*y ..all is good.. *";
    BTSerial.print(text);
  }
  delay(500);  
}
