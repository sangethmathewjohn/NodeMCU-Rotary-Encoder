
#include "ESPRotary.h";

ESPRotary r = ESPRotary(5, 4);

void Rotaryrotate(ESPRotary& r) {
  Serial.println((r.getPosition()));
  Serial.println((r.getDirection()));
}

void setup()
{
  r.setChangedHandler(Rotaryrotate);
  r.setLeftRotationHandler(Rotaryrotate);
  r.setRightRotationHandler(Rotaryrotate);

Serial.begin(9600);
}


void loop()
{

    r.loop();

}
