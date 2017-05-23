#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	pos = ofVec2f(ofGetWindowHeight()*0.5, ofGetWindowWidth()*0.5);
	vel = ofVec2f(0);
	acc= ofVec2f(0);
	r = 50;
	f = 0.9;
}

//--------------------------------------------------------------
void ofApp::update(){
	vel *= f;
	pos += vel;
	if (pos.x >= ofGetWindowWidth() || pos.x <= 0) {
		vel.x *= -1;
	}
	if (pos.y >= ofGetWindowHeight() || pos.y <= 0) {
		vel.y *= -1;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofDrawCircle(pos, r);
	cout << acc << endl;
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
void ofApp::mousePressed(int x, int y, int button) {


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
