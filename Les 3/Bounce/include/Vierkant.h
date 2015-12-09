#ifndef VIERKANT_H
#define VIERKANT_H

#include "ofMain.h"

class Vierkant
{
public:
    Vierkant();

    void setup();
    void update();
    void draw();

    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;
protected:
private:
};

#endif // DRIEHOEK_H
