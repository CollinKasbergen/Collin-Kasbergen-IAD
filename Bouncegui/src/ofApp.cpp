#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {
    gui.setup();
    gui.add(grootte.setup( "grootte", 50, 10, 100 ));
    gui.add(snelheid.setup( "snelheid", 10, 1, 20 ));
}

//--------------------------------------------------------------
void ofApp::update() {
    for (int i=0; i<balls.size(); i++) {
        balls[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw() {
    gui.draw();
    for (int i=0; i<balls.size(); i++) {
        balls[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
    for (int i=0; i<1; i++) {
        Bouncethingy newBall;
        newBall.setup(snelheid,grootte);
        balls.push_back(newBall);
        counter = counter +1;
        cout <<counter<< endl;
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
