// getCurrentScreenSize.cpp - Retrieves current desktop screen resolution.

#include <SFML/Graphics.hpp>

#include "../Engine.hpp"

namespace jge {

	sf::VideoMode Engine::getCurrentScreenSize() {

	return sf::VideoMode::getDesktopMode();

	}

}
