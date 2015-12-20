// constructor.cpp - Constructor for Entity class

#include "../Entity.hpp"

namespace jge {

	Entity::Entity() {

	sprite = new sf::Sprite();

	}

	Entity::~Entity() {

	delete sprite;

	}

}
