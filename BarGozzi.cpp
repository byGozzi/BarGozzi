#include "Arduino.h"
#include "BarGozzi.h" 
#include "LiquidCrystal_I2C.h"

BarGozzi::BarGozzi (LiquidCrystal_I2C* lcd, int x,int y, int l, int min, int max)
{
_lcd=lcd;
_x=x;
_y=y;
_l=l;
_min=min;
_max=max;
}


void BarGozzi::draw (int val)
{
_lcd->setCursor(_x, _y);
_full = (val - _min) * _l;
_full = _full / (_max - _min);
for (int _z = 1; _z <= _full; _z++) {
    _lcd->print(char(255));
  }
  for (int _z = _full; _z < _l; _z++) {
   _lcd->print("_");

  }
}