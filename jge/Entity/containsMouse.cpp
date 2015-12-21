// containsMouse.cpp - Returns true if mouse is within entity

#include <iostream>

#include "../Entity.hpp"

namespace jge {

	bool Entity::containsMouse() {

		if (getBoundingBox().contains((sf::Vector2f)sf::Mouse::getPosition())) {

		sf::Vector2f imgCoords;

		imgCoords.x = getPosition().x - getBoundingBox().width / 2;
		imgCoords.y = getPosition().y - getBoundingBox().height / 2;

		sf::Vector2f mousePos = (sf::Vector2f)sf::Mouse::getPosition();
		
		mousePos.x -= imgCoords.x;
		mousePos.y -= imgCoords.y;

		sf::Color pColor = image.getPixel(mousePos.x, mousePos.y);

			if (pColor.a != 0)
			return 1;	

		}

	return 0;

	}

}
