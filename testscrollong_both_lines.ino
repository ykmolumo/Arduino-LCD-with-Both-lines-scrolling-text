// Sketch to scroll characters onto an LCD screen

#include <LiquidCrystal.h>

// greater thanand less than symbols

// This site often removes greater than and less than symbols and the text between them

// LiquidCrystal (rs, enable, d4, d5, d6, d7)

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Declare lcd as a LiquidCrystal Object

int i = 0;

int j = 0;

int k = 0;

int delayTime2 = 350; // Delay between shifts



void scrollInFromRight (int line, char str1[]) {

// Written by R. Jordan Kreindler June 2016

i = strlen(str1);

for (j = 16; j >= 0; j--) {

lcd.setCursor(0, line);

for (k = 0; k <= 15; k++) {

lcd.print(" "); // Clear line

}

lcd.setCursor(j, line);

lcd.print(str1);

delay(delayTime2);

}

}







void setup() {

Serial.begin(9600);

Serial.println("Starting test ...");

lcd.begin(16, 2);

lcd.clear();

lcd.print("Test Only");

}

void loop() {

lcd.clear();

scrollInFromRight(0, "Hello there, Welcome to RAIN. This is Yusuf's Group Assignment ");








}
