#include "control.c"

#define SHUTTER_PIN 3
#define FOCUS_PIN 5

void setup(){
    setup_pins(SHUTTER_PIN, FOCUS_PIN);
    focus();
    takePicture();
}


void loop(){

}
