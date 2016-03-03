// update.cpp - Logic for game

#include <iostream>

#include "../MenuState.hpp"
#include "../Game.hpp"
#include "../../jge/AnimatedEntity.hpp"
#include "../../jge/FollowableEntity.hpp"

void MenuState::update(sf::Time dt) {

handleInput();

Game::entityManager.getDerivedEntity<jge::AnimatedEntity*>("rotating earth")->updateAnimation(0);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {

	Game::stateManager.setState("playing");
	Game::entityManager.deleteEntity("rotating earth");

	}

} 
