#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    grabber.setDeviceID(0);
    grabber.initGrabber(CAM_WIDTH,CAM_HEIGHT);
    grabber.setDesiredFrameRate(30);

    workspace.allocate(CAM_WIDTH, CAM_HEIGHT, OF_IMAGE_COLOR);
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();

    if(grabber.isFrameNew()){
        ofPixels pixels = grabber.getPixelsRef();

        for(int y=0; y<pixels.getHeight(); y++){
            for(int x=0; x<pixels.getWidth(); x++){
                ofColor col = pixels.getColor(x,y);
                if(col.r > col.g && col.r > col.b){
                    col.r = 255-(col.r/2);
                    col.g = col.g/10;
                    col.b = col.b/10;
                }
                if(col.g > col.r && col.g > col.b){
                    col.r = col.r/10;
                    col.g = 255-(col.g/2);
                    col.b = col.b/10;
                }
                if(col.b > col.r && col.b > col.g){
                    col.r = 255-(col.r/2);
                    col.g = 255-(col.g/2);
                    col.b = col.b/10;
                }
                //col.r = 255 - col.r;
                //col.g = 255 - col.g;
                //col.b = 255 - col.b;
                //col.r = x - col.r;
                //col.g = y - col.g;
                //col.b = x - col.b;

                workspace.setColor(x,y,col);
            }
        }

        image.setFromPixels(workspace);
        //image.setFromPixels(pixels);
        //image.mirror(false, true);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    grabber.draw(0,0);

    image.draw(CAM_WIDTH,0);
}
