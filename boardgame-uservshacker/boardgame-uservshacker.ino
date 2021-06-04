


#include <Keyboard.h>
#include <Encoder.h> 
#include <Keypad.h>


int buttonPin = A0;

void setup() 
{
  Serial.begin(9600); 
  Keyboard.begin();
}

void loop() {
  int temp = analogRead(buttonPin);   
  //Serial.println(temp);             
  if (temp < 30)                     //Lower limit for first button - if below this limit then no button is pushed and LEDs are turned off
  {
   //Serial.println("no button");  
  }
  else if (temp < 50)             
  {
     activateKeybordPress(1); 
  }
  else if (temp < 70)                
  {
    activateKeybordPress(2); 
  }
  else if (temp < 85)               
  {

  activateKeybordPress(3);
     
  }
  else if (temp < 100)                
  {
      activateKeybordPress(4);
    
  }
    else if (temp < 115)                
  {
      activateKeybordPress(5); 
    
  }
    else if (temp < 136)                
  {
      activateKeybordPress(6);  
  }
    else if (temp < 160)                
  {
      activateKeybordPress(7);
  }
    else if (temp < 195)                
  {
      activateKeybordPress(8);
  }
      else if (temp < 245)                
  {
      activateKeybordPress(9); 
  }
      else if (temp < 330)                
  {
     activateKeybordPress(10); 
  }
      else if (temp < 500)                
  {
      activateKeybordPress(11); 
  }
  else                               
  {
      activateKeybordPress(12); 
    
  }
  delay(200);                         //Delay for stability
}


void activateKeybordPress(int field){
   Serial.print("er staat een pion op vak ");
   Serial.println(field);
}
