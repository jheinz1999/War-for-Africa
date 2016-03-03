// updateChildren.cpp - Updates children transform to match current transform

#include <iostream>

#include "../FollowableEntity.hpp"

namespace jge {

	void FollowableEntity::updateChildren() {

		if (hasBeenInitialized) {

			if (this->getPosition() != currentPos) {

			sf::Vector2f posChange = getPosition() - currentPos;

			currentPos = getPosition();

			std::map<std::string, FollowableEntity*>::iterator locator = children.begin();

				while (locator != children.end()) {

				std::cout << children.size() << std::endl;

				locator->second->getSprite()->move(posChange);
				locator->second->updateChildren();

				locator++;

				}

			}

			if (currentRotation != getSprite()->getRotation()) {

			float rotChange = getSprite()->getRotation() - currentRotation;

			currentRotation = getSprite()->getRotation();

			std::map<std::string, FollowableEntity*>::iterator locator = children.begin();

				while (locator != children.end()) {

				locator->second->getSprite()->setRotation(currentRotation);
				locator->second->updateChildren();

				locator++;

				}

			}


		}

		else {

		currentPos = getPosition();
		currentRotation = getSprite()->getRotation();
		hasBeenInitialized = 1;

		std::cout << "Just initialized\n";

		}

	}

}
