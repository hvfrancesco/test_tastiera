#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(255,255,255);
	ofSetColor(0,0,0);
	ofSetLogLevel(OF_LOG_NOTICE);
	ofNoFill();
	tasto = 0;

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){


	ofSetHexColor(0x000000);

	ofDrawBitmapString("tasto: " + ofToString((int)tasto) + " - " + tasto,20,20);

}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){ 
	tasto = key;
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

