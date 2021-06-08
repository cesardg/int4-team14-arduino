#include <Keyboard.h>

int buttonPin1 = A0;
int buttonPin2 = A1;

void setup() 
{
  //Serial.begin(9600); 
  Keyboard.begin();
}

void loop() {
  
  int analogRead1 = analogRead(buttonPin1);  
  int analogRead2 = analogRead(buttonPin2);   
  //Serial.println(analogRead2); 
  //Serial.println(analogRead1);
     
  if (analogRead1 < 25) {/*Serial.println("no button")*/}
  else if (analogRead1 < 40) {activateKeyboard(); Keyboard.print('1'); endKeyboard();}
  else if (analogRead1 < 50) {activateKeyboard(); Keyboard.print('2'); endKeyboard();}
  else if (analogRead1 < 60) {activateKeyboard(); Keyboard.print('3'); endKeyboard();}
  else if (analogRead1 < 65) {activateKeyboard(); Keyboard.press('4'); endKeyboard();}
  else if (analogRead1 < 75) {activateKeyboard(); Keyboard.press('5'); endKeyboard();}
  else if (analogRead1 < 85) {activateKeyboard(); Keyboard.press('6'); endKeyboard();}
  else if (analogRead1 < 95) {activateKeyboard(); Keyboard.press('7'); endKeyboard();}
  else if (analogRead1 < 110) {activateKeyboard(); Keyboard.press('8'); endKeyboard();}
  else if (analogRead1 < 120) {activateKeyboard(); Keyboard.press('9'); endKeyboard();}
  else if (analogRead1 < 140) {activateKeyboard(); Keyboard.print("A"); endKeyboard()}
  else if (analogRead1 < 170) {activateKeyboard(); Keyboard.print("B"); endKeyboard();}
  else if (analogRead1 < 200) {activateKeyboard(); Keyboard.print("C"); endKeyboard();}
  else if (analogRead1 < 250) {activateKeyboard(); Keyboard.print("D"); endKeyboard();}
  else if (analogRead1 < 350) {activateKeyboard(); Keyboard.print("E"); endKeyboard();}
  else if (analogRead1 < 600) {activateKeyboard(); Keyboard.print("F"); endKeyboard();}
  else {activateKeyboard(); Keyboard.print("F"); endKeyboard();}
     
  if (analogRead2 < 25) {/*Serial.println("no button")*/ }
  else if (analogRead2 < 40) {activateKeyboard(); Keyboard.print('V'); endKeyboard();}
  else if (analogRead2 < 50) {activateKeyboard(); Keyboard.print('U'); endKeyboard();}
  else if (analogRead2 < 60) {activateKeyboard(); Keyboard.print('T'); endKeyboard();}
  else if (analogRead2 < 65) {activateKeyboard(); Keyboard.press('S'); endKeyboard();}
  else if (analogRead2 < 75) {activateKeyboard(); Keyboard.press('R'); endKeyboard();}
  else if (analogRead2 < 85) {activateKeyboard(); Keyboard.press('Q'); endKeyboard();}
  else if (analogRead2 < 95) {activateKeyboard(); Keyboard.press('P'); endKeyboard();}
  else if (analogRead2 < 110) {activateKeyboard(); Keyboard.press('O'); endKeyboard();}
  else if (analogRead2 < 120) {activateKeyboard(); Keyboard.press('N'); endKeyboard(); }
  else if (analogRead2 < 140) {activateKeyboard(); Keyboard.print("M"); endKeyboard()}
  else if (analogRead2 < 170) {activateKeyboard(); Keyboard.print("L"); endKeyboard();}
  else if (analogRead2 < 200) {activateKeyboard(); Keyboard.print("K"); endKeyboard();}
  else if (analogRead2 < 250) {activateKeyboard(); Keyboard.print("J"); endKeyboard();}
  else if (analogRead2 < 350) {activateKeyboard(); Keyboard.print("I"); endKeyboard();}
  else if (analogRead2 < 600) {activateKeyboard(); Keyboard.print("H"); endKeyboard();}
  else {activateKeyboard(); Keyboard.print("G"); endKeyboard();}
  delay(150);             

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
