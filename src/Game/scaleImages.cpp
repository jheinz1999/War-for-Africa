// scaleImages.cpp - Scales game resources based on screen size

#include <iostream>

#include "../Game.hpp"

void Game::scaleImages() {

sf::VideoMode screen = getCurrentWindowSize();

std::cout << screen.width << " " << screen.height << "\n";

float height = screen.height / entityManager.getEntity("map")->getBoundingBox().height;
float width = screen.width / entityManager.getEntity("map")->getBoundingBox().width / 1.3;

entityManager.getEntity("map")->scale(width, height);
gameMap.getMapPiece("algeria")->scale(width, height);
gameMap.getMapPiece("mali")->scale(width, height);
gameMap.getMapPiece("mauritania")->scale(width, height);

entityManager.getEntity("map")->setPosition(sf::Vector2f(0, 0));
entityManager.getEntity("map")->getSprite()->setOrigin(0, 0);

	if (screen.width == 1024 && screen.height == 768) {

	gameMap.getMapPiece("mauritania")->getSprite()->setPosition(sf::Vector2f(77, 174));
	gameMap.getMapPiece("algeria")->getSprite()->setPosition(sf::Vector2f(213, 98));
	gameMap.getMapPiece("mali")->getSprite()->setPosition(sf::Vector2f(140, 204));

}

}
