#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	pos = ofVec2f(ofGetWindowWidth()*0.75, ofGetWindowHeight()*0.5);
	pos2 = ofVec2f(ofGetWindowWidth()*0.25, ofGetWindowHeight()*0.5);

	vel = ofVec2f(0);
	acc = ofVec2f(0);
	vel2 = ofVec2f(0);
	acc2 = ofVec2f(0);
	r = 50;
	f = 0.99;
}

//--------------------------------------------------------------
void ofApp::update() {
	vel *= f;
	vel2 *= f;
	pos += vel;
	pos2 += vel2;
	ofVec2f p = pos- pos2;
	if (ofDist(pos.x,pos.y, pos2.x,pos2.y) < r*2) {

		vel.x = cos(atan2(p.x, p.y));
		vel.y = sin(atan2(p.x, p.y));

	}

	if (pos.x >= ofGetWindowWidth() || pos.x <= 0) {
		vel.x *= -1;
	}
	if (pos.y >= ofGetWindowHeight() || pos.y <= 0) {
		vel.y *= -1;
	}

	if (pos2.x >= ofGetWindowWidth() || pos2.x <= 0) {
		vel2.x *= -1;
	}
	if (pos2.y >= ofGetWindowHeight() || pos2.y <= 0) {
		vel2.y *= -1;
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(0, 0, 255);

	ofDrawCircle(pos, r);
	ofSetColor(255, 0, 0);
	ofDrawCircle(pos2, r);

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
	ofVec2f mousePos = ofVec2f(x, y);
	ofVec2f acc = mousePos - pos;
	ofVec2f acc2 = mousePos - pos2;
	acc = acc.getNormalized() * 10;
	vel += acc;
	acc2 = acc2.getNormalized() * 10;
	vel2 += acc2;

}
//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

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
