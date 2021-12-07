#include <Adafruit_CircuitPlayground.h>

#define PIN 12 //CHANGE this if your sequins thread connects to something different than 12

///////////////////////////////////////////////////////////////////////////////
void setup() {
  CircuitPlayground.begin();
  pinMode(PIN, OUTPUT); //Sets PIN (one we set above) to be an output (not input)
}

// MAIN Loop that defines the two main functions
void loop() {
  if (CircuitPlayground.leftButton()) {
    indicateLeft();
  }  
  if (CircuitPlayground.rightButton()) {
    indicateRight();    
  }
}

void indicateLeft() {
  CircuitPlayground.clearPixels();

 //SONG Wish You a Merry Christmas
  CircuitPlayground.playTone(500, 200);
  CircuitPlayground.playTone(800, 200);
  CircuitPlayground.playTone(800, 100);
  CircuitPlayground.playTone(900, 100);
  CircuitPlayground.playTone(800, 100);
  CircuitPlayground.playTone(700, 100);
  CircuitPlayground.playTone(600, 200);
  allRed();
  digitalWrite(PIN, HIGH); //writes out to sequin connected to pin
  CircuitPlayground.playTone(600, 200);
  allGreen();
  CircuitPlayground.playTone(600, 200);
  allRed();
  digitalWrite(PIN, LOW);
  CircuitPlayground.playTone(900, 200);
  CircuitPlayground.clearPixels();
  CircuitPlayground.playTone(900, 100);
  CircuitPlayground.playTone(1000, 100);
  CircuitPlayground.playTone(900, 100);
  CircuitPlayground.playTone(800, 100);
  CircuitPlayground.playTone(700, 200);
  digitalWrite(PIN, HIGH);
  allGreen();
  CircuitPlayground.playTone(500, 200);
  allRed();
  CircuitPlayground.playTone(500, 200);
  digitalWrite(PIN, LOW);
  allGreen();
  CircuitPlayground.playTone(1000, 200);
  CircuitPlayground.clearPixels();
  CircuitPlayground.playTone(1000, 100);
  CircuitPlayground.playTone(1100, 100);
  CircuitPlayground.playTone(1000, 100);
  CircuitPlayground.playTone(900, 100);
  CircuitPlayground.playTone(800, 200);
  digitalWrite(PIN, HIGH);
  redWhite(); 
  CircuitPlayground.playTone(600, 200);
  whiteRed();
  digitalWrite(PIN, LOW);
  CircuitPlayground.playTone(500, 100);
  CircuitPlayground.clearPixels();
  CircuitPlayground.playTone(500, 100);  
  CircuitPlayground.playTone(600, 200);
  CircuitPlayground.playTone(900, 200);
  digitalWrite(PIN, HIGH);
  allBlue();
  CircuitPlayground.playTone(700, 200);
  allWhite();
  CircuitPlayground.playTone(800, 400);
  CircuitPlayground.clearPixels();
  digitalWrite(PIN, LOW);
  
}

void indicateRight() {
  CircuitPlayground.clearPixels();
  
  digitalWrite(PIN, HIGH); //writes out to sequin connected to pin
  whiteRed();    
  //Oh Christmas Tree Song Below
  CircuitPlayground.playTone(500, 200);
  CircuitPlayground.playTone(800, 100);
  CircuitPlayground.playTone(800, 100);
  CircuitPlayground.playTone(800, 200);
  CircuitPlayground.playTone(900, 200);
  digitalWrite(PIN, LOW);
  CircuitPlayground.playTone(1000, 100);
  CircuitPlayground.playTone(1000, 100);
  CircuitPlayground.playTone(1000, 200);
  delay(10);

  redWhite();
  digitalWrite(PIN, HIGH);
  
  //Continue Song
  CircuitPlayground.playTone(1000, 100);
  CircuitPlayground.playTone(900, 100);
  CircuitPlayground.playTone(1000, 100);
  digitalWrite(PIN, LOW);
  CircuitPlayground.playTone(1100, 200);
  CircuitPlayground.playTone(700, 200);
  CircuitPlayground.playTone(900, 200);
  CircuitPlayground.playTone(800, 200);
  digitalWrite(PIN, LOW);
  whiteRed();
  delay(1000);
  digitalWrite(PIN, LOW);
  CircuitPlayground.clearPixels();
  
}




////BELOW ARE ALL FUNCTION TO FLASH COLORS

//A simple function that makes all lights red
void allRed() {
  for(int i=0; i<10; ++i) {
    CircuitPlayground.setPixelColor(i, 255,0,0);
  }
}

//A simple function that makes all lights green
void allGreen() {
  for(int i=0; i<10; ++i) {
    CircuitPlayground.setPixelColor(i, 0,255,0);
  }
}

//A simple function that makes all lights blue
void allBlue() {
  for(int i=0; i<10; ++i) {
    CircuitPlayground.setPixelColor(i, 0, 0, 255);
  }
}

//A simple function that makes all lights white
void allWhite() {
  for(int i=0; i<10; ++i) {
    CircuitPlayground.setPixelColor(i, 255, 255, 255);
  }
}

void whiteRed() {
  CircuitPlayground.setPixelColor(0, 0, 255, 0);
  CircuitPlayground.setPixelColor(1, 255, 0, 0);
  CircuitPlayground.setPixelColor(2, 0, 255, 0);
  CircuitPlayground.setPixelColor(3, 255, 0, 0);
  CircuitPlayground.setPixelColor(4, 0, 255, 0);
  CircuitPlayground.setPixelColor(5, 255, 0, 0);
  CircuitPlayground.setPixelColor(6, 0, 255, 0);
  CircuitPlayground.setPixelColor(7, 255, 0, 0);
  CircuitPlayground.setPixelColor(8, 0, 255, 0);
  CircuitPlayground.setPixelColor(9, 255, 0, 0);
}

void redWhite() {
  CircuitPlayground.setPixelColor(2, 255, 0, 0);
  CircuitPlayground.setPixelColor(1, 0, 255, 0);
  CircuitPlayground.setPixelColor(4, 255, 0, 0);
  CircuitPlayground.setPixelColor(3, 0, 255, 0);
  CircuitPlayground.setPixelColor(6, 255, 0, 0);
  CircuitPlayground.setPixelColor(5, 0, 255, 0);
  CircuitPlayground.setPixelColor(8, 255, 0, 0);
  CircuitPlayground.setPixelColor(7, 0, 255, 0);
  CircuitPlayground.setPixelColor(0, 255, 0, 0);
  CircuitPlayground.setPixelColor(9, 0, 255, 0);
}
