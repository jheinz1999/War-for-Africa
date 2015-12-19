// getPosition.cpp - Gets position of sprite

#include <SFML/Graphics.hpp>

#include "../Entity.hpp"

namespace jge {

	sf::Vector2f Entity::getPosition() {

	return sprite.getPosition();

	}

} 
