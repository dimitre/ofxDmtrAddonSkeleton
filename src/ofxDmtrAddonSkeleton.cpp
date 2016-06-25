#include "ofxDmtrAddonSkeleton.h"


//--------------------------------------------------------------
void ofxDmtrAddonSkeleton::setup() {
	cout << "ofxDmtrAddonSkeleton setup" << endl;
	ofAddListener(ofEvents().draw,   		this, &ofxDmtrAddonSkeleton::onDraw);
	ofAddListener(ofEvents().update, 		this, &ofxDmtrAddonSkeleton::onUpdate);
	ofAddListener(ofEvents().exit, 			this, &ofxDmtrAddonSkeleton::onExit);
	ofAddListener(ofEvents().keyPressed, 	this, &ofxDmtrAddonSkeleton::onKeyPressed);
	ofAddListener(ofEvents().keyReleased,	this, &ofxDmtrAddonSkeleton::onKeyReleased);
}

void ofxDmtrAddonSkeleton::keyPressed(int key) { }
void ofxDmtrAddonSkeleton::keyReleased(int key) { }
void ofxDmtrAddonSkeleton::update() {
	cout << "update" << endl;
}
void ofxDmtrAddonSkeleton::draw() { }
void ofxDmtrAddonSkeleton::exit() { }

void ofxDmtrAddonSkeleton::onDraw(ofEventArgs &data) { draw(); }
void ofxDmtrAddonSkeleton::onUpdate(ofEventArgs &data) { update(); }
void ofxDmtrAddonSkeleton::onKeyPressed(ofKeyEventArgs &data) { }
void ofxDmtrAddonSkeleton::onKeyReleased(ofKeyEventArgs &data) { }
void ofxDmtrAddonSkeleton::onExit(ofEventArgs &data) {  exit(); }