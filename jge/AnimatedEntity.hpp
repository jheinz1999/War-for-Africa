// AnimatedEntity.hpp - Base class for any animated entities

#ifndef __ANIMATEDENTITY_HPP__
#define __ANIMATEDENTITY_HPP__

#include "Entity.hpp"

namespace jge {

	class AnimatedEntity: public Entity { // Inherits from Entity

		public:

		virtual void setDimensions(int x, int y); // sets dimensions of single entity
		virtual void updateAnimation(int x); // Updates animation. X is the number of the animation (0 is the top animation)
		virtual void setUpdateFrequency(int x, int numFrames); // Sets the update frequency of a particular animation. X is the animation number, and numFrames is the number of frames to wait before updating the animation.

		private:

		int getSteps(); // retrieves the number of steps in a single animation
		int getAnimationCount(); // Retrieves the total number of animations

		int sizeX, sizeY; // Size of single sprite
		int steps, currentStep; // keep track of animation steps
		int numAnimations, currentAnimation; // Keep track of animations
		std::vector<int> framesToUpdate; // Vector containing the number of frames to wait before updating for each animation
		int framesSinceUpdate; // Number of frames since last sprite update

	};

}

#endif
