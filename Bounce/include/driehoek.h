#ifndef DRIEHOEK_H
#define DRIEHOEK_H

#include "ofMain.h"

class driehoek
{
    public:
        driehoek();

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
