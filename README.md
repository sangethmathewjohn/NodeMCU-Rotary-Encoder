# NodeMCU-Rotary-Encoder

## Rotary direction

    #include "ESPRotary.h";

    ESPRotary r = ESPRotary(5, 4);// D1 for CLK  
                                  // D2 for DT

    void Rotaryrotate(ESPRotary& r) {
      Serial.println((r.getPosition()));
    }
    void setup()
    {
        r.setChangedHandler(Rotaryrotate);

    Serial.begin(9600);
    }


    void loop()
    {

        r.loop();

      r.directionToString(r.getDirection());

    }
    
 ## Rotary Value
 
        #include "ESPRotary.h";

        ESPRotary r = ESPRotary(5, 4);// D1 for CLK  
                                      // D2 for DT

        void Rotaryrotate(ESPRotary& r) {
          Serial.println((r.getPosition()));
        }
        void setup()
        {
            r.setChangedHandler(Rotaryrotate);

        Serial.begin(9600);
        }


        void loop()
        {

            r.loop();

          r.directionToString(r.getDirection());

        }
 
 
