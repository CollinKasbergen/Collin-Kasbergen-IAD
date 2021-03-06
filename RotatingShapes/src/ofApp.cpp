#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);

    drawGrid = true;

    gui.setup();
    gui.add(rotateSpeedX.set("X",0,0,9.0));
    gui.add(rotateSpeedY.set("Y",0,0,9.0));
    gui.add(rotateSpeedZ.set("Z",0,0,9.0));

    rotationX=0;
    rotationY=0;
    rotationZ=0;
    }


//--------------------------------------------------------------
void ofApp::update(){
    rotationX += rotateSpeedX;
    rotationY += rotateSpeedY;
    rotationZ += rotateSpeedZ;
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();

    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

    ofRotateX(rotationX);
    ofRotateY(rotationY);
    ofRotateZ(rotationZ);

    if(drawGrid) ofDrawGrid(200);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key =='g'){
        drawGrid=!drawGrid;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
