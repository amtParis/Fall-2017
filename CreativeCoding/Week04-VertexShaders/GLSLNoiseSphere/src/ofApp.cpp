#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    shader.load("shaders/noise");
    sphere.setRadius(80);
    sphere.setResolution(40);
    
    shaderBlurX.load("shaders/shaderBlurX");
    shaderBlurY.load("shaders/shaderBlurY");
    
    fboSphere.allocate(ofGetWidth(), ofGetHeight());
    fboBlurOnePass.allocate(ofGetWidth(), ofGetHeight());
    fboBlurTwoPass.allocate(ofGetWidth(), ofGetHeight());
   
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    fboSphere.begin();
    ofClear(255,255,255, 0);
    ofSetColor(0);
    ofDisableDepthTest();
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofEnableDepthTest();
    cam.begin();
    shader.begin();
        shader.setUniform1f("time",ofGetElapsedTimef());
        sphere.drawWireframe();
    shader.end();
    cam.end();
    fboSphere.end();

    
    
    float blur = ofMap(mouseX, 0, ofGetWidth(), 0, 5, true);
    
    //----------------------------------------------------------
    fboBlurOnePass.begin();
    ofClear(255,255,255, 0);
    shaderBlurX.begin();
    shaderBlurX.setUniform1f("blurAmnt", blur);
    
    fboSphere.draw(0,0);
   
    
    shaderBlurX.end();
    
    fboBlurOnePass.end();
    
    //----------------------------------------------------------
    fboBlurTwoPass.begin();
    ofClear(255,255,255, 0);
    shaderBlurY.begin();
    shaderBlurY.setUniform1f("blurAmnt", blur);
    
    fboBlurOnePass.draw(0, 0);
    
    shaderBlurY.end();
    
    fboBlurTwoPass.end();
    
    //----------------------------------------------------------
    ofSetColor(ofColor::white);
    fboBlurTwoPass.draw(0, 0);
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    shader.load("shaders/noise");
    shaderBlurX.load("shaders/shaderBlurX");
    shaderBlurY.load("shaders/shaderBlurY");

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
