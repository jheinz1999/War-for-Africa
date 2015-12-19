// setPosition.cpp - Sets entity position.

#include <SFML/Graphics.hpp>

#include "../Entity.hpp"

namespace jge {

	void Entity::setPosition(sf::Vector2f pos) {

	sprite.setPosition(pos);

	}

}
