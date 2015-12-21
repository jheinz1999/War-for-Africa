// setUpdateFrequency.cpp - sets the number of frames to wait before updating sprite

#include "../AnimatedEntity.hpp"

namespace jge {

	void AnimatedEntity::setUpdateFrequency(int x, int numFrames) {

	framesToUpdate[x] = numFrames;

	}

}
