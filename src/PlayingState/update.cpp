// update.cpp - Logic for game

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"
#include "../../jge/AnimatedEntity.hpp"

void PlayingState::update() {

Game::gameMap.getMapPiece("mauritania")->getSprite()->setColor(sf::Color(255, 255, 255, 255));
Game::gameMap.getMapPiece("mali")->getSprite()->setColor(sf::Color(255, 255, 255, 255));	
Game::gameMap.getMapPiece("algeria")->getSprite()->setColor(sf::Color(255, 255, 255, 255));

	if (Game::gameMap.getMapPiece("algeria")->containsMouse()) {

	Game::gameMap.getMapPiece("algeria")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("algeria")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

	else if (Game::gameMap.getMapPiece("mali")->containsMouse()) {

	Game::gameMap.getMapPiece("mali")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("mali")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

	else if (Game::gameMap.getMapPiece("mauritania")->containsMouse()) {

	Game::gameMap.getMapPiece("mauritania")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("mauritania")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 0));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 255));

} 
