// scaleImages.cpp - Scales game resources based on screen size

#include <iostream>

#include "../Game.hpp"

void Game::scaleImages() {

sf::VideoMode screen = getCurrentWindowSize();

std::cout << screen.width << " " << screen.height << "\n";

float height = screen.height / entityManager.getEntity("map")->getBoundingBox().height;
float width = screen.width / entityManager.getEntity("map")->getBoundingBox().width / 1.3;

entityManager.getEntity("map")->scale(width, height);
entityManager.getEntity("bg")->scale(width, height);
gameMap.getMapPiece("algeria")->scale(width, height);
gameMap.getMapPiece("mali")->scale(width, height);
gameMap.getMapPiece("mauritania")->scale(width, height);
gameMap.getMapPiece("niger")->scale(width, height);
gameMap.getMapPiece("libya")->scale(width, height);
gameMap.getMapPiece("burkina faso")->scale(width, height);
gameMap.getMapPiece("chad")->scale(width, height);
gameMap.getMapPiece("cote divoire")->scale(width, height);
gameMap.getMapPiece("egypt")->scale(width, height);
gameMap.getMapPiece("senegal")->scale(width, height);
gameMap.getMapPiece("sudan")->scale(width, height);
gameMap.getMapPiece("guinea")->scale(width, height);

entityManager.getEntity("map")->setPosition(sf::Vector2f(0, 0));
entityManager.getEntity("map")->getSprite()->setOrigin(0, 0);
entityManager.getEntity("bg")->setPosition(sf::Vector2f(0, 0));
entityManager.getEntity("bg")->getSprite()->setOrigin(0, 0);

	if (screen.width == 1024 && screen.height == 768) {

	gameMap.getMapPiece("mauritania")->getSprite()->setPosition(sf::Vector2f(77, 174));
	gameMap.getMapPiece("algeria")->getSprite()->setPosition(sf::Vector2f(213, 98));
	gameMap.getMapPiece("mali")->getSprite()->setPosition(sf::Vector2f(140, 204));
	gameMap.getMapPiece("libya")->getSprite()->setPosition(sf::Vector2f(370, 120));
	gameMap.getMapPiece("niger")->getSprite()->setPosition(sf::Vector2f(273, 207));
	gameMap.getMapPiece("burkina faso")->getSprite()->setPosition(sf::Vector2f(168, 263));
	gameMap.getMapPiece("chad")->getSprite()->setPosition(sf::Vector2f(393, 230));
	gameMap.getMapPiece("cote divoire")->getSprite()->setPosition(sf::Vector2f(124, 312));
	gameMap.getMapPiece("egypt")->getSprite()->setPosition(sf::Vector2f(506, 114));
	gameMap.getMapPiece("senegal")->getSprite()->setPosition(sf::Vector2f(32, 240));
	gameMap.getMapPiece("sudan")->getSprite()->setPosition(sf::Vector2f(510, 250));
	gameMap.getMapPiece("guinea")->getSprite()->setPosition(sf::Vector2f(65, 289));

	}

	if (screen.width == 1024 && screen.height == 744) {

	gameMap.getMapPiece("mauritania")->getSprite()->setPosition(sf::Vector2f(78, 166));
	gameMap.getMapPiece("algeria")->getSprite()->setPosition(sf::Vector2f(214, 94));
	gameMap.getMapPiece("mali")->getSprite()->setPosition(sf::Vector2f(140, 195));

	}

}
