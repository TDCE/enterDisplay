#pragma once

#include "ofMain.h"

class rectPanel
{
private:
	ofVec3f xyzPoint;
	ofVec3f xyzSize;
	ofColor baseColor;
	float baeBrightness;
	float baseColorSpeed;
	ofColor color;
public:
	rectPanel(ofVec3f xyzPoint, ofVec3f xizSize, ofColor baseColor);
	~rectPanel();
  
	void update();
	void draw();
	ofVec3f getXYZPoint();
	void moveZ(int zPoint);
	void addBrightness(int vol);
};
