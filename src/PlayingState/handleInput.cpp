// handleInput.cpp

#include "../Game.hpp"
#include "../PlayingState.hpp"

void PlayingState::handleInput(sf::Keyboard::Key key) {

	if (key == Game::keyCode["EXIT"]) {

	Game::window.close();

	}

}
