// setDimensions.cpp - Sets the dimensions of one frame of sprite.

#include "../AnimatedEntity.hpp"

namespace jge {

	void AnimatedEntity::setDimensions(int x, int y) {

	sizeX = x;
	sizeY = y;

	steps = getSteps();
	numAnimations = getAnimationCount();

	framesToUpdate.resize(numAnimations);

	currentStep = 0;
	currentAnimation = 0;

	} 

}
