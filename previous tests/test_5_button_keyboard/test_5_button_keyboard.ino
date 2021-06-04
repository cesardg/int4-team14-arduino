#include <Keyboard.h>
#include <Encoder.h> 
#include <Keypad.h>


int buttonPin = A0;     //Button and LED pin numbers

void setup() 
{

  Serial.begin(9600); 
  Keyboard.begin();
}

void loop() {
  int temp = analogRead(buttonPin);   //Read the analogue input
 // Serial.println(temp);               //Display the read value in the Serial monitor
  if (temp < 100)                     //Lower limit for first button - if below this limit then no button is pushed and LEDs are turned off
  {

   // Serial.println("no button");  
  }
  else if (temp < 150)                //First button limit - if below this limit but above previous limit then the first button is pressed
  {
     //Serial.println("er staat een pion op spot 5");  
     Keyboard.press(KEY_LEFT_SHIFT);
     Keyboard.press('b'); 
     Keyboard.press('r');
     Keyboard.press('d');
     Keyboard.press('v'); 
     Keyboard.press('k'); 
     Keyboard.press('5'); 
     delay(100); 
     Keyboard.releaseAll();
  }
  else if (temp < 250)                //Second button limit
  {
     //Serial.println("er staat een pion op spot 4"); 
     Keyboard.press(KEY_LEFT_SHIFT);
     Keyboard.press('b'); 
     Keyboard.press('r');
     Keyboard.press('d');
     Keyboard.press('v'); 
     Keyboard.press('k');  
     Keyboard.press('4'); 
     delay(100); 
     Keyboard.releaseAll(); 
  }
  else if (temp < 350)                //Third button limit
  {

     //Serial.println("er staat een pion op spot 3"); 
     Keyboard.press(KEY_LEFT_SHIFT);
     Keyboard.press('b'); 
     Keyboard.press('r');
     Keyboard.press('d');
     Keyboard.press('v'); 
     Keyboard.press('k');   
     Keyboard.press('3');
     delay(100);
     Keyboard.releaseAll();
  }
  else if (temp < 850)                //Fourth button limit
  {
     //Serial.println("er staat een pion op spot 2"); 
     Keyboard.press(KEY_LEFT_SHIFT);
     Keyboard.press('b'); 
     Keyboard.press('r');
     Keyboard.press('d');
     Keyboard.press('v'); 
     Keyboard.press('k');   
     Keyboard.press('2');
     delay(100);
     Keyboard.releaseAll();
     
  }
  else                                //If none of the previous buttons are pressed, then the fifth button must be pressed
  {
     //Serial.println("er staat een pion op spot 1");
     Keyboard.press(KEY_LEFT_SHIFT);
     Keyboard.press('b'); 
     Keyboard.press('r');
     Keyboard.press('d');
     Keyboard.press('v'); 
     Keyboard.press('k');   
     Keyboard.press('1');
     delay(100);
     Keyboard.releaseAll(); 
  }
  delay(120);                         //Delay for stability
}
