// update.cpp - Logic for game

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"
#include "../MapPiece.hpp"
#include "../Controller.hpp"

void PlayingState::update() {

setSpriteColors();

	if (Game::gameMap.getMapPiece("algeria")->containsMouse()) {

	Game::gameMap.getMapPiece("algeria")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("mali")->containsMouse()) {

	Game::gameMap.getMapPiece("mali")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("mauritania")->containsMouse()) {

	Game::gameMap.getMapPiece("mauritania")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("libya")->containsMouse()) {

	Game::gameMap.getMapPiece("libya")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("niger")->containsMouse()) {

	Game::gameMap.getMapPiece("niger")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("burkina faso")->containsMouse()) {

	Game::gameMap.getMapPiece("burkina faso")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("chad")->containsMouse()) {

	Game::gameMap.getMapPiece("chad")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("cote divoire")->containsMouse()) {

	Game::gameMap.getMapPiece("cote divoire")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("egypt")->containsMouse()) {

	Game::gameMap.getMapPiece("egypt")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("senegal")->containsMouse()) {

	Game::gameMap.getMapPiece("senegal")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("sudan")->containsMouse()) {

	Game::gameMap.getMapPiece("sudan")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		if (Game::isMouseDown) {

		Game::gameMap.getMapPiece("sudan")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

	else if (Game::gameMap.getMapPiece("guinea")->containsMouse()) {

	Game::gameMap.getMapPiece("guinea")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 0));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 255));

} 

void PlayingState::setSpriteColors() {

Game::gameMap.getMapPiece("mauritania")->getSprite()->setColor(Game::gameMap.getMapPiece("mauritania")->getColor());
Game::gameMap.getMapPiece("mali")->getSprite()->setColor(Game::gameMap.getMapPiece("mali")->getColor());	
Game::gameMap.getMapPiece("algeria")->getSprite()->setColor(Game::gameMap.getMapPiece("algeria")->getColor());
Game::gameMap.getMapPiece("burkina faso")->getSprite()->setColor(Game::gameMap.getMapPiece("burkina faso")->getColor());
Game::gameMap.getMapPiece("chad")->getSprite()->setColor(Game::gameMap.getMapPiece("chad")->getColor());
Game::gameMap.getMapPiece("cote divoire")->getSprite()->setColor(Game::gameMap.getMapPiece("cote divoire")->getColor());
Game::gameMap.getMapPiece("egypt")->getSprite()->setColor(Game::gameMap.getMapPiece("egypt")->getColor());
Game::gameMap.getMapPiece("senegal")->getSprite()->setColor(Game::gameMap.getMapPiece("senegal")->getColor());
Game::gameMap.getMapPiece("sudan")->getSprite()->setColor(Game::gameMap.getMapPiece("sudan")->getColor());
Game::gameMap.getMapPiece("libya")->getSprite()->setColor(Game::gameMap.getMapPiece("libya")->getColor());
Game::gameMap.getMapPiece("niger")->getSprite()->setColor(Game::gameMap.getMapPiece("niger")->getColor());
Game::gameMap.getMapPiece("guinea")->getSprite()->setColor(Game::gameMap.getMapPiece("guinea")->getColor());

}
