// update.cpp - Logic for game

#include <iostream>

#include "../MenuState.hpp"
#include "../Game.hpp"
#include "../../jge/AnimatedEntity.hpp"

void MenuState::update() {

Game::entityManager.getDerivedEntity<jge::AnimatedEntity*>("rotating earth")->updateAnimation(0);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {

	Game::stateManager.setState("playing");
	Game::stateManager.getCurrentState()->loadResources();
	Game::entityManager.deleteEntity("rotating earth");

	}

} 
