#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    shader.load("shader.vert","shader.frag");
    image.load("otter.jpg");

    plane.set(image.getWidth(), image.getHeight(), 10, 10);
    plane.mapTexCoordsFromTexture(image.getTexture());
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    image.getTexture().bind();
    shader.begin();

    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    plane.draw();
    ofPopMatrix();
    
    shader.end();
    image.getTexture().unbind();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    shader.load("shader.vert","shader.frag");

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
