// scaleImages.cpp - Scales game resources based on screen size

#include "../Game.hpp"

void Game::scaleImages() {

float height = getCurrentScreenSize().height / entityManager.getEntity("map")->getBoundingBox().height;
float width = getCurrentScreenSize().width / entityManager.getEntity("map")->getBoundingBox().width;
entityManager.getEntity("map")->getSprite()->setOrigin(entityManager.getEntity("map")->getBoundingBox().width / 2, entityManager.getEntity("map")->getBoundingBox().height / 2);
entityManager.getEntity("map")->setPosition(sf::Vector2f(getCurrentScreenSize().width / 2, getCurrentScreenSize().height / 2));

	if (width < height) {

	entityManager.getEntity("map")->scale(width, width);
	gameMap.getMapPiece("algeria")->scale(width, width);
	gameMap.getMapPiece("mali")->scale(width, width);
	gameMap.getMapPiece("mauritania")->scale(width, width);

	}

	if (height < width) {

	entityManager.getEntity("map")->scale(height, height);
	gameMap.getMapPiece("algeria")->scale(height, height);
	gameMap.getMapPiece("mali")->scale(height, height);
	gameMap.getMapPiece("mauritania")->scale(height, height);

	}

}
