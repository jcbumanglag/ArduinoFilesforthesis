#include <Keyboard.h>

#define  buttonPin  2     
#define  drum1  A0
#define  drum2  A1
#define  drum3  A2
#define  drum4  A3
#define  drum5  A4
#define  drum6  A5
#define  drum7  4
#define  drum8  6  

int buttonState;             
int lastButtonState = LOW;   

unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 50;    

void setup() {
pinMode(buttonPin,INPUT); 
pinMode(drum1,INPUT); 
pinMode(drum2,INPUT); 
pinMode(drum3,INPUT); 
pinMode(drum4,INPUT); 
pinMode(drum5,INPUT); 
pinMode(drum6,INPUT); 
pinMode(drum7,INPUT); 
pinMode(drum8,INPUT); 
Keyboard.begin(); 
}

void loop() {
 
  int reading = digitalRead(buttonPin);
  int drumreader1 = analogRead(drum1);
  int drumreader2 = analogRead(drum2);
  int drumreader3 = analogRead(drum3);
  int drumreader4 = analogRead(drum4);
  int drumreader5 = analogRead(drum5);
  int drumreader6 = analogRead(drum6);
  int drumreader7 = analogRead(drum7);
  int drumreader8 = analogRead(drum8);
  
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    

   
    if (reading != buttonState) {
      buttonState = reading;

     
      if (buttonState == HIGH) {
       Keyboard.press('q');
      }
    }
  }
  if(drumreader1 > 3)
  {
    Keyboard.press('z');
    delay(200);
  }
  if(drumreader2 > 3)
  {
    Keyboard.press('x');
    delay(200);
  }
  if(drumreader3 > 3)
  {
    Keyboard.press('c');
    delay(200);
  }
  if(drumreader4 > 3)
  {
    Keyboard.press('v');
    delay(200);
  }
  if(drumreader5 > 3)
  {
    Keyboard.press('b');
    delay(200);
  }
  if(drumreader6 > 3)
  {
    Keyboard.press('n');
    delay(200);
  }
  if(drumreader7 > 3)
  {
    Keyboard.press('m');
    delay(200);
  }
  if(drumreader8 > 3)
  {
    Keyboard.press(',');
    delay(200);
  }
  Keyboard.releaseAll();
}
