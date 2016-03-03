// loadResources.cpp - Loads required resources/unloads unrequired resources

#include "../MenuState.hpp"
#include "../Game.hpp"

void MenuState::handleInput() {

	if (sf::Keyboard::isKeyPressed(Game::keyCode["UP"]))
	Game::entityManager.getEntity("test 69")->getSprite()->move(0, -1);

	if (sf::Keyboard::isKeyPressed(Game::keyCode["DOWN"]))
	Game::entityManager.getEntity("test 69")->getSprite()->move(0, 1);

	if (sf::Keyboard::isKeyPressed(Game::keyCode["LEFT"]))
	Game::entityManager.getEntity("test 69")->getSprite()->move(-1, 0);

	if (sf::Keyboard::isKeyPressed(Game::keyCode["RIGHT"]))
	Game::entityManager.getEntity("test 69")->getSprite()->move(1, 0);

	if (sf::Keyboard::isKeyPressed(Game::keyCode["ROTLEFT"]))
	Game::entityManager.getEntity("test 69")->getSprite()->rotate(-1);

	if (sf::Keyboard::isKeyPressed(Game::keyCode["ROTRIGHT"]))
	Game::entityManager.getEntity("test 69")->getSprite()->rotate(1);

} 
