#include "rectPanel.h"

rectPanel::rectPanel(ofVec3f _xyzPoint, ofVec3f _xyzSize, ofColor _baseColor) {
	xyzPoint = _xyzPoint;
	xyzSize = _xyzSize;
	baseColor = _baseColor;
	baeBrightness = baseColor.getBrightness();
	baseColorSpeed = 0.3;
	color = baseColor;
}

rectPanel::~rectPanel() {
}

void rectPanel::update() {
	baeBrightness += baseColorSpeed;
	if (baseColor.getBrightness() + 40 < baeBrightness) {
		baseColorSpeed *= -1;
	}
	if (baeBrightness < baseColor.getBrightness() - 40) {
		baseColorSpeed *= -1;
	}
	color.setBrightness(int(baeBrightness));
}

void rectPanel::draw() {
	ofSetColor(color);
	ofDrawBox(xyzPoint.x, xyzPoint.y, xyzPoint.z, xyzSize.x, xyzSize.y, xyzSize.z);
}

ofVec3f rectPanel::getXYZPoint() {
	return xyzPoint;
}

void rectPanel::addBrightness(int vol) {
	color.setBrightness(color.getBrightness() + vol);
}

void rectPanel::moveZ() {
	xyzPoint.z = -10;
}