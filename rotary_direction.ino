
#include "ESPRotary.h";

ESPRotary r = ESPRotary(5, 4); //D1 - CLK
                               //D2 -DT
void Rotaryrotate(ESPRotary& r) {
}
void RotaryshowDirection(ESPRotary& r) {
  Serial.println((r.directionToString(r.getDirection())));
}
void setup()
{
    r.setChangedHandler(Rotaryrotate);
  r.setLeftRotationHandler(RotaryshowDirection);
  r.setRightRotationHandler(RotaryshowDirection);

Serial.begin(9600);
}


void loop()
{

    r.loop();

}
