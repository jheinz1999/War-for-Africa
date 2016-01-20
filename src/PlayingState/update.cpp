// update.cpp - Logic for game

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"
#include "../MapPiece.hpp"
#include "../Controller.hpp"

void PlayingState::update() {

Game::gameMap.getMapPiece("mauritania")->getSprite()->setColor(Game::gameMap.getMapPiece("mauritania")->getColor());
Game::gameMap.getMapPiece("mali")->getSprite()->setColor(Game::gameMap.getMapPiece("mali")->getColor());	
Game::gameMap.getMapPiece("algeria")->getSprite()->setColor(Game::gameMap.getMapPiece("algeria")->getColor());
Game::gameMap.getMapPiece("niger")->getSprite()->setColor(Game::gameMap.getMapPiece("niger")->getColor());
Game::gameMap.getMapPiece("libya")->getSprite()->setColor(Game::gameMap.getMapPiece("libya")->getColor());

	if (Game::gameMap.getMapPiece("algeria")->containsMouse()) {

	Game::gameMap.getMapPiece("algeria")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("algeria")->setController(Controller::Player1);

		}

	}

	else if (Game::gameMap.getMapPiece("mali")->containsMouse()) {

	Game::gameMap.getMapPiece("mali")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("mali")->setController(Controller::Player2);

		}

	}

	else if (Game::gameMap.getMapPiece("mauritania")->containsMouse()) {

	Game::gameMap.getMapPiece("mauritania")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("mauritania")->setController(Controller::Player3);

		}

	}

	else if (Game::gameMap.getMapPiece("libya")->containsMouse()) {

	Game::gameMap.getMapPiece("libya")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("libya")->setPosition((sf::Vector2f)sf::Mouse::getPosition());
		}

	}

	else if (Game::gameMap.getMapPiece("niger")->containsMouse()) {

	Game::gameMap.getMapPiece("niger")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("niger")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 0));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 255));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::G)) {

	std::cout << Game::gameMap.getMapPiece("libya")->getPosition().x << " " << Game::gameMap.getMapPiece("libya")->getPosition().y << "\n";

	std::cout << Game::gameMap.getMapPiece("niger")->getPosition().x << " " << Game::gameMap.getMapPiece("niger")->getPosition().y << "\n";

	

	}

} 
