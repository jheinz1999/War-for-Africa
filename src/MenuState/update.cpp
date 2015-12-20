// update.cpp - Logic for game

#include <iostream>

#include "../MenuState.hpp"
#include "../Game.hpp"

void MenuState::update() {

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	Game::stateManager.setState("playing");

} 
