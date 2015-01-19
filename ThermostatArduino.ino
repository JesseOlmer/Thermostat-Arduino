#include "HT1632.h"

#define DATA 2
#define WR   3
#define CS   4

HT1632LEDMatrix matrix = HT1632LEDMatrix(DATA, WR, CS);

void setup()
{
    Serial.begin(9600);
    matrix.begin(HT1632_COMMON_16NMOS);
    matrix.fillScreen();
}

void loop()
{

    matrix.clearScreen();
    // draw some text!
    matrix.setTextSize(1);    // size 1 == 8 pixels high
    matrix.setTextColor(1);   // 'lit' LEDs

    matrix.setCursor(23, 8);   // next line, 8 pixels down
    matrix.print("Hello World");
    matrix.writeScreen();

    // loop forever - in other words, never continue
    while (true) {}

}
