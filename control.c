#include "Arduino.h"
#include "control.h"

int SHUTTER_PIN;
int FOCUS_PIN;

void setup_pins(int shutter_pin, int focus_pin){
    SHUTTER_PIN = shutter_pin;
    FOCUS_PIN = focus_pin;

    pinMode(SHUTTER_PIN, OUTPUT);
    pinMode(FOCUS_PIN, OUTPUT);
}

void _triggerShutter(int triggerTime) {
    // Press the "Shutter button" as long as specified by @triggerTime
    // @triggerTime - time in ms (1s = 1000ms)
    analogWrite(SHUTTER_PIN, 100);          // START pressing the shutter button
    delay(triggerTime);                     // pressing the shutter button
    analogWrite(SHUTTER_PIN, 0);            // RELEASE the shutter button
}

void _triggerFocus(int focusTime) {
    // Press the "Focus button" as long as specified by @focusTime
    // @focusTime - time in ms (1s = 1000ms)
    analogWrite(FOCUS_PIN, 100);          // START pressing the focus button
    delay(focusTime);                     // pressing the focus button
    analogWrite(FOCUS_PIN, 0);            // RELEASE the focus button
}

void takePicture(){
    _triggerShutter(150);
}

void focus(){
    _triggerFocus(1000);
}