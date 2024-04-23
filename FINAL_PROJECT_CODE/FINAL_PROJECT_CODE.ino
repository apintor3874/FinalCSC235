#include <CapacitiveSensor.h>
#include <Adafruit_NeoPixel.h>

#include <Adafruit_NeoPixel.h>


Adafruit_NeoPixel strip(1, 9);  //num, pin
Adafruit_NeoPixel strip1(1, 5);  //num, pin
Adafruit_NeoPixel strip2(1, 6);  //num, pin
Adafruit_NeoPixel strip3(1, 7);  //num, pin
Adafruit_NeoPixel strip4(1, 8);  //num, pin
Adafruit_NeoPixel strip5(1, 11);  //num, pin
Adafruit_NeoPixel strip6(1, 10);  //num, pin


int led = 42;                                          //change '42' to any desired pin...long time = 0;
int state = HIGH;

boolean yes;
boolean previous = false;

int t = 500;

int debounce = 200;

CapacitiveSensor   cs_4_2 = CapacitiveSensor(4,3);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired// To add more sensors...//CapacitiveSensor   cs_4_6 = CapacitiveSensor(4,6);        // 10M resistor between pins 4 & 6, pin 6 is sensor pin, add a wire and or foil//CapacitiveSensor   cs_4_8 = CapacitiveSensor(4,8);        // 10M resistor between pins 4 & 8, pin 8 is sensor pin, add a wire and or foilvoidsetup()                    

void setup(){
   cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);  //Calibrate the sensor... pinMode(led, OUTPUT);
   Serial.begin(9600);

  strip.begin();
  strip.clear();
  strip.show();
  strip.setBrightness(255);

   strip1.begin();
  strip1.clear();
  strip1.show();
  strip1.setBrightness(255);

  strip2.begin();
  strip2.clear();
  strip2.show();
  strip2.setBrightness(255);

  strip3.begin();
  strip3.clear();
  strip3.show();
  strip3.setBrightness(255);

  strip4.begin();
  strip4.clear();
  strip4.show();
  strip4.setBrightness(255);

  strip5.begin();
  strip5.clear();
  strip5.show();
  strip5.setBrightness(255);

  strip6.begin();
  strip6.clear();
  strip6.show();
  strip6.setBrightness(255);

}

void loop()                    
{
    long total1 =  cs_4_2.capacitiveSensor(30);
    Serial.println(total1);

    
   // if (total1 > 60){yes = true;}
   // else {yes = false;}    
    
    // to toggle the state of stateif(yes == true && previous  == false && millis() - time>debounce){
      
      //  if(state == LOW){
      //    state = HIGH;
      //  }
      //  else 
      //    state = LOW;
        //  time = millis();     
       
       if (total1 > t){
        //strip.clear();
        strip.fill(255,0,0);
        strip.show();
        
 strip1.fill(255,0,0);
        strip1.show();

         strip2.fill(255,0,0);
        strip2.show();

         strip3.fill(255,0,0);
        strip3.show();

         strip4.fill(255,0,0);
        strip4.show();

         strip5.fill(255,0,0);
        strip5.show();

         strip6.fill(255,0,0);
        strip6.show();

        Serial.println("neoPixelOn!");
       }
       else {
        strip.clear();
        strip.show();

        strip1.clear();
        strip1.show();

        strip2.clear();
        strip2.show();

        strip3.clear();
        strip3.show();

        strip4.clear();
        strip4.show();

        strip5.clear();
        strip5.show();

        strip6.clear();
        strip6.show();
       }




    }
       
   
      // digitalWrite(led, state);
      // previous = yes;

      // //Serial.println(millis()-time);
      // delay(10);


