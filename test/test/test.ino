#include "Inkplate.h"

Inkplate display(INKPLATE_1BIT);

void setup()
{
    Serial.begin(115200);
    display.begin();
    display.joinAP("e-radionica.com", "croduino");
}

void loop()
{
    display.drawImage(
        "https://raw.githubusercontent.com/e-radionicacom/Inkplate-Arduino-library/master/test/bitmaps/1bit.bmp", 0, 0,
        false);
    display.display();
    Serial.println("Done");
    delay(5000);
}