// containsMouse.cpp - Returns true if mouse is within entity

#include <iostream>

#include "../Entity.hpp"
#include "../Engine.hpp"

namespace jge {

	bool Entity::containsMouse() {

	sf::Vector2f mousePos = Engine::window.mapPixelToCoords(sf::Mouse::getPosition(Engine::window));

		if (getBoundingBox().contains(mousePos)) {

		mousePos = sprite->getInverseTransform().transformPoint(mousePos);

		sf::Color pColor = image.getPixel(mousePos.x, mousePos.y);

			if (pColor.a != 0)
			return 1;	

		}

	return 0;

	}

}
