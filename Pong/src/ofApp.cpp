#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
        Pad thepad;
        thepad.setup();
        Pad1.push_back(thepad);

        Enemy theenemy;
        theenemy.setup();
        Enemy1.push_back(theenemy);

        Ball theball;
        theball.setup();
        Ball1.push_back(theball);

        int padx;

        int pady;
}

//--------------------------------------------------------------
void ofApp::update(){
    Pad1[0].update(mousex,mousey);
    pady = Pad1[0].gety();
    Enemy1[0].update(mousex,mousey);
    Ball1[0].update(0,pady,0,0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    Pad1[0].draw();
    Enemy1[0].draw();
    Ball1[0].draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    mousex = x;
    mousey = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
