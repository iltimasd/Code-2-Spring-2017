#include"Header1.h";

particle:particle(ofVec2f pos) {
myPos = pos;
myVel = ofVec2F(ofRandom(-2.f, 2.f), ofRandom(-2.f, 2.f));
myLifeSpan = INIT_LIFE;

}

		 void particle : update() {
			 myVel
}