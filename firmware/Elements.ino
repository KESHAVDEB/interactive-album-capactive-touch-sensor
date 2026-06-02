#include <CapacitiveSensor.h>

/*
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10 megohm between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50 kilohm - 50 megohm. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 * Best results are obtained if sensor foil and wire is covered with an insulator such as paper or plastic sheet
 */


CapacitiveSensor   cs_3_2 = CapacitiveSensor(3,2);        // 10 megohm resistor between pins 2 & 2, pin 2 is sensor pin, add wire, foil
CapacitiveSensor   cs_5_4 = CapacitiveSensor(5,4);        // 10 megohm resistor between pins 5 & 4, pin 4 is sensor pin, add wire, foil
CapacitiveSensor   cs_7_6 = CapacitiveSensor(7,6);        // 10 megohm resistor between pins 7 & 6, pin 6 is sensor pin, add wire, foil
CapacitiveSensor   cs_9_8 = CapacitiveSensor(9,8);        // 10 megohm resistor between pins 9 & 8, pin 8 is sensor pin, add wire, foil

void setup()                    
{

  
   Serial.begin(9600);

}

void loop()                    
{
   // long start = millis();
    long total1 =  cs_3_2.capacitiveSensor(10);
    long total2 =  cs_5_4.capacitiveSensor(10);
    long total3 =  cs_7_6.capacitiveSensor(10);
    long total4 =  cs_9_8.capacitiveSensor(10);
    
    //Serial.print(millis() - start);        // check on performance in milliseconds
    //Serial.print("\t");                    // tab character for debug window spacing

    Serial.write(total1/4);                  // print sensor output 1
  
    Serial.write(total2/4);                  // print sensor output 2

    Serial.write(total3/4);                // print sensor output 3

    Serial.write(total4/4);                // print sensor output 4
   
   
    delay(100);                             // arbitrary delay to limit data to serial port 
}
