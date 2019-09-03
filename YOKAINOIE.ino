#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "sprites.h"
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define XORIGIN 22
#define YORIGIN SCREEN_HEIGHT - 44
#define xposmax SCREEN_WIDTH -84
#define DELTIME 500
// Declaration for SSD1306 display connected using software SPI (default case):
/*#define OLED_MOSI  16
#define OLED_CLK   3
#define OLED_DC    18
#define OLED_CS    12
#define OLED_RESET 9*/
#define LBUTTON 4
#define RBUTTON 5
#define CBUTTON 6
int leftbuttonPressed = 0;
int rightbuttonPressed = 0;
int centerbuttonPressed = 0;
int menucount = 0;
bool menuon = false;
/*
// Declaration for SSD1306 display connected using software SPI (default case):
#define OLED_MOSI  16
#define OLED_CLK   3
#define OLED_DC    18
#define OLED_CS    12
#define OLED_RESET 9

//Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
//  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
*/
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);



int xpos = 44;
int xposmin = 0;
bool MOVERIGHT = true;
void setup() {
  Serial.begin(115200);
 
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
   
   pinMode(LBUTTON, INPUT);
  pinMode(RBUTTON, INPUT);
  pinMode(CBUTTON, INPUT);
digitalWrite(LBUTTON, HIGH);  // turn on pullup resistor
digitalWrite(RBUTTON, HIGH);  // turn on pullup resistor
digitalWrite(CBUTTON, HIGH);  // turn on pullup resistor
  
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
drawMenu();
leftbuttonPressed = digitalRead(LBUTTON);
rightbuttonPressed = digitalRead(RBUTTON);
centerbuttonPressed = digitalRead(CBUTTON);

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
     }
     switch(menucount){
      case 0:
        display.clearDisplay();
        drawMenu();
        display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
        
      break;
      case 1:
        display.clearDisplay();
        drawMenu();
        display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
        
      break;
      case 2:
      display.clearDisplay();
      drawMenu();
      display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
      
      break;
      
      case 3:
      display.clearDisplay();
      drawMenu();
      display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
      
      break;

      case 4:
      display.clearDisplay();
      drawMenu();
      display.drawRect(3+(menucount*26), 0, 17,17,WHITE);
      
      break;
      
    }
    
    display.display();
    }
else if(menuon == false){
  display.clearDisplay();
  drawMenu();
  display.display();
}
  }



 
/*else{
Emote(slimeSleep);
 delay(500);
 testdeathsDoor();
 delay(500);
 testAngry();
 delay(500);
 testHungry();
 delay(500);
 testSick();
 delay(500);
 testMove();
delay(500);
  drawMenu();
}
}
 void Emote(const unsigned char animation[][264]){
  for (int i = 0; i <sizeof animation; i++){
   display.drawBitmap(xpos,YORIGIN,
  animation[i], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME); 
  }
*/ 



void clearSpace(){
  display.fillRect(0,17, 128, 47, BLACK);
  
}

void drawMenu(){
  for (int i = 0;i <= 4;i++){
      display.drawBitmap(3+(i*26), 1, menuIcons[i],16,16,1);
      
   }
  }

/*

 /*   
void testSleeping(){
  display.drawBitmap(xpos,YORIGIN,
  slimeSleep[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);


display.drawBitmap(
    xpos,YORIGIN,
  slimeSleep[1], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  
  display.drawBitmap(xpos,YORIGIN,
  slimeSleep[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);
     }*/

void testdeathsDoor(){
  display.drawBitmap(xpos,YORIGIN,
  slimeDying[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);


display.drawBitmap(
    xpos,YORIGIN,
    slimeDying[1], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  
  display.drawBitmap(xpos,YORIGIN,
  slimeDying[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);
     }
void testSick(){
  display.drawBitmap(xpos,YORIGIN,
  slimeDying[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);


display.drawBitmap(
    xpos,YORIGIN,
    slimeSick[1], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  
  display.drawBitmap(xpos,YORIGIN,
  slimeSick[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);
     }

void testHungry(){
  display.drawBitmap(xpos,YORIGIN,
  slimeHungry[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);


display.drawBitmap(
    xpos,YORIGIN,
    slimeHungry[1], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  
  display.drawBitmap(xpos,YORIGIN,
  slimeHungry[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);
     }
void testAngry(){
  display.drawBitmap(xpos,YORIGIN,
  slimeAngry[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);


display.drawBitmap(
    xpos,YORIGIN,
    slimeAngry[1], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  
  display.drawBitmap(xpos,YORIGIN,
  slimeAngry[0], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);
     }
void testMove(){
  if(MOVERIGHT){
  display.drawBitmap(xpos,YORIGIN,
  slimeIdle[0], 88, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);
  xpos+=2;

display.drawBitmap(
    xpos,YORIGIN,
    slimeIdle[1], 88, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
     xpos+=2;}
  
  if (not(MOVERIGHT))
  {display.drawBitmap(xpos,YORIGIN,
  slimeIdle[0], 88, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME);
  xpos-=2;
  
display.drawBitmap(
    xpos,YORIGIN,
    slimeIdle[1], 88, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
    xpos-=2;}
  
  if (xpos<xposmax && MOVERIGHT|| xpos < xposmin ) {
  MOVERIGHT = true;}
   
    else{
    MOVERIGHT = false;
    }
     
  }
