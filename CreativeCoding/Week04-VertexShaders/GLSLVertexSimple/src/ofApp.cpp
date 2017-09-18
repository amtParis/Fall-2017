#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    shader.load("shader.vert","shader.frag");

    //plane.set(500, 500, 25, 25, OF_PRIMITIVE_TRIANGLES);
    
    sphere.setRadius( 250 );
    
    ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableDepthTest();
    
    cam.begin();
    
    shader.begin();
        shader.setUniform1f("time", ofGetElapsedTimef());
        sphere.drawWireframe();
        //plane.drawWireframe();
    shader.end();
    
    cam.end();
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
