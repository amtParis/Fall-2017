#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    currentScene = IDLE;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    if(currentScene == IDLE){
        // updates for idle scene
    
    }else if(currentScene == SKY_SCENE){
        // updates for sky scene
    
    }else if(currentScene == SUN_SCENE ){
        // updates for sun scene
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // draws for each scene:
    
    if(currentScene == IDLE){
        
        ofBackground(0);
        ofSetColor(255);
        ofDrawBitmapString("Idle mode: Press keys 1-3 to change.", 100, 100);
    
    }else if(currentScene == SKY_SCENE){
    
        ofBackgroundGradient( ofColor(66, 229, 244), ofColor(255,255,255) );
    
    }else if(currentScene == SUN_SCENE ){
        
        ofBackgroundGradient(ofColor(255, 252, 104), ofColor(255, 68, 227) );
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 200 + sin(ofGetElapsedTimef()) * 100);
    
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    // use key press to change scenes and make any operations that
    // only need to happen on change (not update or draw )
    switch(key){
        case '1':
            currentScene = IDLE;
            break;
        case '2':
            currentScene = SKY_SCENE;
            break;
        case '3':
            currentScene = SUN_SCENE;
            ofSetCircleResolution(100);
            break;
    }
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
