// getBoundingBox.cpp - Gets bounding box of entity

#include <SFML/Graphics.hpp>

#include "../Entity.hpp"

namespace jge {

	sf::FloatRect Entity::getBoundingBox() {

	return sprite->getGlobalBounds();

	}

}
