#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    // add our slider to the gui slider: setup(name,defaultval,min,max)
    gui.setup();
    gui.add( freqSlider.setup("Sin Freq",1,.25,10) );
    gui.add( redValue.setup("Red",127,0,255) );
    
    currentState = PATTERN_SCENE;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // sin -1 to 1 and i want a color value 0 and 255
    // ofMap( Srcvalue, minSrc, maxSrc, minDst, maxDst )
    // ofGetElapsedTimef
    float r = ofMap( sin( ofGetElapsedTimef() ),-1,1,0,255);
    float g = ofMap( sin( ofGetElapsedTimef() * .25 ),-1,1,0,255);
    float b = ofMap( sin( ofGetElapsedTimef() * .5 ),-1,1,0,255);
    
    ofSetBackgroundColor(redValue,0,0);
    
    //float freqScale = ofMap(mouseX,0,ofGetWidth(), 1, 20);
    // draw a reactangle in the center
    float size = ofMap( sin( ofGetElapsedTimef() * freqSlider), -1, 1, 20, 50);
    ofDrawRectangle( ofGetWidth()/2,ofGetHeight()/2,size,size);
    
    if( currentState == PATTERN_SCENE){
        ofPushMatrix();
        ofTranslate(20,20);
        
        for(int x = 0; x < ofGetWidth(); x+= 40){
            for(int y = 0; y < ofGetHeight(); y+= 40){
                
                float r = sqrt(x*x + y*y);
                float size = 20 * sin( r + ofGetElapsedTimef() * freqSlider );
                ofDrawRectangle(x,y,size,size);
            }
        }
        ofPopMatrix();
    }
    
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == '1') currentState = PATTERN_SCENE;
    else if(key == '2') currentState = SQUARE_SCENE;
    else if(key == 'f') ofToggleFullscreen();
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
