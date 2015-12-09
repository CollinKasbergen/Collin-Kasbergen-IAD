#include "Planet.h"

Planet::Planet() {
    //ctor
    rotation = 0.0;
}

Planet::~Planet() {
}

void Planet::setup(string name) {
    planetParamGroup.setName(name);
    planetParamGroup.add(rotateSpeed.set("speed",0,0,9.0));
    planetParamGroup.add(distance.set("distance",0,0,900));
    planetParamGroup.add(red.set("R",255,0,255));
    planetParamGroup.add(green.set("G",255,0,255));
    planetParamGroup.add(blue.set("B",255,0,255));

    image.loadImage("dave.jpg");
}

void Planet::update() {
    rotation++;
}

void Planet::draw() {
    // dit zorgt er voor dat de texture passend gescaled wordt
    glMatrixMode(GL_TEXTURE);
    glPushMatrix();
    ofScale(image.getWidth(),image.getHeight());
    glMatrixMode(GL_MODELVIEW);

    ofSetColor(red,green,blue);
    image.bind();
    ofRotate(rotation*rotateSpeed);
    ofSphere(distance,0,0,30);

    // dit maakt de texture-schaal-instellingen van boven weer ongedaan
    glMatrixMode(GL_TEXTURE);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
}

