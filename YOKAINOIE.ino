#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "sprites.h"
#include <EEPROM.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_MOSI  16
#define OLED_CLK   3
#define OLED_DC    18
#define OLED_CS    12
#define OLED_RESET 9
#define XORIGIN 22
#define YORIGIN 20
#define DELTIME 500
// Declaration for SSD1306 display connected using software SPI (default case):
#define BBUTTON 7
#define LBUTTON 4
#define RBUTTON 5
#define CBUTTON 6
int leftbuttonPressed = 0;
int rightbuttonPressed = 0;
int centerbuttonPressed = 0;
int bbuttonPressed = 0;
int menucount = 0;
bool menuon = false;
bool hasTicked = false;
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
 OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
int xposmax = SCREEN_WIDTH - 108;
int xpos = 22;
int xposmin = -20;
bool MOVERIGHT = true;
unsigned long previousMillis = 0;        // will store last time counter was updated
// constants won't change :
const long interval = 500;   
bool GenWait = false;
int randNumber = 0;


void setup() {
  Serial.begin(9600);
  
 
 //make sure display runs, spit out serial error if not. 
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

 
 
  pinMode(LBUTTON, INPUT);
  pinMode(RBUTTON, INPUT);
  pinMode(CBUTTON, INPUT);
  pinMode(BBUTTON, INPUT);
  digitalWrite(LBUTTON, HIGH);  // turn on pullup resistor
  digitalWrite(RBUTTON, HIGH);  // turn on pullup resistor
  digitalWrite(CBUTTON, HIGH);  // turn on pullup resistor
  digitalWrite(BBUTTON, HIGH);
  
  // Clear the buffer.
  display.clearDisplay();
  display.display();
  delay(500); // Pause for 2 seconds
 
  // Clear the buffer.
  display.clearDisplay();
  drawMenu();
  //display.setRotation(2);
 
}


 
void loop() {
   //1 millisecond timer without delay
   unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked
    previousMillis = currentMillis;
    hasTicked = !hasTicked;}
    
    drawMenu();
    leftbuttonPressed = digitalRead(LBUTTON);
    rightbuttonPressed = digitalRead(RBUTTON);
    centerbuttonPressed = digitalRead(CBUTTON);
    bbuttonPressed = digitalRead(BBUTTON);

//if (GenWait == false){
    
  //  GenWait = true;}




//Check for button press

if (centerbuttonPressed == LOW){
  delay(100);
  menuon = !menuon;
}
  if(menuon){
    if (leftbuttonPressed == LOW) {
      delay(100);
      if(menucount >0){
        menucount--;
      }
      else{
        menucount = 4;
      }
    }
     else if(rightbuttonPressed ==LOW){
       delay(100);
      if(menucount <4){
        menucount++;
     }
      else{
        menucount =0;
     }
     //update the menu selector on screen based on button press
     }
     switch(menucount){
      case 0:
        clearMenu();
        drawMenu();
        display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
        
      break;
      case 1:
        clearMenu();
        drawMenu();
        display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
        
      break;
      case 2:
      clearMenu();
      drawMenu();
      display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
      
      break;
      
      case 3:
      clearMenu();
      drawMenu();
      display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
      
      break;

      case 4:
      clearMenu();
      drawMenu();
      display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
      
      break;
      
    }
    
    display.display();
    }
  else if(menuon == false){
  clearMenu();
  drawMenu();
  display.display();
}


if (bbuttonPressed ==LOW){
  delay(100);
  randomSeed(micros());
  randNumber = random(0, 6);

}

switch(randNumber){
    case 0:
    if (hasTicked){
    slimeMove0();}
      else {
    slimeMove1();}
      break;
    case 1:
      if (hasTicked){
    YokaiFrame2(kappa);}
      else {
    YokaiFrame1(kappa);}
      break;
    case 2:
      if (hasTicked){
    YokaiFrame2(umibozu);}
      else {
    YokaiFrame1(umibozu);}
      break;
    case 3:
      if (hasTicked){
    YokaiFrame2(necklady);}
      else {
    YokaiFrame1(necklady);}
      break;
    case 4:
      if (hasTicked){
    YokaiFrame2(umbrella);}
      else {
    YokaiFrame1(umbrella);}
      break;
      case 5:
      if (hasTicked){
    YokaiFrame2(tanuki);}
      else {
    YokaiFrame1(tanuki);}
      break;
  }

}
void clearYokaiSpace(){
  display.fillRect(0,17, 128, 47, BLACK);}

void YokaiFrame1(const unsigned char theyokai[][704]){
  clearYokaiSpace();
  display.drawBitmap(0,18,
  theyokai[0], 128, 44, 1);
  display.display();
  
 
}

void YokaiFrame2(const unsigned char theyokai[][704]){
  clearYokaiSpace();
  display.drawBitmap(0,18,
  theyokai[1], 128, 44, 1);
  display.display(); 
 
}

void slimeMove0(){
  if(MOVERIGHT){
    clearYokaiSpace();
  display.drawBitmap(xpos,18,
  slime[0], 128, 44, 1);
  display.display();
  xpos+=2;

  }
   
  else if (not(MOVERIGHT)){
  clearYokaiSpace();
  display.drawBitmap(xpos,18,
  slime[0], 128, 44, 1);
  display.display();
  xpos-=2;
  }
  if (xpos<xposmax && MOVERIGHT|| xpos < xposmin ) {
  MOVERIGHT = true;}
   
    else{
    MOVERIGHT = false;
    }
}

void slimeMove1(){
  if(MOVERIGHT){
    clearYokaiSpace();
  display.drawBitmap(xpos,18,
  slime[1], 128, 44, 1);
  display.display();
  xpos+=2;

  }
   
  else if (not(MOVERIGHT)){
  clearYokaiSpace();
  display.drawBitmap(xpos,18,
  slime[1], 128, 44, 1);
  display.display();
  xpos-=2;
  }
  if (xpos<xposmax && MOVERIGHT|| xpos < xposmin ) {
  MOVERIGHT = true;}
   
    else{
    MOVERIGHT = false;
    }
}
     

void Evolve (int randYokai){
  
  
}
 

void clearMenu(){
  display.fillRect(0, 0, 128, 17, BLACK);
}

void drawMenu(){
  for (int i = 0;i <= 4;i++){
      display.drawBitmap(3+(i*26), 1, menuIcons[i],16,16,1);
      
   }
  }
