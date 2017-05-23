#pragma once
#include"ofMain.h"

class particle
{
public:
	particle(ofVec2f pos);
	void update();
	void draw();
	void applyForce();
	ofVec2f myPos, myVel, myAccel;
	float myLifeSpan;
	const float INIT_LIFE=100.0f;
private:
	

};

