//Michael Klements
//The DIY Life
//17 May 2019

int ledPin = 13;    // choose the pin for the LED
int inputPin = 7;   // choose input pin 7 for the push button
bool hasHappend = false;


void setup()
{
  pinMode(ledPin, OUTPUT);  // declare LED as output
  pinMode(inputPin, INPUT); // declare push button as input
  Serial.begin(9600); // open the serial port at 9600 bps:
}

void loop()
{
  int pushed = digitalRead(inputPin);  // read input value
  if (pushed == HIGH){ // check if the input is HIGH    
    digitalWrite(ledPin, LOW);  // turn LED OFF
    if (hasHappend == false){
    Serial.print("Pion op plek 2");
    Serial.println(); 
    }
    hasHappend = true;
  }else{
    digitalWrite(ledPin, HIGH);  // turn LED ON
    delay(200);
    hasHappend = false;
  }
}
