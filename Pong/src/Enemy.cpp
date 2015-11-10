#include "Enemy.h"
Enemy::Enemy(){
}

void Enemy::setup(){
    x = 800;      // give some random positioning
    y = ofRandom(0, ofGetHeight());

    speedX = 0;           // and random speed and direction
    speedY = ofRandom(-10, 10);

    radius = 40;

    color.set(ofRandom(255),ofRandom(255),ofRandom(255)); // one way of defining digital color is by adddressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
}


void Enemy::update(int mousex,int mousey){
    target = mousey-150;
    if(y < target){
        y++;
    }else if(y > target){
        y--;
    }
}

void Enemy::draw(){
    ofSetColor(color);
    ofRect(x,y,40,300);
}
