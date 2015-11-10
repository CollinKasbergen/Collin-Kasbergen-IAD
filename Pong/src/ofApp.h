#pragma once

#include "ofMain.h"

#include "Pad.h"
#include "Ball.h"
#include "Enemy.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		vector<Pad> Pad1;

		vector<Enemy> Enemy1;

		vector<Ball> Ball1;

		int mousex;

		int mousey;

		int padx;

		int pady;

};
