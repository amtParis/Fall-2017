#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(40);
    ofSetBackgroundColor(0);
    ofEnableAntiAliasing();
    
    origin = ofPoint(100,ofGetHeight()/2);
    radius = 50;
    angle = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    angle += .025;
    sinPts.push_back( ofPoint(angle*radius,sin(angle)*radius) );
    
    if(angle >= TWO_PI*2){
        angle = 0;
        sinPts.clear();
    }
    ofLog() << (origin.x + TWO_PI*2*radius);
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    // draw circle
    ofNoFill();
    ofDrawCircle(origin.x,origin.y,radius);
    
    // draw moving point
    ofPoint dst = ofPoint(origin.x + radius * cos(angle),origin.y + radius * sin(angle));
    ofFill();
    ofDrawCircle(dst.x ,dst.y,2);
    ofDrawLine(origin,dst);
    
    // draw line at amplitude of sin wave
    ofDrawLine(dst,ofPoint(origin.x + TWO_PI*2*radius + radius, dst.y));
    
    // draw sin wave
    ofNoFill();
    
    ofPushMatrix();
    ofTranslate(origin.x+radius,origin.y);
    
    ofBeginShape();
    for(int i = 0; i < sinPts.size(); i++){
        ofVertex(sinPts[i].x,sinPts[i].y);
    }
    ofEndShape();
    
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
