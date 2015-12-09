#include "ofApp.h"

#define PIN_LED 13
#define PIN_BUTTON 2

void ofApp::setup() {

    ofAddListener(arduino.EInitialized, this, &ofApp::setupArduino);

    arduino.connect("COM3", 57600);
    arduino.sendFirmwareVersionRequest(); // workaround for ofArduino/firmata bug
}

void ofApp::update() {
    arduino.update();
}

void ofApp::draw() {
}

void ofApp::setupArduino(const int& version) {

    ofRemoveListener(arduino.EInitialized, this, &ofApp::setupArduino);

    arduino.sendDigitalPinMode(PIN_LED, ARD_OUTPUT);
    arduino.sendDigitalPinMode(PIN_BUTTON, ARD_INPUT);

    ofAddListener(arduino.EDigitalPinChanged, this, &ofApp::digitalPinChanged);
}

void ofApp::digitalPinChanged(const int& pinNum) {
    // get value with arduino.getDigital(pinNum)
    ofLogNotice() << "Digital Pin " << pinNum << " value: " << arduino.getDigital(pinNum) << endl;
}

void ofApp::mousePressed(int x, int y, int button) {
    // switch the LED on
    arduino.sendDigital(PIN_LED, ARD_HIGH);
}

void ofApp::mouseReleased(int x, int y, int button) {
    // switch the LED off
    arduino.sendDigital(PIN_LED, ARD_LOW);
}
