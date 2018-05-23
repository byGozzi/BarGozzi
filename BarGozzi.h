/* BarGozzi Library, for create Bar with LiquidCrystal_I2C
 * Version 1.0 - initial release
 * by Gozzi Enrici - Italy - www.gozzienrico.it
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * This permission notice shall be included in all copies or substantial 
 * portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef BarGozzi_H
#define BarGozzi_H
#include <LiquidCrystal_I2C.h>
#include <Arduino.h>

class BarGozzi{ 
   public:
    BarGozzi (LiquidCrystal_I2C* lcd, int x,int y, int l, int min, int max);
    void draw (int val);
   private:
   	LiquidCrystal_I2C* _lcd;
   	int _x;
   	int _y;
   	int _l;
   	int _min;
   	int _max;
   	int _full;
   	int _z;
};
#endif# BarGozzi
