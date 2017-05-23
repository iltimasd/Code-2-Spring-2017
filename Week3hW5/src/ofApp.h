#pragma once

#include "ofMain.h"
#include "Planet.h"
#define NUMPLANETS 24

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	//    ofVec3f planet;
	//    ofVec2f moon;
	//    float theta;
	//    float speed;
	//    float radius;
	//    float orbitRadius;
	//    
	//    float x;
	//    float z;

	Planet planet;
	//Planet planet[NUMPLANETS];

	ofVec2f sun;

};