#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowShape(500, 500);
	ofSetWindowPosition(50, 50);

}

//--------------------------------------------------------------
void ofApp::update(){
	noiseX += 0.001;
	noiseY += 0.001;
	noiseZ += 0.001;

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofEnableLighting();
	pointLight.enable();
	pointLight.draw();
	pointLight.setPointLight();
	pointLight.setAttenuation(0.5f);
	pointLight.setPosition(-10,0,0);

	ofDrawSphere(ofGetMouseX(), ofGetMouseY(), ofNoise(noiseZ)*250, 30);
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
