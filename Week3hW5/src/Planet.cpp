#include "Planet.h"

Planet::Planet() {
	theta = 0;
}

void Planet::update() {
	theta += (0.001 * speed);
}

void Planet::orbit(ofVec2f reference) {
	float x = cos(theta) * orbitRadius;
	float y = sin(theta) * orbitRadius;
	position.set(reference.x + x, reference.y + y);
}

void Planet::draw() {
	ofDrawCircle(position, radius);
}