// draw.cpp - Draws entity object

#include <SFML/Graphics.hpp>

#include "../Entity.hpp"

namespace jge {

	void Entity::draw(sf::RenderWindow &window) {

	window.draw(*sprite);

	}

}
