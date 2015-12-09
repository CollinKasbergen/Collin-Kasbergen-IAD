#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gabber.listDevices();

    gabber.setDeviceID(0);
    gabber.setDesiredFrameRate(30);
    gabber.initGrabber(320,240);

}

//--------------------------------------------------------------
void ofApp::update(){
    gabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(0,0);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(-960,240);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(-960,240);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(-960,240);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

    ofTranslate(320,0);
    gabber.draw(0,0);

}
