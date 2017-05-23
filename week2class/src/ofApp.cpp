#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//ofSetFrameRate(60);
	pos = ofVec2f(100, 100);
	initVel = ofVec2f(1,-1);
	g = 9.8;
	f = 1;
	vel = ofVec2f(1, -10);
	acc = ofVec2f(0, g);


}

//--------------------------------------------------------------
void ofApp::update(){
	
	t = ofGetElapsedTimef();
	pos += vel;
	vel += acc*t;

	if (pos.y >= ofGetWindowHeight()) {
		pos.y = ofGetWindowHeight() - 2;
		initVel.y = initVel.y*-1 * f;
		initVel.x *= f;
		ofResetElapsedTimeCounter();

	}
	if (pos.x >= ofGetWindowWidth()) {
		pos.x = ofGetWindowWidth() - 2;
		initVel.x *= -1;
		ofResetElapsedTimeCounter();
	}
	if (pos.x <= 0) {
		pos.x = 2;
		initVel.x *= -1;
		ofResetElapsedTimeCounter();
	}

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255, 50, 50);
	ofDrawCircle(pos, 10);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
