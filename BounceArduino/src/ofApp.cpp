#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {
    for (int i=0; i<1; i++) {
        Ball newBall;
        newBall.setup();
        balls.push_back(newBall);
        counter = counter +1;
        cout <<counter<< endl;
    }
}

//--------------------------------------------------------------
void ofApp::update() {
    for (int i=0; i<balls.size(); i++) {
        balls[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw() {
    for (int i=0; i<balls.size(); i++) {
        balls[i].draw();
    }
}

void ofApp::light() {
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
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