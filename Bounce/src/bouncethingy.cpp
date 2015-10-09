#include "Bouncethingy.h"
Bouncethingy::Bouncethingy(){
}

void Bouncethingy::setup(int id){
    vorm = ofRandom(0, 3);
    switch(vorm)
   {
   case 0 :
       for (int i=0; i<1; i++) {
        Ball newBall;
        newBall.setup();
        ballen.push_back(newBall);
    }
      break;
    case 1 :
             for (int i=0; i<1; i++) {
        driehoek newBall;
        newBall.setup();
        driehoeken.push_back(newBall);
    }
      break;
    case 2 :
        for (int i=0; i<1; i++) {
        Vierkant newBall;
        newBall.setup();
        vierkanten.push_back(newBall);
    }
      //cout << "Vierkant!" << endl;
      break;
   }
}


void Bouncethingy::update(){
    switch(vorm)
   {
   case 0 :
       for (int i=0; i<ballen.size(); i++) {
        ballen[i].update();
    }
      //cout << "Driekhoek!" << endl;
      break;
    case 1 :
        for (int i=0; i<driehoeken.size(); i++) {
        driehoeken[i].update();
    }
      //cout << "Rondje!" << endl;
      break;
    case 2 :
        for (int i=0; i<vierkanten.size(); i++) {
        vierkanten[i].update();
    }
      //cout << "Vierkant!" << endl;
      break;
   }
}

void Bouncethingy::draw(){
    switch(vorm)
   {
   case 0 :
       for (int i=0; i<ballen.size(); i++) {
        ballen[i].draw();
    }
      //cout << "Driekhoek!" << endl;
      break;
    case 1 :
        for (int i=0; i<driehoeken.size(); i++) {
        driehoeken[i].draw();
    }
      //cout << "Rondje!" << endl;
      break;
    case 2 :
        for (int i=0; i<vierkanten.size(); i++) {
        vierkanten[i].draw();
    }
      //cout << "Vierkant!" << endl;
      break;
   }
}
