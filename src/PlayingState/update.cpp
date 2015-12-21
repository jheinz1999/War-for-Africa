// update.cpp - Logic for game

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"
#include "../../jge/AnimatedEntity.hpp"

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

	else if (Game::gameMap.getMapPiece("mauritania")->getBoundingBox().contains((sf::Vector2f)sf::Mouse::getPosition())) {

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("mauritania")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 0));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 255));

} 
