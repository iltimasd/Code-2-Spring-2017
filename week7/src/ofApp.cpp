#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	bikers.load("images/bikers.jpg");
	gears.load("images/gears.gif");
	tdf.load("images/tdf_1972_poster.jpg");

	tdfSmall.load("images/tdf_1972_poster.jpg");
	tdfSmall.resize(tdfSmall.getWidth() / 4, tdfSmall.getHeight() / 4);
	tdfSmall.setImageType(OF_IMAGE_GRAYSCALE);

	transparency.load("images/transparency.png");
	bikeIcon.load("images/bike_icon.png");
	bikeIcon.setImageType(OF_IMAGE_GRAYSCALE);
}

//--------------------------------------------------------------
void ofApp::update() {
	ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::draw() {


	// getting the ofColors from an image,
	// using the brightness to draw circles
	int w = bikeIcon.getWidth();
	int h = bikeIcon.getHeight();
	float diameter = 10;
	ofSetColor(255, 0, 0);
	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			ofColor cur = bikeIcon.getColor(x, y);
			float size = 1 - (cur.getBrightness() / 255);
			//ofDrawCircle(x * diameter, 500 + y * diameter, 1 + size * diameter / 2);
		}
	}

	// same as above, but this time
	// use the raw data directly with getPixels()
	ofPixels & pixels = bikeIcon.getPixels();
	ofSetColor(0, 223, 255);
	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			int index = y * w + x;
			unsigned char cur = pixels[index];
			float size = 1 - ((float)cur / 255);
			ofRect(200 + x * diameter*2, 500 + y * diameter, 1 + size * diameter / 2, 1 + size * diameter / 2);
		}
	}

	ofSetColor(255);
	bikeIcon.draw(190, 490, 20, 20);
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
