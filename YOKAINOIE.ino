#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "sprites.h"
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_MOSI  16
#define OLED_CLK   3
#define OLED_DC    18
#define OLED_CS    12
#define OLED_RESET 9
#define XORIGIN 22
#define YORIGIN 20
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
int randNumber = 0;
int happyPoints = 50; // STARTING HAPPINESS
int selection;
int mode;
int yokaiNumber;
String miniChoices[] = {"ROCK", "PAPER", "SCISSORS"};
bool firstTick = true; // can use this variable to run something once then set to 'false'
bool buttonsPressed;
bool wait;
bool loopGame = true;



void setup() {
  Serial.begin(9600);


  //make sure display runs, spit out serial error if not.
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);


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
    hasTicked = !hasTicked;
  }

  drawMenu();
  leftbuttonPressed = digitalRead(LBUTTON);
  rightbuttonPressed = digitalRead(RBUTTON);
  centerbuttonPressed = digitalRead(CBUTTON);
  bbuttonPressed = digitalRead(BBUTTON);



  //Check for button press

  if (centerbuttonPressed == LOW) {
    delay(100);
    menuon = !menuon;
  }
  if (menuon) {
    if (leftbuttonPressed == LOW) {
      delay(100);
      if (menucount > 0) {
        menucount--;
      }
      else {
        menucount = 4;
      }
    }
    else if (rightbuttonPressed == LOW) {
      delay(100);
      if (menucount < 4) {
        menucount++;
      }
      else {
        menucount = 0;
      }
      //update the menu selector on screen based on button press
    }
    switch (menucount) {
      case 0://food mode
        clearMenu();
        drawMenu();
        display.drawRect(3 + (menucount * 26), 0, 17, 17, WHITE);

        break;
      case 1://game mode
        clearMenu();
        drawMenu();
        display.drawRect(3 + (menucount * 26), 0, 17, 17, WHITE);
        if (centerbuttonPressed == LOW) {
          delay(50);
          happyPoints = playMinigame();
          
        }
        
       break;
      case 2://vitals info
        clearMenu();
        drawMenu();
        display.drawRect(3 + (menucount * 26), 0, 17, 17, WHITE);

        break;

      case 3://clean
        clearMenu();
        drawMenu();
        display.drawRect(3 + (menucount * 26), 0, 17, 17, WHITE);

        break;

      case 4://love
        clearMenu();
        drawMenu();
        display.drawRect(3 + (menucount * 26), 0, 17, 17, WHITE);

        break;

    }

    display.display();
  }
  else if (menuon == false) {
    clearMenu();
    drawMenu();
    display.display();
  }


  if (bbuttonPressed == LOW) {
    delay(100);
    randomSeed(micros());
    randNumber = random(0, 4);
    yokaiNumber = randNumber;

  }

  switch (yokaiNumber) {
    case 0:
      if (hasTicked) {
        EmoteSpawn0(mad);
        slimeMove0();
        
      }
      else {
        EmoteSpawn1(mad);
        slimeMove1();
        
      }
      break;
    case 1:
      if (hasTicked) {
        EmoteSpawn0(mad);
        YokaiFrame2(kappa);
      }
      else {
        EmoteSpawn1(mad);
        YokaiFrame1(kappa);
        
      }
      break;
    case 2:
      if (hasTicked) {
        EmoteSpawn0(mad);
        YokaiFrame2(umibozu);
        
      }
      else {
        EmoteSpawn1(mad);
        YokaiFrame1(umibozu);
      }
      break;
    case 3:
      if (hasTicked) {
        EmoteSpawn0(mad);
        YokaiFrame2(necklady);
        
      }
      else {
        
        EmoteSpawn1(mad);
        YokaiFrame1(necklady);
      }
      break;
  /*  case 4:
      if (hasTicked) {
        
        EmoteSpawn0(mad);
        YokaiFrame2(umbrella);
      }
      else {
        EmoteSpawn1(mad);
        YokaiFrame1(umbrella);
      }
      break;
    case 5:
      if (hasTicked) {
        YokaiFrame2(tanuki);
        EmoteSpawn0(mad);
      }
      else {
        YokaiFrame1(tanuki);
        EmoteSpawn1(mad);
      }
      break;
  }*/

}
}
void clearYokaiSpace() {
  display.fillRect(0, 17, 128, 47, BLACK);
}

void YokaiFrame1(const unsigned char theyokai[][704]) {
  clearYokaiSpace();
  display.drawBitmap(0, 18,
                     theyokai[0], 128, 44, 1);
  display.display();


}

void EmoteSpawn0(const unsigned char emotion[][60]) {
  display.drawBitmap(20, 20, emotion[0], 20, 20, 1);
  display.display();
}

void EmoteSpawn1(const unsigned char emotion[][60]) {
  display.drawBitmap(20, 20, emotion[1], 20, 20, 1);
  display.display();
}

void YokaiFrame2(const unsigned char theyokai[][704]) {
  clearYokaiSpace();
  display.drawBitmap(0, 18,
                     theyokai[1], 128, 44, 1);
  display.display();

}

void slimeMove0() {
  if (MOVERIGHT) {
    clearYokaiSpace();
    display.drawBitmap(xpos, 18,
                       slime[0], 128, 44, 1);
    display.display();
    xpos += 2;

  }

  else if (not(MOVERIGHT)) {
    clearYokaiSpace();
    display.drawBitmap(xpos, 18,
                       slime[0], 128, 44, 1);
    display.display();
    xpos -= 2;
  }
  if (xpos < xposmax && MOVERIGHT || xpos < xposmin ) {
    MOVERIGHT = true;
  }

  else {
    MOVERIGHT = false;
  }
}

void slimeMove1() {
  if (MOVERIGHT) {
    clearYokaiSpace();
    display.drawBitmap(xpos, 18,
                       slime[1], 128, 44, 1);
    display.display();
    xpos += 2;

  }

  else if (not(MOVERIGHT)) {
    clearYokaiSpace();
    display.drawBitmap(xpos, 18,
                       slime[1], 128, 44, 1);
    display.display();
    xpos -= 2;
  }
  if (xpos < xposmax && MOVERIGHT || xpos < xposmin ) {
    MOVERIGHT = true;
  }

  else {
    MOVERIGHT = false;
  }
}


void Evolve (int randYokai) {


}


void clearMenu() {
  display.fillRect(0, 0, 128, 17, BLACK);
}

void drawMenu() {
  for (int i = 0; i <= 4; i++) {
    display.drawBitmap(3 + (i * 26), 1, menuIcons[i], 16, 16, 1);

  }
}

int playMinigame () {
  //initialize variables on first tick when opening minigame
  int left;
  int right;
  menucount = 0;

  if (firstTick == true) {
    mode = 0;
    wait = true;
    buttonsPressed = false;
    displayMiniIntro();
    firstTick = false;
  }

  // START GAME LOOP +++++++++++++++++++++++++

  do {
    int left = digitalRead(LBUTTON);
    int right = digitalRead(RBUTTON);
    int center = digitalRead(CBUTTON);

    switch (mode) {
      //=====================================================
      case 0:
        //  +++++++++++MENU CYCLING ++++++++++++++++
        display.clearDisplay();
        for (int i = 0; i <= 2; i++) {
          display.setCursor(14 + (i * 7), 10 + (i * 17));
          display.setTextSize(2);
          display.setTextColor(WHITE);
          display.print(miniChoices[i]);
        }
        display.fillRect(5 + (menucount * 7), 14 + (menucount * 17), 6, 6, WHITE);
        display.display();

        if (left == LOW || right == LOW || center == LOW) {
          if (wait == false) {
            if (right == LOW) {
              if (menucount < 2) {
                menucount++;
              } else {
                menucount = 0;
              }
              wait = true;
            }
            if (left == LOW) {
              if (menucount > 0) {
                menucount--;
              } else {
                menucount = 2;
              }
              wait = true;
            }
            if (center == LOW) {
              randomSeed(millis());
              selection = menucount;
              menucount = 0;
              wait = false;
              mode = 1;
              display.clearDisplay();
            }
          }
        } else {
          wait = false;
        }

        break;
      //=======================================================
      case 1:
        display.clearDisplay();
        display.setCursor(2, 5);
        display.setTextSize(2);
        display.print(miniChoices[selection]);
        display.display();
        delay(1250);
        display.drawLine(0, 54, 43, 39, WHITE);
        display.drawLine(88, 24, 128, 10, WHITE);
        display.setCursor(50, 24);
        display.setTextSize(3);
        display.print("VS");
        display.display();
        delay(1250);
        display.setCursor(30, 50);
        display.setTextSize(2);
        randNumber = random(0, 3);
        display.print(miniChoices[randNumber]);
        display.display();
        delay(2000);
        display.clearDisplay();
        mode = 2;
        break;
      //=================== OUTCOME DECISION ======================
      case 2:
        Serial.println(selection);
        Serial.println(randNumber);
        if (selection == randNumber) {
          display.setTextSize(4);
          display.setCursor(8, 20);
          display.print("DRAW!");
          display.display();
          delay(2000);
          display.clearDisplay();
          mode = 5;
          break;
          // IF ROCK
        } else if (selection == 0) {
          if (randNumber == 1) {
            mode = 4;
            break;
          } else if (randNumber == 2) {
            mode = 3;
            break;
          }
          //IF PAPER
        } else if (selection == 1) {
          if (randNumber == 2) {
            mode = 4;
            break;
          } else if (randNumber == 0) {
            mode = 3;
            break;
          }
          //IF SCISSORS
        } else if (selection == 2) {
          if (randNumber == 0) {
            mode = 4;
            break;
          } else if (randNumber == 1) {
            mode = 3;
            break;
          }
        }

      //======================== WIN ================================
      case 3:
        display.setTextSize(2);
        display.setTextColor(WHITE);
        for (int i = 1; i < 11; i++) {
          display.clearDisplay();
          display.setCursor(-55 + (i * 7), 26);
          display.print("=WIN");
          display.setCursor(143 - (i * 8), 26);
          display.print("NER!=");
          display.fillRect(0, 42, 128, 22, BLACK);
          display.display();
          delay(50);
        }
        delay(1500);
        display.clearDisplay();
        display.setCursor(5, 10);
        display.print("HAPPINESS:");
        display.setCursor(30, 40);
        display.print(happyPoints);
        display.display();
        delay(1500);

        if (happyPoints < 100) {
          happyPoints = happyPoints + 1;
          for (int i = 1; i < 6; i++) {
            display.clearDisplay();
            display.setCursor(5, 10);
            display.print("HAPPINESS:");
            display.setCursor(30, 40);
            display.print(happyPoints - 1);
            display.fillRect(30, 70 - (i * 6), 30, 25, BLACK);
            display.setCursor(30, 70 - (i * 6));
            display.print(happyPoints);
            display.display();
            delay(50);
          }
          display.setCursor(75, 35);
          display.setTextSize(3);
          display.print("+1");
          display.display();
          delay(2000);
        }
        display.clearDisplay();

        mode = 5;

        break;

      //======================== LOSE ===============================
      case 4:
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(15, 15);
        display.print("YOU ");
        display.display();
        delay(750);
        display.print("LOSE!");
        display.display();
        delay(1250);
        display.setTextSize(3);
        display.setCursor(45, 40);
        display.print(":(");
        display.display();
        delay(1500);
        display.clearDisplay();
        mode = 5;

        break;
      //====================== TRY AGAIN? ===========================
      case 5:
        display.clearDisplay();
        display.setTextSize(2);
        display.setCursor(3, 16);
        display.print("TRY AGAIN?");
        display.setCursor(24, 44);
        display.print("Yes!");
        display.setCursor(86, 44);
        display.print("No!");

        display.fillRect(15 + (menucount * 62), 50, 6, 6, WHITE);
        display.display();

        if (left == LOW || right == LOW || center == LOW) {
          if (wait == false) {
            if (right == LOW) {
              if (menucount < 1) {
                menucount++;
              } else {
                menucount = 0;
              }
              wait = true;
            }
            if (left == LOW) {
              if (menucount > 0) {
                menucount--;
              } else {
                menucount = 1;
              }
              wait = true;
            }
            if (center == LOW) {
              if (menucount == 0) { //CONTINUE GAME
                mode = 0;
                loopGame = true;
                delay(350);
              } else if (menucount == 1) { // EXIT GAME
                loopGame = false;
                firstTick = true;
                //SEND OUT THE NEW HAPPY!
                delay(350);
                display.clearDisplay();
                Serial.println(happyPoints);

                break;
              }
            }
          }
        } else {
          wait = false;
        }
        break;
    }
  } while (loopGame == true); //END GAME LOOP+++++++++++++++++++++++++++++
  loopGame = true;
  return happyPoints;
}
void displayMiniIntro() {
  display.clearDisplay();
  display.setTextSize(5);
  display.setCursor(20, 20);
  display.setTextColor(WHITE);
  //1
  display.print("JAN");
  display.display();
  delay(1000);
  display.clearDisplay();
  //2

  display.setCursor(20, 20);
  display.print("KEN");
  display.display();
  delay(1000);
  display.clearDisplay();

  //3
  display.setCursor(8, 20);
  display.print("PON!");
  display.display();
  delay(2000);
  display.clearDisplay();
  delay(500);

  //4  CHOOSE YOUR WEAPON
  display.setTextSize(3);
  String chooseYourWeapon[3] = {"Choose", "Your", "Weapon!"};
  for (int i = 0; i <= 2; i++) {
    display.setCursor(2, 20);
    display.print(chooseYourWeapon[i]);
    display.display();
    delay(450);
    display.clearDisplay();
  }
  delay(1100);
}
