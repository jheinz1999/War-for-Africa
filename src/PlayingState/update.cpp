// update.cpp - Logic for game

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"
#include "../MapPiece.hpp"
#include "../Controller.hpp"

void PlayingState::update() {

Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 0));

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

	}

	else if (Game::gameMap.getMapPiece("guinea")->containsMouse()) {

	Game::gameMap.getMapPiece("guinea")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("morocco")->containsMouse()) {

	Game::gameMap.getMapPiece("morocco")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("nigeria")->containsMouse()) {

	Game::gameMap.getMapPiece("nigeria")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("ethiopia")->containsMouse()) {

	Game::gameMap.getMapPiece("ethiopia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("somalia")->containsMouse()) {

	Game::gameMap.getMapPiece("somalia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("tunisia")->containsMouse()) {

	Game::gameMap.getMapPiece("tunisia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("western sahara")->containsMouse()) {

	Game::gameMap.getMapPiece("western sahara")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("ghana")->containsMouse()) {

	Game::gameMap.getMapPiece("ghana")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("liberia")->containsMouse()) {

	Game::gameMap.getMapPiece("liberia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("sierra leone")->containsMouse()) {

	Game::gameMap.getMapPiece("sierra leone")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("cameroon")->containsMouse()) {

	Game::gameMap.getMapPiece("cameroon")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("uganda")->containsMouse()) {

	Game::gameMap.getMapPiece("uganda")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("central republic")->containsMouse()) {

	Game::gameMap.getMapPiece("central republic")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("congo")->containsMouse()) {

	Game::gameMap.getMapPiece("congo")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("gabon")->containsMouse()) {

	Game::gameMap.getMapPiece("gabon")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("kenya")->containsMouse()) {

	Game::gameMap.getMapPiece("kenya")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("democratic congo")->containsMouse()) {

	Game::gameMap.getMapPiece("democratic congo")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("angola")->containsMouse()) {

	Game::gameMap.getMapPiece("angola")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("namibia")->containsMouse()) {

	Game::gameMap.getMapPiece("namibia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("tanzania")->containsMouse()) {

	Game::gameMap.getMapPiece("tanzania")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("zambia")->containsMouse()) {

	Game::gameMap.getMapPiece("zambia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("mozambique")->containsMouse()) {

	Game::gameMap.getMapPiece("mozambique")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("zimbabwe")->containsMouse()) {

	Game::gameMap.getMapPiece("zimbabwe")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("botswana")->containsMouse()) {

	Game::gameMap.getMapPiece("botswana")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	else if (Game::gameMap.getMapPiece("south africa")->containsMouse()) {

	Game::gameMap.getMapPiece("south africa")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 0));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	Game::entityManager.getEntity("map")->getSprite()->setColor(sf::Color(255, 255, 255, 255));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::G)) {

	std::cout << std::endl;

	std::cout << Game::gameMap.getMapPiece("zimbabwe")->getPosition().x << ", " << Game::gameMap.getMapPiece("zimbabwe")->getPosition().y << std::endl;
	std::cout << Game::gameMap.getMapPiece("botswana")->getPosition().x << ", " << Game::gameMap.getMapPiece("botswana")->getPosition().y << std::endl;
	std::cout << Game::gameMap.getMapPiece("south africa")->getPosition().x << ", " << Game::gameMap.getMapPiece("south africa")->getPosition().y << std::endl;

	std::cout << std::endl;

	}

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
Game::gameMap.getMapPiece("nigeria")->getSprite()->setColor(Game::gameMap.getMapPiece("nigeria")->getColor());
Game::gameMap.getMapPiece("morocco")->getSprite()->setColor(Game::gameMap.getMapPiece("morocco")->getColor());
Game::gameMap.getMapPiece("ethiopia")->getSprite()->setColor(Game::gameMap.getMapPiece("ethiopia")->getColor());
Game::gameMap.getMapPiece("western sahara")->getSprite()->setColor(Game::gameMap.getMapPiece("western sahara")->getColor());
Game::gameMap.getMapPiece("tunisia")->getSprite()->setColor(Game::gameMap.getMapPiece("tunisia")->getColor());
Game::gameMap.getMapPiece("somalia")->getSprite()->setColor(Game::gameMap.getMapPiece("somalia")->getColor());
Game::gameMap.getMapPiece("ghana")->getSprite()->setColor(Game::gameMap.getMapPiece("ghana")->getColor());
Game::gameMap.getMapPiece("liberia")->getSprite()->setColor(Game::gameMap.getMapPiece("liberia")->getColor());
Game::gameMap.getMapPiece("sierra leone")->getSprite()->setColor(Game::gameMap.getMapPiece("sierra leone")->getColor());
Game::gameMap.getMapPiece("cameroon")->getSprite()->setColor(Game::gameMap.getMapPiece("cameroon")->getColor());
Game::gameMap.getMapPiece("uganda")->getSprite()->setColor(Game::gameMap.getMapPiece("uganda")->getColor());
Game::gameMap.getMapPiece("central republic")->getSprite()->setColor(Game::gameMap.getMapPiece("central republic")->getColor());
Game::gameMap.getMapPiece("congo")->getSprite()->setColor(Game::gameMap.getMapPiece("congo")->getColor());
Game::gameMap.getMapPiece("gabon")->getSprite()->setColor(Game::gameMap.getMapPiece("gabon")->getColor());
Game::gameMap.getMapPiece("kenya")->getSprite()->setColor(Game::gameMap.getMapPiece("kenya")->getColor());
Game::gameMap.getMapPiece("democratic congo")->getSprite()->setColor(Game::gameMap.getMapPiece("democratic congo")->getColor());
Game::gameMap.getMapPiece("angola")->getSprite()->setColor(Game::gameMap.getMapPiece("angola")->getColor());
Game::gameMap.getMapPiece("namibia")->getSprite()->setColor(Game::gameMap.getMapPiece("namibia")->getColor());
Game::gameMap.getMapPiece("tanzania")->getSprite()->setColor(Game::gameMap.getMapPiece("tanzania")->getColor());
Game::gameMap.getMapPiece("zambia")->getSprite()->setColor(Game::gameMap.getMapPiece("zambia")->getColor());
Game::gameMap.getMapPiece("mozambique")->getSprite()->setColor(Game::gameMap.getMapPiece("mozambique")->getColor());
Game::gameMap.getMapPiece("zimbabwe")->getSprite()->setColor(Game::gameMap.getMapPiece("zimbabwe")->getColor());
Game::gameMap.getMapPiece("botswana")->getSprite()->setColor(Game::gameMap.getMapPiece("botswana")->getColor());
Game::gameMap.getMapPiece("south africa")->getSprite()->setColor(Game::gameMap.getMapPiece("south africa")->getColor());

}
