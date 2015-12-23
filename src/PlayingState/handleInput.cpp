// handleInput.cpp

#include <iostream>

#include "../Game.hpp"
#include "../PlayingState.hpp"

void PlayingState::handleInput(sf::Keyboard::Key key) {

	if (key == Game::keyCode["EXIT"]) {

	Game::window.close();

	}

	if (key == Game::keyCode["ATTACK"])
	std::cout << "ATTACK\n";

}
