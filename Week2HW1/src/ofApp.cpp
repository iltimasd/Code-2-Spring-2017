#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//ofSetFrameRate(60);
	pos = ofVec2f(100, 100);
	initVel = ofVec2f(1, -1);
	g = 4;
	f = .9;
	vel = ofVec2f(4, -4);
	acc = ofVec2f(0, g);


}

//--------------------------------------------------------------
void ofApp::update() {

	t = ofGetElapsedTimef();
	pos += vel;
	vel = initVel + acc * t;

	if (pos.y >= ofGetWindowHeight()) {
		pos.y = ofGetWindowHeight() - 2;
		initVel.y = initVel.y*-1 * f;
		initVel.x *= f;
		ofResetElapsedTimeCounter();

	}
	if (pos.y < 0) {
		pos.y =  2;
		initVel.y *= -1 * f;
		initVel.x *= f;
		ofResetElapsedTimeCounter();

	}
	if (pos.x >= ofGetWindowWidth()) {
		pos.x = ofGetWindowWidth() - 2;
		initVel.x *= -1*f;
		initVel.y *= f;
		ofResetElapsedTimeCounter();
	}
	if (pos.x <= 0) {
		pos.x = 2;
		initVel.x *= -1*f;
		initVel.y *= f;

		ofResetElapsedTimeCounter();
	}
	cout << acc << vel << endl;

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(255, 50, 50);
	ofDrawCircle(pos, 10);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
	ofVec2f mousePos = ofVec2f(x, y);
	ofVec2f newacc = mousePos - pos;
	newacc = newacc.getNormalized()*100;
	vel += newacc;
	cout << newacc << endl;
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
