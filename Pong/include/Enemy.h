#ifndef Enemy_H
#define Enemy_H

#include "ofMain.h"

class Enemy
{
    public:
        Enemy();

    void setup();
    void update(int mousex,int mousey);
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
