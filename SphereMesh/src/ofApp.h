#pragma once

#include "ofMain.h"

#define IMAGE_HEIGHT 560;
#define IMAGE_WIDTH 420;

#define MESH_SIZE 100

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofEasyCam cam;
		ofLight light;

		ofImage image;
        ofSpherePrimitive sphere;

        vector<int> origZ;
};
