// scale.cpp - scales entity sprite

#include <SFML/Graphics.hpp>

#include "../Entity.hpp"

namespace jge {

	void Entity::scale(float s1, float s2) {

	sprite->setScale(s1, s2);

	}

} 
