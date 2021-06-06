#include <Keyboard.h>


int buttonPin = A0;

void setup() 
{
  Serial.begin(9600); 
  Keyboard.begin();
}

void loop() {
  
  int analogRead1 = analogRead(buttonPin);   
     
  if (analogRead1 < 30) { }//Serial.println("no button")
  else if (analogRead1 < 50) {  activateKeyboard(); Keyboard.print('1'); endKeyboard();}
  else if (analogRead1 < 70) {  activateKeyboard(); Keyboard.print('2'); endKeyboard();}
  else if (analogRead1 < 85) {  activateKeyboard(); Keyboard.print('3'); endKeyboard();}
  else if (analogRead1 < 100) { activateKeyboard(); Keyboard.press('4'); endKeyboard();}
  else if (analogRead1 < 115) {activateKeyboard(); Keyboard.press('5'); endKeyboard(); }
  else if (analogRead1 < 136) { activateKeyboard(); Keyboard.press('6'); endKeyboard();}
  else if (analogRead1 < 160) { activateKeyboard(); Keyboard.press('7'); endKeyboard();}
  else if (analogRead1 < 195) { activateKeyboard(); Keyboard.press('8'); endKeyboard();}
  else if (analogRead1 < 245) {activateKeyboard(); Keyboard.press('9'); endKeyboard(); }
  else if (analogRead1 < 330) { activateKeyboard(); Keyboard.print("X"); endKeyboard();}
  else if (analogRead1 < 500) { activateKeyboard(); Keyboard.print("Y"); endKeyboard();}
  else {activateKeyboard(); Keyboard.print("W"); endKeyboard(); }
  delay(200);             
}


void activateKeyboard () {
     Keyboard.press(KEY_LEFT_SHIFT);
     Keyboard.press('b'); 
     Keyboard.press('r');
     Keyboard.press('d');
     Keyboard.press('v'); 
     Keyboard.press('k');  
}

void endKeyboard () {
    delay(100); 
    Keyboard.releaseAll(); 
}
