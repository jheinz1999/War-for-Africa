// getAnimationCount.cpp - gets the number of animations a sprite contains.

#include "../AnimatedEntity.hpp"

namespace jge {

	int AnimatedEntity::getAnimationCount() {

	return getBoundingBox().height / sizeY;

	}

}
