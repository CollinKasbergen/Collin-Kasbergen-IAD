#pragma once

#include "ofMain.h"

#define MESH_WIDTH 480
#define MESH_HEIGHT 300

#define MESH_SIZE_X 50
#define MESH_SIZE_Y 30

#define IMAGE_WIDTH 560
#define IMAGE_HEIGHT 420

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofPlanePrimitive plane;
		ofEasyCam cam;
		ofImage image;
};
