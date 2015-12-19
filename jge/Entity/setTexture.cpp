// setTexture.cpp - Sets entity texture

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

#include "../Entity.hpp"

namespace jge {

	bool Entity::setTexture(std::string tString) {

		if (!texture.loadFromFile(tString)) { // Error handling

		std::cout << "ERROR: TEXTURE DOES NOT EXIST\n";
		return 0;

		}

	sprite.setTexture(texture);

	return 1;

	}

}
