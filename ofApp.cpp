#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0, 0, 0);
	panelSize = 20;
	for (size_t x = panelSize/2; x < ofGetWidth(); x += panelSize){
		for (size_t y = panelSize/2; y < ofGetHeight(); y += panelSize) {
			ofVec3f point = ofVec3f(x, y, 0);
			ofVec3f size = ofVec3f(panelSize, panelSize, 0);
			ofColor color = ofColor::fromHsb(85, 255, 100);
			rectPanels.push_back(new rectPanel(point, size, color));
		}  
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (size_t i = 0; i < rectPanels.size(); i++) {
		rectPanels[i]->update();
		/*if (500 < rectPanels[i]->getXYZPoint().x && rectPanels[i]->getXYZPoint().x < 700) {
			rectPanels[i]->setColor();
		}*/
		int x = rectPanels[i]->getXYZPoint().x;
		int y = rectPanels[i]->getXYZPoint().y;
		if (x < mouseX + 200 && mouseX - 200 < x && y < mouseY + 200 && mouseY -200 < y) {
			rectPanels[i]->addBrightness(20);
			rectPanels[i]->moveZ();
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	for (size_t i = 0; i < rectPanels.size(); i++){
		rectPanels[i]->draw();
	}
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
