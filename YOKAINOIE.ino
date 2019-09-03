#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "sprites.h"
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define XORIGIN 22
#define YORIGIN SCREEN_HEIGHT - 44
#define xposmax SCREEN_WIDTH -84
#define DELTIME 500
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
   
  // Clear the buffer.
  display.clearDisplay();
  display.display();
  delay(1000); // Pause for 2 seconds
 
  // Clear the buffer.
  display.clearDisplay();

  //display.setRotation(2);
 drawMenu();

}


 
void loop() {

 
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

 void Emote(const unsigned char animation[][264]){
  for (int i = 0; i <sizeof animation; i++){
   display.drawBitmap(xpos,YORIGIN,
  animation[i], 44, 44, 1);
  display.display();
  delay(DELTIME);
  clearSpace();
  delay(DELTIME); 
  }
   
}


void clearSpace(){
  display.fillRect(0,16, 128, 64, BLACK);
  
}

void drawMenu(){
  for (int i = 0;i <= 4;i++){
      display.drawBitmap(3+(i*26), 0, menuIcons[i],16,16,1);
  }
}
/*
void drawMenu(){
  for (int i = 0; i < sizeof menuIcons/2; i+=16) {
    for (int j = 0; j< 2; j++){
      display.drawBitmap(i, 0, menuIcons[j],16,16,1);
    }
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
