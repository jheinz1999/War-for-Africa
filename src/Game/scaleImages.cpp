// scaleImages.cpp - Scales game resources based on screen size

#include <iostream>

#include "../Game.hpp"

void Game::scaleImages() {

std::cout << Game::window.getView().getViewport().width << " " << Game::window.getView().getViewport().height << "\n";

float height = 768 / entityManager.getEntity("bg")->getBoundingBox().height;
float width = 1024 / entityManager.getEntity("bg")->getBoundingBox().width / 1.3;

entityManager.getEntity("bg")->scale(width, height);
entityManager.getEntity("notbar")->scale((1024 - entityManager.getEntity("bg")->getBoundingBox().width) / entityManager.getEntity("notbar")->getBoundingBox().width, height);

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
gameMap.getMapPiece("ethiopia")->scale(width, height);
gameMap.getMapPiece("nigeria")->scale(width, height);
gameMap.getMapPiece("morocco")->scale(width, height);
gameMap.getMapPiece("western sahara")->scale(width, height);
gameMap.getMapPiece("tunisia")->scale(width, height);
gameMap.getMapPiece("somalia")->scale(width, height);
gameMap.getMapPiece("ghana")->scale(width, height);
gameMap.getMapPiece("liberia")->scale(width, height);
gameMap.getMapPiece("sierra leone")->scale(width, height);
gameMap.getMapPiece("uganda")->scale(width, height);
gameMap.getMapPiece("central republic")->scale(width, height);
gameMap.getMapPiece("cameroon")->scale(width, height);
gameMap.getMapPiece("congo")->scale(width, height);
gameMap.getMapPiece("gabon")->scale(width, height);
gameMap.getMapPiece("kenya")->scale(width, height);
gameMap.getMapPiece("democratic congo")->scale(width, height);
gameMap.getMapPiece("namibia")->scale(width, height);
gameMap.getMapPiece("angola")->scale(width, height);
gameMap.getMapPiece("tanzania")->scale(width, height);
gameMap.getMapPiece("mozambique")->scale(width, height);
gameMap.getMapPiece("zambia")->scale(width, height);
gameMap.getMapPiece("botswana")->scale(width, height);
gameMap.getMapPiece("south africa")->scale(width, height);
gameMap.getMapPiece("zimbabwe")->scale(width, height);

entityManager.getEntity("bg")->setPosition(sf::Vector2f(0, 0));
entityManager.getEntity("bg")->getSprite()->setOrigin(0, 0);

entityManager.getEntity("notbar")->getSprite()->setOrigin(0, 0);
entityManager.getEntity("notbar")->setPosition(sf::Vector2f(entityManager.getEntity("bg")->getBoundingBox().width, 0));

	if (1) {

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
	gameMap.getMapPiece("ethiopia")->getSprite()->setPosition(sf::Vector2f(630, 281));
	gameMap.getMapPiece("morocco")->getSprite()->setPosition(sf::Vector2f(139, 64));
	gameMap.getMapPiece("nigeria")->getSprite()->setPosition(sf::Vector2f(279, 296));
	gameMap.getMapPiece("western sahara")->getSprite()->setPosition(sf::Vector2f(70, 139));
	gameMap.getMapPiece("tunisia")->getSprite()->setPosition(sf::Vector2f(309, 43));
	gameMap.getMapPiece("somalia")->getSprite()->setPosition(sf::Vector2f(698, 338));
	gameMap.getMapPiece("ghana")->getSprite()->setPosition(sf::Vector2f(172, 307));
	gameMap.getMapPiece("liberia")->getSprite()->setPosition(sf::Vector2f(84, 324));
	gameMap.getMapPiece("sierra leone")->getSprite()->setPosition(sf::Vector2f(58, 304));
	gameMap.getMapPiece("cameroon")->getSprite()->setPosition(sf::Vector2f(323, 313));
	gameMap.getMapPiece("uganda")->getSprite()->setPosition(sf::Vector2f(545, 380));
	gameMap.getMapPiece("central republic")->getSprite()->setPosition(sf::Vector2f(411, 326));
	gameMap.getMapPiece("congo")->getSprite()->setPosition(sf::Vector2f(348, 398));
	gameMap.getMapPiece("gabon")->getSprite()->setPosition(sf::Vector2f(315, 399));
	gameMap.getMapPiece("kenya")->getSprite()->setPosition(sf::Vector2f(606, 392));
	gameMap.getMapPiece("democratic congo")->getSprite()->setPosition(sf::Vector2f(418, 430));
	gameMap.getMapPiece("angola")->getSprite()->setPosition(sf::Vector2f(381, 509));
	gameMap.getMapPiece("namibia")->getSprite()->setPosition(sf::Vector2f(384, 627));
	gameMap.getMapPiece("tanzania")->getSprite()->setPosition(sf::Vector2f(568, 458));
	gameMap.getMapPiece("zambia")->getSprite()->setPosition(sf::Vector2f(491, 528));
	gameMap.getMapPiece("mozambique")->getSprite()->setPosition(sf::Vector2f(574, 586));
	gameMap.getMapPiece("zimbabwe")->getSprite()->setPosition(sf::Vector2f(505, 591));
	gameMap.getMapPiece("botswana")->getSprite()->setPosition(sf::Vector2f(452, 624));
	gameMap.getMapPiece("south africa")->getSprite()->setPosition(sf::Vector2f(449, 689));
	
	}

}
