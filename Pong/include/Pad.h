#ifndef PAD_H
#define PAD_H

#include "ofMain.h"

class Pad
{
    public:
        Pad();

    void setup();
    void update(int mousex,int mousey);
    void draw();
    int getx();
    int gety();

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

#endif // PAD_H
