#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    shader.load("","shader.frag");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    shader.begin();
    
    // send the uniform value (invert y for mouse for shader coordinate system)
    shader.setUniform2f("u_mouse", mouseX, ofGetHeight()-mouseY);
    shader.setUniform2f("u_resolution",ofGetWidth(), ofGetHeight());
    
    // shader needs some geometry to be applied to so we draw a fullscreen rectangle
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    
    shader.end();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    // load shader on keypress
    shader.load("","shader.frag");

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
