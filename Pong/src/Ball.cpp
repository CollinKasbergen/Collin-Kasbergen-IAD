#include "Ball.h"
Ball::Ball(){
}

void Ball::setup(){
    x = 800;      // give some random positioning
    y = ofRandom(0, ofGetHeight());

    speedX = ofRandom(-5, 5);           // and random speed and direction
    speedY = ofRandom(-5, 5);

    radius = 20;

    color.set(ofRandom(255),ofRandom(255),ofRandom(255)); // one way of defining digital color is by adddressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
}


void Ball::update(int padleftx,int padlefty,int padrightx, int padrighty){
    x = x + speedX;
    y = y + speedY;

    if(y > ofGetHeight()){
        speedY *= -1;
    }else if(y < 0){
        speedY *= -1;
    }
    if(x > ofGetWidth()){
        speedX *= -1;
    }else if(x < 0){
        speedX *= -1;
    }

    if((x-180) <= 1 && (y-padlefty-300) <= 1){
        speedX *= -1;
        speedY *= -1;
    }

    if(x<10){
        x = 200;
        y = 200/2;
    }
}

void Ball::draw(){
    ofSetColor(color);
    ofCircle(x,y,radius);
}
