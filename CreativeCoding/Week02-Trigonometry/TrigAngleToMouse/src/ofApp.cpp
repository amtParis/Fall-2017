#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // setting initial values for x and y of followPos
    followPos = ofPoint( ofGetWidth() / 2 , ofGetHeight() / 2 );
}

//--------------------------------------------------------------
void ofApp::update(){
    
    float pct = .99;
    
    //
    followPos.x = followPos.x * pct + mouseX * (1-pct);
    followPos.y = followPos.y * pct + mouseY * (1-pct);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float angle = atan2(mouseY-followPos.y,mouseX-followPos.x);
    ofPushMatrix();
    ofTranslate(followPos);
        ofRotate( ofRadToDeg(angle) );
        ofDrawRectangle(-20,-20,40,40);
        ofDrawRectangle(30,-10,20,20);
    ofPopMatrix();
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
