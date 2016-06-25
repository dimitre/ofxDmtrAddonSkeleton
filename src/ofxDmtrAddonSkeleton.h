/*
ofxDmtrAddonSkeleton 
 Created by Dimitre Lima on 18/05/16.
 Copyright 2016 Dmtr.org. All rights reserved.
 Only for Dmtr.org projects use.
*/

#pragma once
#include "ofMain.h"
#include "ofEvents.h"
#include "ofxDmtrUI.h"

class ofxDmtrAddonSkeleton : public ofBaseApp {
public:
	void		setup();
	void		keyPressed(int key);
	void		keyReleased(int key);
	void		update();
	void		draw();
	void		exit();

	void		onDraw(ofEventArgs &data);
	void		onUpdate(ofEventArgs &data);
	void		onKeyPressed(ofKeyEventArgs &data);
	void		onKeyReleased(ofKeyEventArgs &data);
	void		onExit(ofEventArgs &data);
};