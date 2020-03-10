#include "mbed.h"


void GLed(DigitalOut& ledpin)

{

   for(int j=0; j<4; ++j) { //blink for 5 times

       ledpin = !ledpin; // toggle led

       wait(0.2f);

   }

}