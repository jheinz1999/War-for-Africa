// handleInput.cpp

#include <iostream>

#include "../Game.hpp"
#include "../PlayingState.hpp"

void PlayingState::handleInput() {

	if (sf::Keyboard::isKeyPressed(Game::keyCode["EXIT"])) {

	Game::window.close();

	}

}
