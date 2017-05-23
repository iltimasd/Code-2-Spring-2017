//pseudocode for forces from http://www.vergenet.net/~conrad/boids/pseudocode.html

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    minDist = 50;
    for(int i = 0; i <NUMBOIDS; i++){
        myBoids.push_back(boid());
    }
	inc = 0.01;
	//yourModel.loadModel("NewSquirrel.3ds", 20);


}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < NUMBOIDS; i++){
       		myBoids[i].v1 = calculateV1(myBoids, i);
		myBoids[i].v2 = calculateV2(myBoids, i); 
		myBoids[i].v3 = calculateV3(myBoids, i);
		//myBoids[i].v4 = ofVec3f(ofSignedNoise(inc + 2, inc));
		myBoids[i].move();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
	//yourModel.drawFaces();
	//yourModel.setPosition(ofGetWidth() / 2, ofGetHeight() / 2, 0);
	ofSetColor(255, 0, 0); //fill color  
	ofLine(ofVec3f(0, 0, 0), ofVec3f(0, 0, -1*depth));
	ofLine(ofVec3f(ofGetWidth(), 0, 0), ofVec3f(ofGetWidth(), 0, -1*depth));
	ofLine(ofVec3f(0, ofGetHeight(), 0), ofVec3f(0, ofGetHeight(), -1*depth));
	ofLine(ofVec3f(ofGetWidth(), ofGetHeight(), 0), ofVec3f(ofGetWidth(), ofGetHeight(), -1*depth));
	ofLine(ofVec3f(0, 0, -1*depth), ofVec3f(ofGetWidth(), 0, -1*depth));
	ofLine(ofVec3f(0, ofGetHeight(), -1*depth), ofVec3f(0, 0, -1*depth));
	ofLine(ofVec3f(ofGetWidth(), ofGetHeight(), -1*depth), ofVec3f(ofGetWidth(),0, -1*depth));
	ofLine(ofVec3f(ofGetWidth(), ofGetHeight(), -1*depth), ofVec3f(0, ofGetHeight(), -1*depth));


    for (int i = 0; i < NUMBOIDS; i++){

        myBoids[i].drawBoid();
    }



}


ofVec3f ofApp::calculateV1(vector<boid> Boids, int index){
    //PROCEDURE rule1(boid bJ)
    //Vector pcJ
    //FOR EACH BOID b
    //IF b != bJ THEN
    //			pcJ = pcJ + b.position
    //END IF
    //END
    
    //pcJ = pcJ / N-1
    
    //RETURN (pcJ - bJ.position) / 100
    
    //END PROCEDURE
    
    ofVec3f pCenter;
	int nieghbors=0;
    for(int i = 0; i < Boids.size(); i++){
        if(i != index){
			if ((Boids[i].pos).distance(Boids[index].pos) < 100) {
				pCenter += Boids[i].pos;
				nieghbors++;
			}
        }
    }
    pCenter = pCenter / (nieghbors-1);
	pCenter -= Boids[index].pos;
	return pCenter.getNormalized();


}

ofVec3f ofApp::calculateV2(vector<boid> Boids, int index){
//    PROCEDURE rule2(boid bJ)
//    Vector c = 0;
//    FOR EACH BOID b
//    IF b != bJ THEN
//				IF |b.position - bJ.position| < 100 THEN
//    c = c - (b.position - bJ.position)
//				END IF
//    END IF
//    END
//
//    RETURN c
//
//    END PROCEDURE

    ofVec3f dist;
  
    for(int i = 0; i < Boids.size(); i++){
        if(i != index){
            if((Boids[i].pos).distance(Boids[index].pos) <15){
                dist = dist - (Boids[i].pos - Boids[index].pos);
            }
        }
    }
    return dist.getNormalized();

}

ofVec3f ofApp::calculateV3(vector<boid> Boids, int index) {
	//    PROCEDURE rule2(boid bJ)
	//    Vector c = 0;
	//    FOR EACH BOID b
	//    IF b != bJ THEN
	//				IF |b.position - bJ.position| < 100 THEN
	//    c = c - (b.position - bJ.position)
	//				END IF
	//    END IF
	//    END
	//
	//    RETURN c
	//
	//    END PROCEDURE

	ofVec3f pv;
	int count=0;

	for (int i = 0; i < Boids.size(); i++) {
		if (i != index) {
			if ((Boids[i].pos).distance(Boids[index].pos) < 300) {
				pv+= Boids[i].vel;
				count++;
			}
		}
	}
	pv /= (count-1);
	//pv /= 8;
	return pv.getNormalized();

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
