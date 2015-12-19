// update.cpp - Logic for game

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::update() {

	if (Game::gameMap.getMapPiece("algeria")->getBoundingBox().contains((sf::Vector2f)sf::Mouse::getPosition())) {

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("algeria")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

	else if (Game::gameMap.getMapPiece("mali")->getBoundingBox().contains((sf::Vector2f)sf::Mouse::getPosition())) {

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("mali")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

} 
