#ifndef Ball_H
#define Ball_H

#include "ofMain.h"

class Ball
{
    public:
        Ball();

    void setup();
    void update(int padleftx,int padlefty, int padrightx, int padrighty);
    void draw();

    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;

    int target;

    protected:
    private:
};

#endif
