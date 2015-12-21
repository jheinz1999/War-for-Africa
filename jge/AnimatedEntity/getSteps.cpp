// getSteps.cpp - returns the number of animation steps

#include "../AnimatedEntity.hpp"

namespace jge {

	int AnimatedEntity::getSteps() {

	return getBoundingBox().width / sizeX;

	}

}
