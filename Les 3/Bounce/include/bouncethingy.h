#ifndef _Bouncethingy
#define _Bouncethingy

#include "ofMain.h"

#include "Ball.h"
#include "driehoek.h"
#include "vierkant.h"



class Bouncethingy
{

public:

    Bouncethingy();

    void setup(int id);
    void update();
    void draw();

    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;
    int vorm;
    int id;

    vector<Ball> ballen;
    vector<driehoek> driehoeken;
    vector<Vierkant> vierkanten;

private:

};
#endif

