#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gabber.listDevices();

    gabber.setDeviceID(0);
    gabber.setDesiredFrameRate(30);
    gabber.initGrabber(320,240);

    video.loadMovie("rekttogether.mov");
video.play();
video.setLoopState(OF_LOOP_NORMAL);

}

//--------------------------------------------------------------
void ofApp::update(){
    gabber.update();
    video.update();

    rotate++;
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

    ofTranslate(-580,-260);
    //ofRotateX(rotate);
    //ofRotateY(rotate);
    ofScale(0.4,0.4,0.4);
    ofPushMatrix();
    ofTranslate(video.width/2, video.height/2, 0);//move pivot to centre
    //ofRotate(ofGetFrameNum() * .01, 0, 0, 1);//rotate from centre
    ofRotateY(rotate/4);
    ofRotateZ(rotate/4);
    ofRotateX(rotate/4);
    ofPushMatrix();
        video.draw(-video.width/2,-video.height/2);//move back by the centre offset
    ofPopMatrix();
ofPopMatrix();

    //video.draw(0,0);

}
