// scale.cpp - scales entity sprite

#include <SFML/Graphics.hpp>
#include <iostream>

#include "../Entity.hpp"
#include "../Engine.hpp"

namespace jge {

	void Entity::scale(float s1, float s2) {

	sprite->setScale(s1, s2);
	sprite->setOrigin(getBoundingBox().width / 2, getBoundingBox().height / 2);

	}

} 
