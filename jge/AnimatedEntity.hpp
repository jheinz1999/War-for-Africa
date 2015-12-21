// AnimatedEntity.hpp - Base class for any animated entities

#ifndef __ANIMATEDENTITY_HPP__
#define __ANIMATEDENTITY_HPP__

#include "Entity.hpp"

namespace jge {

	class AnimatedEntity: public Entity {

		public:

		virtual void setDimensions(int x, int y);
		virtual void updateAnimation(int x);
		virtual void setUpdateFrequency(int x, int numFrames);

		private:

		int getSteps();
		int getAnimationCount();

		int sizeX, sizeY;	
		int steps, currentStep;
		int numAnimations, currentAnimation;
		std::vector<int> framesToUpdate;
		int framesSinceUpdate;

	};

}

#endif
