// updateAnimation.cpp - Updates sprite animation

#include <iostream>

#include "../AnimatedEntity.hpp"

namespace jge {

	void AnimatedEntity::updateAnimation(int x) {

		if (currentAnimation != x) {

		currentStep = 0;
		currentAnimation = x;

		}

		if (framesSinceUpdate == framesToUpdate[x]) {

		getSprite()->setTextureRect(sf::IntRect(currentStep * sizeX, currentAnimation * sizeY, sizeX, sizeY));

		framesSinceUpdate = 0;

		currentStep++;

		std::cout << currentStep * sizeX << " " << currentAnimation * sizeY << " " << " " << sizeX << " " << sizeY << "\n";

		}

		if (currentStep == steps)
		currentStep = 0;

	framesSinceUpdate++;

	}

}
