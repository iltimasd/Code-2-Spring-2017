#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//    planet.set(ofGetWindowWidth()/2,ofGetWindowHeight()/2, 0);
	//    speed = 10;
	//    radius = 50;
	//    orbitRadius = 200;

	sun.set(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
	//for (int i=0; i < NUMPLANETS; i++){
	planet.speed = 10;
	planet.radius = 20;
	planet.orbitRadius = 200;
	//}
}

//--------------------------------------------------------------
void ofApp::update() {
	//    theta+=0.001 * speed;
	//    
	//    x = cos(theta) * orbitRadius;
	//    z = sin(theta) * orbitRadius;
	//    
	//    cout<<z<<endl;
	//    cout<<"planet z: " <<planet.z<<endl;
	planet.orbit(sun);
	planet.update();
}

//--------------------------------------------------------------
void ofApp::draw() {
	//    if(z > 0){
	//    ofSetColor(255);
	//    ofDrawCircle(planet,radius);
	//    ofSetColor(0, 0, 255);
	//    ofDrawCircle(planet.x + x,planet.y, z, radius);
	//    } else {
	//        ofSetColor(0, 0, 255);
	//        ofDrawCircle(planet.x + x,planet.y, z, radius);
	//        ofSetColor(255);
	//        ofDrawCircle(planet,radius);
	//    }
	ofDrawCircle(sun, 50);
	planet.draw();
}

//--------------------------------------------------------------