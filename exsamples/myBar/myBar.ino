#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <BarGozzi.h>

#define x 0
#define y 1
#define l 10
#define min 0
#define max 100

int counter = min;


// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C myLcd(0x27, 16, 2);

BarGozzi myBar (&myLcd, x, y, l, min,max);

void setup()
{
	// initialize the LCD
	myLcd.begin();

	// Turn on the blacklight and print a message.
	myLcd.backlight();
	myLcd.print("wainting...");
 delay (2000);
 myLcd.clear();
 myLcd.setCursor(x,0);
 myLcd.print(min);
  myLcd.setCursor(l,0);
 myLcd.print(max);
}

void loop()
{

myBar.draw(counter);
counter ++;
if (counter >max) counter=min;
delay (200);
}
