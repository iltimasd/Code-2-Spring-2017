
#pragma once
#include "ofMain.h"

class Planet {
public:
	Planet();
	void update();
	void orbit(ofVec2f reference);
	void draw();

	ofVec2f position;
	ofVec2f reference;
	float radius;
	float orbitRadius;
	float speed;
	float theta;
};