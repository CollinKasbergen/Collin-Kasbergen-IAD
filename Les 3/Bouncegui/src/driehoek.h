#ifndef DRIEHOEK_H
#define DRIEHOEK_H

#include "ofMain.h"

class driehoek
{
    public:
        driehoek();

    void setup(int,int);
    void update();
    void draw();

    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;
    int snelheid;
    protected:
    private:
};

#endif // DRIEHOEK_H
