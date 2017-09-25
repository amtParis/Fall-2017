#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    shader.load("shader.vert","shader.frag");
    
    img.load("stripes.jpg");
    img.resize(50, 50);
    
    // needs to update the texture
    img.update();
    
    plane.set(500, 500, 50, 50);
    
    //
    plane.mapTexCoordsFromTexture(img.getTexture());
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableDepthTest();
    img.bind();

    cam.begin();
    shader.begin();
        shader.setUniform1f("time", ofGetElapsedTimef());
        plane.draw();
    shader.end();
    cam.end();
    
    ofDisableDepthTest();

    img.draw(0,0,100,100);
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
