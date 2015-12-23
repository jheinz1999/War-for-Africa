// getCurrentWindowSize.cpp - Retrieves current size of window

#include <SFML/Graphics.hpp>

#include "../Engine.hpp"

namespace jge {

	sf::VideoMode Engine::getCurrentWindowSize() {

	return sf::VideoMode(window.getDefaultView().getSize().x, window.getDefaultView().getSize().y);

	}

}
